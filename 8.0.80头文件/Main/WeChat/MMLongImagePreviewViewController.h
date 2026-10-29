@interface MMLongImagePreviewViewController : MMUIViewController <UIScrollViewDelegate, ForwardMessageLogicDelegate, IFavoritesExt, MMLongImageCropViewControllerDelelgate>
{
    BOOL _hasEdit; // +0x70
    BOOL _disableForward; // +0x71
    BOOL _disableFavorite; // +0x72
    BOOL _inEditingMode; // +0x73
    MMLongImagePreviewContext * _context; // +0x78
    id <MMLongImagePreviewViewControllerDelegate> _delegate; // +0x80
    UIScrollView * _scrollView; // +0x88
    UIImage * _originImage; // +0x90
    UIImage * _previewImage; // +0x98
    UIImageView * _imageView; // +0xa0
    CAGradientLayer * _topGradientLayer; // +0xa8
    MMUIButton * _closeBtn; // +0xb0
    MMLongImagePreviewBottomView * _bottomBarView; // +0xb8
    CAGradientLayer * _bottomGradientLayer; // +0xc0
    MMUIButton * _cropBtn; // +0xc8
    ImageBrowseButton * _forwardBtn; // +0xd0
    ImageBrowseButton * _favoriteBtn; // +0xd8
    ImageBrowseButton * _saveBtn; // +0xe0
    ForwardMessageLogicController * _forwardLogicController; // +0xe8
    FavoritesItem * _addingFavItem; // +0xf0
    MMLongImageCropResult * _croppedResult; // +0xf8
}
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 disableForward:(BOOL)arg2 disableFavorite:(BOOL)arg3;
- (void)viewWillBePoped:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)hidesStatusBar;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)initTopBar;
- (void)layoutTopBar;
- (void)onReturn;
- (void)delayDimissMySelf:(double)arg1;
- (void)initScrollView;
- (void)setPreviewImage:(id)arg1;
- (void)layoutPreviewImage;
- (void)initBottomBar;
- (void)layoutBottomBar;
- (void)viewDidLayoutSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (CGPoint)scrollViewCenter;
- (CGSize)scrollViewVisibleSize;
- (void)updateZoomScaleWithTouchPoint:(CGPoint)arg1;
- (CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2;
- (void)handleDoubleTap:(id)arg1;
- (void)onClickCropBtn;
- (void)onFinishCropImage:(id)arg1;
- (id)onGetImageViewForTransition;
- (void)onCropViewControllerPushTransitionInAnimateDuration;
- (void)onCropViewControllerPushTransitionEnd;
- (void)onCropViewControllerPopTransitionBegan;
- (void)onCropViewControllerPopTransitionInAnimateDuration;
- (void)onCropViewControllerPopTransitionEnd;
- (void)onClickFowardBtn;
- (id)genMsgWrapWithImage:(id)arg1;
- (void)forwardPreviewImageInFragment;
- (void)__forwardMsgWithArrImage:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onClickFavoriteBtn;
- (void)addFavImageInFragment;
- (void)__addFavItemWithArrImage:(id)arg1;
- (void)onClickSaveBtn;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)hasEdit;
- (void)setHasEdit:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)previewImage;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)cropBtn;
- (void)setCropBtn:(id)arg1;
- (id)forwardBtn;
- (void)setForwardBtn:(id)arg1;
- (id)favoriteBtn;
- (void)setFavoriteBtn:(id)arg1;
- (id)saveBtn;
- (void)setSaveBtn:(id)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (BOOL)disableFavorite;
- (void)setDisableFavorite:(BOOL)arg1;
- (BOOL)inEditingMode;
- (void)setInEditingMode:(BOOL)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (id)addingFavItem;
- (void)setAddingFavItem:(id)arg1;
- (id)croppedResult;
- (void)setCroppedResult:(id)arg1;
- (void).cxx_destruct;
@end
