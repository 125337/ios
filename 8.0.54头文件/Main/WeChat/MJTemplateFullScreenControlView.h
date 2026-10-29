@interface MJTemplateFullScreenControlView : UIView <FullScreenVideoProgressBarDelegate>
{
    id <MJTemplateFullScreenControlViewDelegate> _delegate; // +0x8
    MJTemplateFullScreenControlViewParams * _params; // +0x10
    WCPlayerShareableButton * _shareButton; // +0x18
    WCPlayerConfigFullScreenProgressBar * _progressBar; // +0x20
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)initView;
- (void)initShareButtonIfNeeded;
- (void)initProgressBarIfNeeded;
- (void)layoutSubviews;
- (void)onClickShareButton:(id)arg1;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)onSetPlayBackRate:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (void).cxx_destruct;
@end

