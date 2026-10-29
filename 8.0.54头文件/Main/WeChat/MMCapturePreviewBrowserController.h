@interface MMCapturePreviewBrowserController : MMUIViewController <MultiImageScrollViewDelegate, EditImageInitialViewDelegate>
{
    UIView * _bottomBar; // +0x68
    UIButton * _sendButton; // +0x70
    UIButton * _originImageCheck; // +0x78
    UILabel * _originImageLabel; // +0x80
    NSMutableArray * _imageScrollViewPool; // +0x88
    long long _originImageSize; // +0x90
    UIActivityIndicatorView * _originIndictorView; // +0x98
    BOOL _canSendOriginalImage; // +0xa0
    BOOL m_hasClickSendButton; // +0xa1
    BOOL _isEmoticonBoardSearchEnabled; // +0xa2
    BOOL _loadAssetFinish; // +0xa3
    id <ImageBrowseDelegate> m_delegate; // +0xa8
    EditImageIntialView * _editImageInitialView; // +0xb0
    EditImageLogicController * m_editImageLogicController; // +0xb8
    MMLoadingView * __loadingView; // +0xc0
    MMAsset * _originAsset; // +0xc8
    UIImage * _assetImage; // +0xd0
    MMAsset * _m_editAsset; // +0xd8
    MultiImageScrollView * _pagingScrollView; // +0xe0
}
- (id)init;
- (id)initWithAsset:(id)arg1 thumbImage:(id)arg2;
- (void)dealloc;
- (BOOL)isForbidPageSheet;
- (void)initData;
- (void)startLoadAsset;
- (void)reloadBottomBar;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBeInteractivePoped;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)handleSend:(id)arg1;
- (void)OnOriginSizeGot:(id)arg1;
- (void)onOriginImageCheck:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onEditImage:(id)arg1;
- (void)setBottomAndTopBarHiddenWithAnimation:(BOOL)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)finishEditImage;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (id)currentViewController;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)canSendOriginalImage;
- (void)setCanSendOriginalImage:(BOOL)arg1;
- (BOOL)m_hasClickSendButton;
- (void)setM_hasClickSendButton:(BOOL)arg1;
- (id)_editImageInitialView;
- (void)set_editImageInitialView:(id)arg1;
- (id)m_editImageLogicController;
- (void)setM_editImageLogicController:(id)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (id)_loadingView;
- (void)set_loadingView:(id)arg1;
- (id)originAsset;
- (void)setOriginAsset:(id)arg1;
- (id)assetImage;
- (void)setAssetImage:(id)arg1;
- (BOOL)loadAssetFinish;
- (void)setLoadAssetFinish:(BOOL)arg1;
- (id)m_editAsset;
- (void)setM_editAsset:(id)arg1;
- (id)pagingScrollView;
- (void)setPagingScrollView:(id)arg1;
- (void).cxx_destruct;
@end

