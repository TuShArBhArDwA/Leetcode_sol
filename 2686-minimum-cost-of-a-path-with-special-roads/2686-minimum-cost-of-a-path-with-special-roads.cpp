class Solution {
public:
  struct Node {
    vector<pair<pair<int, int>, int>> neighbors;
  };
  unordered_map<int, unordered_map<int, Node>> tree;
  
  int getCost(pair<int, int> p1, pair<int, int> p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
  }
  
  int minimumCost(vector<int>& start, vector<int>& target, vector<vector<int>>& specialRoads) {
    for (auto& vec : specialRoads) {
      tree[vec[0]][vec[1]].neighbors.push_back({{vec[2], vec[3]}, vec[4]});
    }
    pair<int, int> s = {start[0], start[1]};
    pair<int, int> t = {target[0], target[1]};
    
    priority_queue<pair<int, pair<int, int>>> pq;
    unordered_map<int, unordered_set<int>> visited;
    pq.push({0, {s.first, s.second}});
    while (!pq.empty()) {
      auto info = pq.top(); pq.pop();
      int cost = -info.first;
      auto node = info.second;
      if (visited[node.first].count(node.second)) continue;
      visited[node.first].insert(node.second);
      if (node == t) return cost;
      pq.push({-cost - getCost(node, t), t});
      // Add special roads as edges.
      for (auto& vec : specialRoads) {
        pair<int, int> p = {vec[0], vec[1]};
        int c = getCost(node, p);
        pq.push({-c - cost, p});
      }
      // Add normal roads to special start points as edges.
      for (auto& child : tree[node.first][node.second].neighbors) {
        pq.push({-cost - child.second, {child.first.first, child.first.second}});
      }
    }
    return -1;
  }
};