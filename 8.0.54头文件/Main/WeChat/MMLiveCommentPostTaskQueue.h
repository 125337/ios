@interface MMLiveCommentPostTaskQueue : NSObject
{
    unsigned int _boxType; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    NSMutableArray * _pendingQueue; // +0x18
    NSMutableDictionary * _postingDict; // +0x20
    unsigned long long _currMaxPostTaskID; // +0x28
}
- (id)initWithTaskId:(id)arg1 boxType:(unsigned int)arg2;
- (id)pendingQueue;
- (id)postingDict;
- (int)maxPostingCntOnce;
- (BOOL)isCurrPostingTaskOverLimit;
- (unsigned long long)generatePostTaskID;
- (void)autoIncreasePostTaskID;
- (void)onPostTaskPostBegin:(id)arg1;
- (void)onPostTaskPostEnd:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)boxType;
- (void)setBoxType:(unsigned int)arg1;
- (void)setPendingQueue:(id)arg1;
- (void)setPostingDict:(id)arg1;
- (unsigned long long)currMaxPostTaskID;
- (void)setCurrMaxPostTaskID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

