#ifndef _RAFTCPP_NODE_NODE_H_
#define _RAFTCPP_NODE_NODE_H_

namespace raftcpp {
namespace node {

// A RAFT node instance.
class Node final {
public:

private:
  State state_;

//timerManager;
//electionTimer;
//voteTimer;
//stepDownTimer;
//snapshotTimer;
//transferTimer;
  TimerManager timer_manager_;
  // The configurations of this raft group.
  RaftConfig config_;
  TermID current_term_id_;
  NodeID current_node_id_;
  Timestamp last_leader_timestamp_;
  LogStorage log_storage_;
};

}
}

#endif
