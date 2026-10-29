@interface WCFinderLiveGetMicReplayInfoResult : NSObject
{
    unsigned int _nextPollTimeInterval; // +0x8
    long long _replayType; // +0x10
    MicReplayInfo * _micReplayInfo; // +0x18
    KtvReplayInfo * _ktvReplayInfo; // +0x20
}
- (long long)replayType;
- (void)setReplayType:(long long)arg1;
- (id)micReplayInfo;
- (void)setMicReplayInfo:(id)arg1;
- (unsigned int)nextPollTimeInterval;
- (void)setNextPollTimeInterval:(unsigned int)arg1;
- (id)ktvReplayInfo;
- (void)setKtvReplayInfo:(id)arg1;
- (void).cxx_destruct;
@end
