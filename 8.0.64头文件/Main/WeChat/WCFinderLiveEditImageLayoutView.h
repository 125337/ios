@interface WCFinderLiveEditImageLayoutView : WCEditImageLayoutView <WCFinderEditFrameBlurViewDelegate>
{
    BOOL _shouldEnterCropModeAfterSafeAreaUpdate; // +0x8
    BOOL _shouldAutoEnterCropMode; // +0x9
    BOOL _restoreApsectRatioPostCrop; // +0xa
    BOOL _changingAspectRatio; // +0xb
    MMUIButton * _backBtn; // +0x10
    id /* block */ _backCompletion; // +0x18
    UIImageView * _blurBackgroundView; // +0x20
    CGSize _ratio; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)customBottomButtonOrder;
- (void)onClickBackBtn:(id)arg1;
- (id)backBtn;
- (BOOL)shouldAutoTriggerMusic;
- (void)OnClickEditImageBackBarButton;
- (void)onEditImage:(unsigned long long)arg1 withEditEntrance:(unsigned long long)arg2;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (double)getEmoticonToolViewBottom;
- (void)initBlurBackground;
- (void)setupBlurBackgroundMask;
- (void)setFrame:(CGRect)arg1;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (unsigned long long)adjustedBlackLevelForLevel:(unsigned long long)arg1;
- (void)autoEnterCropMode;
- (void)onCropEditImage:(id)arg1;
- (void)onCropEditImageInner;
- (void)updateCropLinesWithPoint:(CGPoint)arg1 aspectRatio:(double)arg2;
- (void)onCropToolBarCancelBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)OnClickEditImageDoneBarButton;
- (void)onceSavePropertyAndOutputImageAttr:(id /* block */)arg1;
- (CGSize)ratio;
- (void)setAspectRatio:(CGSize)arg1 withAnimation:(BOOL)arg2;
- (void)onCroppingView;
- (void)onFinishCroppingView;
- (void)animateBlurBackgroundAlpha:(double)arg1;
- (void)animateGridAlpha:(double)arg1;
- (void)setBackBtn:(id)arg1;
- (void)setRatio:(CGSize)arg1;
- (id /* block */)backCompletion;
- (void)setBackCompletion:(id /* block */)arg1;
- (BOOL)shouldEnterCropModeAfterSafeAreaUpdate;
- (void)setShouldEnterCropModeAfterSafeAreaUpdate:(BOOL)arg1;
- (BOOL)shouldAutoEnterCropMode;
- (void)setShouldAutoEnterCropMode:(BOOL)arg1;
- (BOOL)restoreApsectRatioPostCrop;
- (void)setRestoreApsectRatioPostCrop:(BOOL)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (BOOL)changingAspectRatio;
- (void)setChangingAspectRatio:(BOOL)arg1;
- (void).cxx_destruct;
@end
