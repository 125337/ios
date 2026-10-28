@interface EditVideoCompositionBrowserView : MMUIView <MAVVideoCompositionPlayerDelegate>
{
    BOOL _isPlayingBeforeEnterBackground; // +0x8
    id <EditVideoCompositionBrowserViewDelegate> _delegate; // +0x10
    MAVVideoCompositionPlayer * _videoPlayer; // +0x18
    MAVVideoComposition * _composition; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (BOOL)isPlaying;
- (void)play;
- (void)replay;
- (void)pause;
- (void)setMute:(BOOL)arg1;
- (void)seekToTime:(struct)arg1;
- (void)refreshSurface;
- (void)dealloc;
- (CGRect)getVideoPreviewFrame;
- (void)updateComposition:(id)arg1;
- (double)listenTimeIntervalInSection;
- (void)videoCompositionPlayerProgressUpdated:(id)arg1 currentTime:(struct)arg2;
- (void)videoCompositionPlayerPlayCompleted:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoPlayer;
- (void)setVideoPlayer:(id)arg1;
- (id)composition;
- (void)setComposition:(id)arg1;
- (BOOL)isPlayingBeforeEnterBackground;
- (void)setIsPlayingBeforeEnterBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
