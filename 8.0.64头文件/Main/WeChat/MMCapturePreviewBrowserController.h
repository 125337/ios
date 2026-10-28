@interface MMCapturePreviewBrowserController : MMUIViewController <MultiImageScrollViewDelegate, EditImageInitialViewDelegate>
{
    UIView * _bottomBar; // +0x70
    UIButton * _sendButton; // +0x78
    UIButton * _originImageCheck; // +0x80
    UILabel * _originImageLabel; // +0x88
    NSMutableArray * _imageScrollViewPool; // +0x90
    long long _originImageSize; // +0x98
    UIActivityIndicatorView * _originIndictorView; // +0xa0
    BOOL _canSendOriginalImage; // +0xa8
    BOOL m_hasClickSendButton; // +0xa9
    BOOL _isCanSendLivePhoto; // +0xaa
    BOOL _isEmoticonBoardSearchEnabled; // +0xab
    BOOL _loadAssetFinish; // +0xac
    unsigned int _scene; // +0xb0
    unsigned int _exposeLiveButtonCloseCount; // +0xb4
    unsigned int _exposeLiveButtonOpenCount; // +0xb8
    unsigned int _clickLiveButtonOpenCount; // +0xbc
    unsigned int _clickLiveButtonCloseCount; // +0xc0
    id <ImageBrowseDelegate> m_delegate; // +0xc8
    EditImageIntialView * _editImageInitialView; // +0xd0
    EditImageLogicController * m_editImageLogicController; // +0xd8
    MMLoadingView * __loadingView; // +0xe0
    MMAsset * _originAsset; // +0xe8
    UIImage * _assetImage; // +0xf0
    MMAsset * _m_editAsset; // +0xf8
    MultiImageScrollView * _pagingScrollView; // +0x100
    MMCapturePreviewBrowserControlCenter * _controlCenter; // +0x108
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
- (void)reportLivePhoto:(BOOL)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)handleSend:(id)arg1;
- (void)OnOriginSizeGot:(id)arg1;
- (void)onOriginImageCheck:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (BOOL)ignorePageIndexTitle;
- (void)onSingleTap:(id)arg1;
- (void)onEditImage:(id)arg1;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
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
- (BOOL)isCanSendLivePhoto;
- (void)setIsCanSendLivePhoto:(BOOL)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (id)_loadingView;
- (void)set_loadingView:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
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
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (unsigned int)exposeLiveButtonCloseCount;
- (void)setExposeLiveButtonCloseCount:(unsigned int)arg1;
- (unsigned int)exposeLiveButtonOpenCount;
- (void)setExposeLiveButtonOpenCount:(unsigned int)arg1;
- (unsigned int)clickLiveButtonOpenCount;
- (void)setClickLiveButtonOpenCount:(unsigned int)arg1;
- (unsigned int)clickLiveButtonCloseCount;
- (void)setClickLiveButtonCloseCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
