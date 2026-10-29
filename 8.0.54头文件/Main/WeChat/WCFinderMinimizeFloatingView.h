@interface WCFinderMinimizeFloatingView : UIView <WCFinderMinimizePlayCtrlPlayDelegate, MiniAudioTaskContentViewDelegate>
{
    WCFinderMinimizePlayCtrl * _playCtrl; // +0x8
    UIView * _minimizeAnimatingView; // +0x10
    UIView * _maxmizeAnimatingView; // +0x18
    MMUIButton * _audioModeBtn; // +0x20
    MiniAudioTaskContentView * _outterView; // +0x28
    id <WCFinderMinimizeFloatingViewDelegate> _delegate; // +0x30
    MMUIButton * _coverBtnView; // +0x38
    UIView<WCFinderMinimizeContentViewProtocol> * _displayView; // +0x40
    UIView * _backgroundView; // +0x48
    UIImage * _coverImage; // +0x50
    NSMutableDictionary * _reportUDFKV; // +0x58
    WCFinderMinimizeFloatingStateView * _stateView; // +0x60
    CGRect _originFrame; // +0x68
}
+ (double)displayCornerRadius;
+ (double)cornerRaidus;
+ (CGSize)fitMinimizeNotCutFloatingSize:(CGSize)arg1;
+ (CGSize)fitMinimizeNotCutFloatingSizeForRound:(CGSize)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)updatePlayBtnState:(BOOL)arg1;
- (void)prepareCoverView;
- (void)layoutSubviews;
- (void)setPlayCtrl:(id)arg1;
- (id)audioModeBtn;
- (void)updatePlayType;
- (void)onAudioModeBtnClicked;
- (void)onCloseButtonClicked;
- (void)onClickFloatingView;
- (id)prepareRestoreContentView;
- (void)onClickPlayBtn;
- (void)onMediaPlayStateChanged:(id)arg1;
- (void)onMediaPlayInfoUpdate:(id)arg1;
- (void)onMediaPlayContentViewUpdated:(id)arg1;
- (void)updateMinimizeInfo:(id)arg1 reportUDFKV:(id)arg2;
- (void)updateDisplayView:(id)arg1;
- (void)updateCurDisplayViewWithReportUDFKV:(id)arg1;
- (void)cleanContent;
- (id)floatingFrames;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (id)playCtrl;
- (id)minimizeAnimatingView;
- (void)setMinimizeAnimatingView:(id)arg1;
- (id)maxmizeAnimatingView;
- (void)setMaxmizeAnimatingView:(id)arg1;
- (void)setAudioModeBtn:(id)arg1;
- (id)outterView;
- (void)setOutterView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverBtnView;
- (void)setCoverBtnView:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (id)reportUDFKV;
- (void)setReportUDFKV:(id)arg1;
- (id)stateView;
- (void)setStateView:(id)arg1;
- (void).cxx_destruct;
@end

