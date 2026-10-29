@interface WCCanvasAdControlView : WCPlayerControlView <SightIconViewDelegate, WCCanvasAdVideoProgressBarDelegate>
{
    BOOL _ignoreEdgeInset; // +0x8
    BOOL _withAudioButton; // +0x9
    BOOL _isBufferViewShow; // +0xa
    NSObject<WCCanvasAdControlViewDelegate> * _delegate; // +0x10
    UIView * _toolPanView; // +0x18
    WCCanvasAdVideoProgressBar * _progressBar; // +0x20
    SightIconView * _iconView; // +0x28
    MMTimer * _autoHideControlViewTimer; // +0x30
    unsigned long long _playerMode; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 andPlayerMode:(unsigned long long)arg2;
- (void)dealloc;
- (void)addSubviews;
- (void)setToolViewHidden:(BOOL)arg1;
- (BOOL)isToolBarShow;
- (void)showPlayView;
- (void)hiddenIconView;
- (void)hideFullScreenBtn;
- (void)layoutSubviews;
- (id)toolPanView;
- (id)progressBar;
- (id)iconView;
- (void)onProgressEnd;
- (BOOL)needIgnoreEdgeInset;
- (BOOL)shouldHideVoiceBtn;
- (void)setProgress:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onTapSightIconView;
- (void)showDownloadPercentView;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoOperationBtnCLick:(BOOL)arg1;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onVoiceBtnClick:(BOOL)arg1;
- (void)onFullscreenBtnClick:(BOOL)arg1;
- (void)onShowControllerView;
- (struct)getCurrentPlaybackTime;
- (BOOL)isVideoExist;
- (BOOL)isBtnClickable;
- (void)onHideControllerView;
- (void)resetAutoHideTimer;
- (void)triggleToHideControlView;
- (void)onVideoProcessBarClick;
- (void)initSingleAndDoubleClick;
- (void)onSingleTap;
- (void)onDoubleTap;
- (BOOL)ignoreEdgeInset;
- (void)setIgnoreEdgeInset:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setToolPanView:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setIconView:(id)arg1;
- (BOOL)withAudioButton;
- (void)setWithAudioButton:(BOOL)arg1;
- (id)autoHideControlViewTimer;
- (void)setAutoHideControlViewTimer:(id)arg1;
- (unsigned long long)playerMode;
- (void)setPlayerMode:(unsigned long long)arg1;
- (BOOL)isBufferViewShow;
- (void)setIsBufferViewShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
