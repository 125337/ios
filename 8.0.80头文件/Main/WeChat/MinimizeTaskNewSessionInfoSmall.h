@interface MinimizeTaskNewSessionInfoSmall : NSObject
{
    BOOL _isFold; // +0x8
    BOOL _isPlaying; // +0x9
    NSString * _smallSessionId; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    NSMutableArray * _stateHistory; // +0x20
}
- (id)init;
- (unsigned long long)calcStayTime;
- (unsigned long long)calcFoldPlayTime;
- (unsigned long long)calcExpandPlayTime;
- (void)recordStateChangeWithEvent:(unsigned int)arg1 andTaskData:(id)arg2;
- (unsigned int)currentState;
- (void)recordStateChangeWithCurrentState;
- (id)smallSessionId;
- (void)setSmallSessionId:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)stateHistory;
- (void)setStateHistory:(id)arg1;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (void).cxx_destruct;
@end
