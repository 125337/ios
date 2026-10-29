@interface TPLiveRecord : NSObject
{
    TPTimer * _livePeroidTimer; // +0x8
    TPTimeTracker * _liveBufferingTracker; // +0x10
    long long _peroidBufferedDurationMs; // +0x18
    long long _peroidBufferedCount; // +0x20
    long long _prepareStartTime; // +0x28
    long long _prepareEndTime; // +0x30
}
- (id)livePeroidTimer;
- (void)setLivePeroidTimer:(id)arg1;
- (id)liveBufferingTracker;
- (void)setLiveBufferingTracker:(id)arg1;
- (long long)peroidBufferedDurationMs;
- (void)setPeroidBufferedDurationMs:(long long)arg1;
- (long long)peroidBufferedCount;
- (void)setPeroidBufferedCount:(long long)arg1;
- (long long)prepareStartTime;
- (void)setPrepareStartTime:(long long)arg1;
- (long long)prepareEndTime;
- (void)setPrepareEndTime:(long long)arg1;
- (void).cxx_destruct;
@end

