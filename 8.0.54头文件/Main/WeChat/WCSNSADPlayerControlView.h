@interface WCSNSADPlayerControlView : WCPlayerControlView <SightIconViewDelegate>
{
    SightIconView * _iconView; // +0x8
    id <WCSNSADPlayerControlViewDelegate> _delegate; // +0x10
    CGSize _iconSize; // +0x18
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)iconView;
- (void)setIconSize:(CGSize)arg1;
- (void)setProgress:(double)arg1;
- (void)layoutSubviews;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onPlayerCreated;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)showPauseView;
- (void)hidePauseView;
- (void)hideIconView;
- (CGSize)iconSize;
- (void)setIconView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

