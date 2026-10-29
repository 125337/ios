@interface WCFinderMinimizeFloatingView : UIView <WCFinderMinimizePlayCtrlPlayDelegate, MiniAudioTaskContentViewDelegate>
{
    WCFinderMinimizePlayCtrl * _playCtrl; // +0x8
    UIView * _minimizeAnimatingView; // +0x10
    UIView * _maxmizeAnimatingView; // +0x18
    MiniAudioTaskContentView * _outterView; // +0x20
    id <WCFinderMinimizeFloatingViewDelegate> _delegate; // +0x28
    MMUIButton * _coverBtnView; // +0x30
    UIView<WCFinderMinimizeContentViewProtocol> * _displayView; // +0x38
    UIView * _backgroundView; // +0x40
    UIImage * _coverImage; // +0x48
    NSMutableDictionary * _reportUDFKV; // +0x50
    WCFinderMinimizeFloatingStateView * _stateView; // +0x58
    CGRect _originFrame; // +0x60
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
- (void)updatePlayType;
- (void)onCloseButtonClicked;
- (void)onClickFloatingView;
- (id)prepareRestoreContentView;
- (void)onClickPlayBtn;
- (void)onMediaPlayStateChanged:(id)arg1;
- (void)onMediaPlayInfoUpdate:(id)arg1;
- (void)onMediaPlayContentViewUpdated:(id)arg1;
- (void)onMediaPlayContentViewSizeChanged:(id)arg1;
- (void)updateMinimizeInfo:(id)arg1 reportUDFKV:(id)arg2;
- (void)updateDisplayView:(id)arg1;
- (void)updateDisplayViewSize;
- (void)updateCurDisplayViewWithReportUDFKV:(id)arg1;
- (void)cleanContent;
- (void)updateFoldStatus:(BOOL)arg1;
- (id)floatingFrames;
- (id)tmpSnapImageForMinimizeAnimation;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayTypeButtonClicked:(long long)arg1;
- (void)onMiniAudioContentSizeChangeTo:(CGSize)arg1 anime:(BOOL)arg2;
- (void)onMiniAudioAnimeProgress:(double)arg1;
- (void)sizeRecoverToBase:(CGSize)arg1;
- (id)playCtrl;
- (id)minimizeAnimatingView;
- (void)setMinimizeAnimatingView:(id)arg1;
- (id)maxmizeAnimatingView;
- (void)setMaxmizeAnimatingView:(id)arg1;
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
