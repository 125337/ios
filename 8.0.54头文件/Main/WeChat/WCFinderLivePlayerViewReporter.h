@interface WCFinderLivePlayerViewReporter : NSObject
{
    NSString * _playId; // +0x8
    NSString * _playUrl; // +0x10
    unsigned long long _videoDuration; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1 videoExpectPlayTime:(unsigned long long)arg2 videoDuration:(unsigned long long)arg3 playUrl:(id)arg4;
- (void)onPlayerPauseForLoading:(unsigned long long)arg1 seekTime:(double)arg2;
- (void)onPlayerResumeForLoaded:(unsigned long long)arg1 seekTime:(double)arg2;
- (void)onPlayerPlayFinishSeekTime:(double)arg1;
- (void)onPlayerPlayFailed:(unsigned int)arg1 seekTime:(double)arg2;
- (id)updateExtInfo:(double)arg1 errCode:(unsigned int)arg2 playUrl:(id)arg3;
- (void)reportLivePlayerViewReport:(unsigned long long)arg1 params:(id)arg2;
- (id)playId;
- (void)setPlayId:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void).cxx_destruct;
@end

