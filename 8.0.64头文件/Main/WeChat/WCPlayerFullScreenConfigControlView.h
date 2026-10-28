@interface WCPlayerFullScreenConfigControlView : WCPlayerControlView <SightIconViewDelegate, FullScreenVideoProgressBarDelegate, UIGestureRecognizerDelegate>
{
    BOOL _fullScreen; // +0x8
    BOOL _shrink; // +0x9
    float _progressSliderStartTime; // +0xc
    NSObject<WCPlayerConfigDelegate> * _delegate; // +0x10
    UIView * _toolPanView; // +0x18
    UIImageView * _topToolView; // +0x20
    UIImageView * _bottomToolView; // +0x28
    WCPlayerFullScreenProgressBarBase * _progressBar; // +0x30
    WCPlayerProgressTimeLabel * _progressTimeLabel; // +0x38
    SightIconView * _iconView; // +0x40
    UILabel * _hintLabel; // +0x48
    UIButton * _closeButton; // +0x50
    MMUILabel * _errorLabel; // +0x58
    UIButton * _attachButton; // +0x60
    WCPlayerFullScreenConfig * _playerConfig; // +0x68
    WCPlayerShareableButton * _shareableButton; // +0x70
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x78
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 Delegate:(id)arg2 Config:(id)arg3;
- (void)addSubviews;
- (BOOL)isVideoProgressBarWithMultiSpeed;
- (BOOL)isVideoProgressBarWithShrink;
- (void)layoutSubviews;
- (id)toolPanView;
- (id)topToolView;
- (void)updateTopToolViewWithEdgeInsets:(UIEdgeInsets)arg1;
- (id)bottomToolView;
- (void)showProgressBarView;
- (void)hideProgressBarView;
- (void)setProgressBarViewHidden:(BOOL)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)updateBottomToolViewWithEdgeInsets:(UIEdgeInsets)arg1;
- (id)closeButton;
- (void)onCloseButtonTap:(id)arg1;
- (id)attachButton;
- (id)progressBar;
- (id)progressTimeLabel;
- (id)iconView;
- (id)hintLabel;
- (id)errorLabel;
- (id)shareableButton;
- (void)showErrorTipsWithText:(id)arg1;
- (void)setAttachButtonTitle:(id)arg1;
- (void)onProgressEnd;
- (void)setProgress:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoSize:(CGSize)arg1;
- (void)setToolViewHidden:(BOOL)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onTapSightIconView;
- (void)showDownloadPercentView;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)hiddenDownloadPercentView;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)updateProgressDuration:(float)arg1;
- (void)setPlayBackRate:(double)arg1;
- (BOOL)isVideoPlaying;
- (BOOL)isVideoPause;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)onSliderActive:(BOOL)arg1;
- (void)onSetPlayBackRate:(double)arg1;
- (void)onUpdateCurrentTime:(double)arg1;
- (void)onUpdateTotalTime:(double)arg1;
- (void)onPlayButtonClicked;
- (BOOL)onVideoIsPlaying;
- (void)onUpdateProgressExpandingStatus:(BOOL)arg1;
- (void)onShrinkButtonClicked;
- (void)onExpandButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setToolPanView:(id)arg1;
- (void)setTopToolView:(id)arg1;
- (void)setBottomToolView:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setProgressTimeLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setHintLabel:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setAttachButton:(id)arg1;
- (id)playerConfig;
- (void)setPlayerConfig:(id)arg1;
- (BOOL)fullScreen;
- (void)setFullScreen:(BOOL)arg1;
- (BOOL)shrink;
- (void)setShrink:(BOOL)arg1;
- (void)setShareableButton:(id)arg1;
- (float)progressSliderStartTime;
- (void)setProgressSliderStartTime:(float)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
