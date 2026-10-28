@interface MMFinderLiveFootageReplayReporter : NSObject
{
    MMFinderLiveFootageReplayModel * _replayModel; // +0x8
    unsigned long long _replayLengthInMilliseconds; // +0x10
    NSString * _correlationId; // +0x18
}
- (id)initWithFootageReplayModel:(id)arg1;
- (void)onFootageReplayEnter;
- (void)onFootageReplayStartWithLengthInMilliseconds:(unsigned long long)arg1;
- (void)onFootageReplayLeaveWithDurationInMilliseconds:(unsigned long long)arg1;
- (void)onFootageReplayOrientationChangeInvokedWithTargetOrientation:(long long)arg1;
- (void)onFootageReplayPausedAtMediaTimeInMilliseconds:(unsigned long long)arg1;
- (void)onFootageReplaySeekFromMediaTimeInMilliseconds:(unsigned long long)arg1 toMediaTimeInMilliseconds:(unsigned long long)arg2;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)replayModel;
- (void)setReplayModel:(id)arg1;
- (unsigned long long)replayLengthInMilliseconds;
- (void)setReplayLengthInMilliseconds:(unsigned long long)arg1;
- (id)correlationId;
- (void)setCorrelationId:(id)arg1;
- (void).cxx_destruct;
@end
