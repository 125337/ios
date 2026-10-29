@interface MMLongImagePreviewViewController : MMUIViewController <UIScrollViewDelegate, ForwardMessageLogicDelegate, IFavoritesExt, MMLongImageCropViewControllerDelelgate>
{
    BOOL _hasEdit; // +0x68
    BOOL _disableForward; // +0x69
    BOOL _disableFavorite; // +0x6a
    BOOL _inEditingMode; // +0x6b
    MMLongImagePreviewContext * _context; // +0x70
    id <MMLongImagePreviewViewControllerDelegate> _delegate; // +0x78
    UIScrollView * _scrollView; // +0x80
    UIImage * _originImage; // +0x88
    UIImage * _previewImage; // +0x90
    UIImageView * _imageView; // +0x98
    CAGradientLayer * _topGradientLayer; // +0xa0
    MMUIButton * _closeBtn; // +0xa8
    MMLongImagePreviewBottomView * _bottomBarView; // +0xb0
    CAGradientLayer * _bottomGradientLayer; // +0xb8
    MMUIButton * _cropBtn; // +0xc0
    ImageBrowseButton * _forwardBtn; // +0xc8
    ImageBrowseButton * _favoriteBtn; // +0xd0
    ImageBrowseButton * _saveBtn; // +0xd8
    ForwardMessageLogicController * _forwardLogicController; // +0xe0
    FavoritesItem * _addingFavItem; // +0xe8
    MMLongImageCropResult * _croppedResult; // +0xf0
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

