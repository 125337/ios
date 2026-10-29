@interface WCPlayerConfigControlView : WCPlayerControlView <SightIconViewDelegate, WCC2CPlayerProgressBarDelegate, UIGestureRecognizerDelegate>
{
    BOOL _fullScreen; // +0x8
    BOOL _shrink; // +0x9
    NSObject<WCPlayerConfigDelegate> * _delegate; // +0x10
    UIView * _toolPanView; // +0x18
    UIImageView * _bottomToolView; // +0x20
    WCC2CPlayerProgressBar * _progressBar; // +0x28
    SightIconView * _iconView; // +0x30
    UILabel * _hintLabel; // +0x38
    MMUIButton * _closeButton; // +0x40
    MMUILabel * _errorLabel; // +0x48
    UIButton * _attachButton; // +0x50
    WCPlayerConfig * _playerConfig; // +0x58
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x60
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x68
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 Delegate:(id)arg2 Config:(id)arg3;
- (void)addSubviews;
- (void)layoutSubviews;
- (id)toolPanView;
- (id)bottomToolView;
- (void)updateBottomToolViewWithEdgeInsets:(UIEdgeInsets)arg1;
- (id)closeButton;
- (void)onCloseButtonTap:(id)arg1;
- (id)attachButton;
- (id)progressBar;
- (id)iconView;
- (id)hintLabel;
- (id)errorLabel;
- (void)showErrorTipsWithText:(id)arg1;
- (void)setAttachButtonTitle:(id)arg1;
- (BOOL)isVideoPlaying;
- (void)showToolView;
- (void)hideToolView;
- (void)onProgressEnd;
- (void)onPlayerCreated;
- (void)setProgress:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)updateVideoSize:(CGSize)arg1;
- (void)setToolViewHidden:(BOOL)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)onTapSightIconView;
- (void)showDownloadPercentView;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)hiddenDownloadPercentView;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)updateProgressDuration:(float)arg1;
- (void)onProgressBarHidden;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setToolPanView:(id)arg1;
- (void)setBottomToolView:(id)arg1;
- (void)setProgressBar:(id)arg1;
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
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

