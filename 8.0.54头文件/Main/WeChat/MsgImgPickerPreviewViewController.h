@interface MsgImgPickerPreviewViewController : WCDragToCloseViewController <MultiImageScrollViewDelegate, MsgImgPickerSelectedCollectionViewDelegate, EditImageInitialViewDelegate>
{
    MMUIButton * _editButton; // +0x68
    BOOL _previewSelectedOnly; // +0x70
    id <MsgImgPickerPreviewViewControllerDelegate> _delegate; // +0x78
    id <MsgImgPickerPreviewViewControllerDataSource> _dataSource; // +0x80
    long long _startIndex; // +0x88
    MultiImageScrollView * _multiImageScrollView; // +0x90
    UIView * _footerBkg; // +0x98
    UIView * _bottomBar; // +0xa0
    UIButton * _confirmButton; // +0xa8
    MsgImgPickerSelectedCollectionView * _selectedCollectionView; // +0xb0
    UIButton * _checkmarkButton; // +0xb8
    EditImageIntialView * _editImageInitialView; // +0xc0
}
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTopBar;
- (void)initBottomBar;
- (void)resizeBlurViewWithCollectionVisiable:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)interactiveDismissEnabled;
- (BOOL)shouldInteractivePop;
- (BOOL)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)updateCheckmark;
- (void)updateDoneButton;
- (void)onConfirm;
- (void)onChangeSelection;
- (long long)imageCount;
- (long long)selectedImageCount;
- (void)viewDidTransitionToNewSize;
- (void)onEditImage:(id)arg1;
- (void)onMsgImgPickerSelectedCollectionViewDidClickedAtIndex:(long long)arg1;
- (id)getMsgImgPickerSelectedCollectionViewEditeMsgImg:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)onChangePage;
- (void)onSingleTap:(id)arg1;
- (void)setTopAndBottomBarsHidden:(BOOL)arg1;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)hideVCAnimation;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (long long)startIndex;
- (void)setStartIndex:(long long)arg1;
- (BOOL)previewSelectedOnly;
- (void)setPreviewSelectedOnly:(BOOL)arg1;
- (id)multiImageScrollView;
- (void)setMultiImageScrollView:(id)arg1;
- (id)footerBkg;
- (void)setFooterBkg:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)selectedCollectionView;
- (void)setSelectedCollectionView:(id)arg1;
- (id)checkmarkButton;
- (void)setCheckmarkButton:(id)arg1;
- (id)editImageInitialView;
- (void)setEditImageInitialView:(id)arg1;
- (void).cxx_destruct;
@end

