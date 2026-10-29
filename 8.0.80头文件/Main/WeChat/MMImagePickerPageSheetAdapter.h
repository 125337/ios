@interface MMImagePickerPageSheetAdapter : MMPageSheetAdapter <MMPageSheetGestureRecognizerDelegate, MMPageSheetPassthroughTransitionDelegate>
{
    BOOL _isExpanded; // +0x8
    BOOL _needsCancelOnClose; // +0x9
    BOOL _isShowCloseConfirm; // +0xa
    BOOL _isFinishingAlbumFoldPAGAnimation; // +0xb
    MMAssetPickerController * _pickerController; // +0x10
    UIView * _navBarBgView; // +0x18
    MMUIView * _rightItemView; // +0x20
    MMUIButton * _albumButton; // +0x28
    MMUIButton * _expandButton; // +0x30
    MMUIButton * _closeButton; // +0x38
    PAGView * _albumFoldPAGView; // +0x40
    MMBezierDisplayLinkAnimator * _albumFoldPAGAnimator; // +0x48
}
+ (id)adapterWithImagePickerController:(id)arg1 height:(double)arg2;
- (void)configurePageSheetWithPicker:(id)arg1 album:(id)arg2;
- (void)setupNavBarBgViewOnAlbum:(id)arg1;
- (void)buildRightItemViewIfNeeded;
- (void)refreshRightItemView;
- (id)makeNavIconButtonWithAction:(SEL)arg1 accessibility:(id)arg2;
- (void)updateNavigationItems;
- (void)onPageSheetContainerBgTapped;
- (void)pageSheetDidRotation;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (void)pageSheetGestureRecognizerGragButNotCloseCallBack;
- (void)onClickCloseButton;
- (void)onClickExpandButton;
- (void)applyFullScreenLikeAppearance;
- (void)compressNavigationBarToSystemHeight;
- (void)onClickAlbumButton:(id)arg1;
- (id)updateAlbumFoldPAGOnButton:(id)arg1 forAlbumListVisible:(BOOL)arg2;
- (void)animateAlbumFoldPAGOnButton:(id)arg1 toProgress:(double)arg2;
- (void)finishAlbumFoldPAGAnimationAtProgress:(double)arg1;
- (double)normalizedAlbumFoldPAGProgress:(double)arg1;
- (id)prepareAlbumFoldPAGOnButton:(id)arg1;
- (void)applyTintColor:(id)arg1 toPAGComposition:(id)arg2;
- (void)dealloc;
- (double)expandedContentHeight;
- (void)changeToExpandState;
- (double)pageSheetDragResizeMaxContentHeight;
- (void)pageSheetDragResizeApplyContentHeight:(double)arg1;
- (void)pageSheetDragResizeSettleAtContentHeight:(double)arg1;
- (void)onTouchAtBackgroundMask;
- (void)checkDismissPageSheet;
- (void)showCloseConfirmationAlert;
- (id)pickerController;
- (void)setPickerController:(id)arg1;
- (id)navBarBgView;
- (void)setNavBarBgView:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)needsCancelOnClose;
- (void)setNeedsCancelOnClose:(BOOL)arg1;
- (BOOL)isShowCloseConfirm;
- (void)setIsShowCloseConfirm:(BOOL)arg1;
- (id)rightItemView;
- (void)setRightItemView:(id)arg1;
- (id)albumButton;
- (void)setAlbumButton:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)albumFoldPAGView;
- (void)setAlbumFoldPAGView:(id)arg1;
- (id)albumFoldPAGAnimator;
- (void)setAlbumFoldPAGAnimator:(id)arg1;
- (BOOL)isFinishingAlbumFoldPAGAnimation;
- (void)setIsFinishingAlbumFoldPAGAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
