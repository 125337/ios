@interface WCFinderPushFeedPlayParams : NSObject
{
    BOOL _pauseVideo; // +0x8
    BOOL _forceResumePlaying; // +0x9
    double _startPlayVideoTime; // +0x10
    double _playbackRate; // +0x18
}
- (id)init;
- (double)startPlayVideoTime;
- (void)setStartPlayVideoTime:(double)arg1;
- (BOOL)pauseVideo;
- (void)setPauseVideo:(BOOL)arg1;
- (double)playbackRate;
- (void)setPlaybackRate:(double)arg1;
- (BOOL)forceResumePlaying;
- (void)setForceResumePlaying:(BOOL)arg1;
@end

