@interface TingFinderVideoPlayer : TingBizPlayer <WCFinderPlayerViewForTingDelegate>
{
    WCFinderPlayerViewForTing * _videoView; // +0x8
    WCFinderDataItem * _fetchedDataItem; // +0x10
}
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;
- (void)setupPlayerView;
- (id)playerView;
- (id)displayElement;
- (id)view;
- (BOOL)isPlayRateSupported;
- (BOOL)canSeek;
- (void)setPlayRate:(float)arg1;
- (void)seekToTime:(double)arg1;
- (int)playerKernelType;
- (void)prepareToPlay;
- (void)onSuccessWithDataItem:(id)arg1;
- (void)play;
- (void)pause;
- (void)resume;
- (void)stop;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (void)finderPlayerViewForTingOnDisplayViewMTKViewCreated:(id)arg1;
- (void)finderPlayerViewForTingOnVideoPause:(id)arg1;
- (void)finderPlayerViewForTingOnVideoPlay:(id)arg1;
- (void)finderPlayerViewForTingOnVideoEnd:(id)arg1;
- (void)finderPlayerViewForTing:(id)arg1 onCurrentTimeUpdated:(double)arg2 duration:(double)arg3;
- (void)finderPlayerViewForTing:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onBufferingChanged:(BOOL)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onVideoPlayFail:(int)arg2 errorDesc:(id)arg3;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)fetchedDataItem;
- (void)setFetchedDataItem:(id)arg1;
- (void).cxx_destruct;
@end
