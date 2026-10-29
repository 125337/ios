@interface MMFinderLiveRedPacketItem : NSObject
{
    BOOL _localRemainingTimeEnabled; // +0x8
    unsigned int _localRemainingTimeInterval; // +0xc
    NSString * _redPacketBuffer; // +0x10
    NSString * _observedKey; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    NSString * _redPacketId; // +0x28
    long long _status; // +0x30
    FinderLiveRedPacketInfo * _redPacketInfo; // +0x38
    NSTimer * _localRemainingTimer; // +0x40
}
- (id)initWithTaskId:(id)arg1 redPacketInfo:(id)arg2;
- (void)dealloc;
- (unsigned long long)beginTimeInterval;
- (unsigned long long)endTimeInterval;
- (unsigned int)remainingTimeInterval;
- (id)referredLiveMicId;
- (id)redPacketBuffer;
- (BOOL)isAllReceived;
- (BOOL)sentByAnchor;
- (void)setLocalRemainingTimeInterval:(unsigned int)arg1;
- (void)setStatus:(long long)arg1;
- (BOOL)isAvailable;
- (BOOL)isFinished;
- (void)changeStatusToOpened;
- (BOOL)isFinishedInCurrentCycle;
- (void)changeStatusToOpenedInCurrentCycle;
- (void)resetStatusIfOpenedInCurrentCycle;
- (void)refreshStatus;
- (void)startLocalRemainingTimer;
- (void)stopLocalRemainingTimer;
- (void)updateFromRedPacketInfo:(id)arg1;
- (id)observedKey;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)redPacketId;
- (long long)status;
- (BOOL)localRemainingTimeEnabled;
- (unsigned int)localRemainingTimeInterval;
- (id)redPacketInfo;
- (void)setRedPacketInfo:(id)arg1;
- (id)localRemainingTimer;
- (void)setLocalRemainingTimer:(id)arg1;
- (void).cxx_destruct;
@end

