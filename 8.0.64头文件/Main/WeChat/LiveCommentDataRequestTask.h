@interface LiveCommentDataRequestTask : NSObject
{
    BOOL _isStartGetLiveComment; // +0x8
    BOOL _isLongPulling; // +0x9
    MMLiveTaskId * _taskId; // +0x10
}
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isStartGetLiveComment;
- (void)setIsStartGetLiveComment:(BOOL)arg1;
- (BOOL)isLongPulling;
- (void)setIsLongPulling:(BOOL)arg1;
- (void).cxx_destruct;
@end
