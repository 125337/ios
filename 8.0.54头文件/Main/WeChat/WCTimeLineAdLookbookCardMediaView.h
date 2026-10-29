@interface WCTimeLineAdLookbookCardMediaView : MMUIView <WCSightViewDelegate>
{
    BOOL _bTimelineScene; // +0x8
    id <WCTimeLineAdLookbookCardMediaViewDelegate> _delegate; // +0x10
    WCAdURLImageView * _imageView; // +0x18
    WCAdLookbookSightView * _sightView; // +0x20
    WCSNSADPlayerControlView * _pauseIconView; // +0x28
    WCDataItem * _dataItem; // +0x30
    WCMediaItem * _mediaData; // +0x38
    WCAdLookbookCardReportItem * _reportItem; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 mediaData:(id)arg3 bTimelineScene:(BOOL)arg4 reportItem:(id)arg5;
- (void)generateInitialSubviews;
- (void)layoutSubviews;
- (id)imageView;
- (id)pauseIconView;
- (void)setVideoWithPlayState:(BOOL)arg1;
- (void)updateVideoPauseIconState:(BOOL)arg1;
- (void)setVideoControlViewHidden:(BOOL)arg1;
- (void)setVideoToStandby:(BOOL)arg1;
- (void)getSightViewReady;
- (id)generateSightViewWithMediaData:(id)arg1 withFrame:(CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (BOOL)onSightViewShouldForbidShowingPauseIcon;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)sightView;
- (void)setSightView:(id)arg1;
- (void)setPauseIconView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (id)reportItem;
- (void)setReportItem:(id)arg1;
- (void).cxx_destruct;
@end

