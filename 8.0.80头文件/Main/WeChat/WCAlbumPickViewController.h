@interface WCAlbumPickViewController : MMUIViewController <WCAlbumPreviewBrowserViewControllerDelegate, WCAlbumPickerFooterViewDelegate, WCFinderSnsPostProcessMgrDelegate>
{
    BOOL _isOriginalImageForSend; // +0x70
    BOOL _needThumbImage; // +0x71
    BOOL _isNoMoreData; // +0x72
    BOOL _m_hasClickSendButton; // +0x73
    long long _homepageType; // +0x78
    NSMutableArray * _imageDictionaries; // +0x80
    UIImageView * _bottomBar; // +0x88
    MMUIButton * _previewButton; // +0x90
    double _realBottomBarHeight; // +0x98
    double _assetWidth; // +0xa0
    NSString * _sendButtonWording; // +0xa8
    long long _selectionConfirmMode; // +0xb0
    id /* block */ _didTapConfirmItemBlock; // +0xb8
    id <WCAlbumPickViewControllerDelegate> _delegate; // +0xc0
    UICollectionView * _collectionView; // +0xc8
    UICollectionViewFlowLayout * _flowLayout; // +0xd0
    WCAlbumPickerFooterView * _footerView; // +0xd8
    MMUILabel * _noDataLabel; // +0xe0
    NSString * _username; // +0xe8
    WCAlbumPickViewModel * _viewModel; // +0xf0
    UIButton * _sendButton; // +0xf8
    MMUIView * _bgView; // +0x100
    MMUIView * _blurView; // +0x108
    MMUIView * _dimmingView; // +0x110
    UIImageView * _shadowImageView; // +0x118
    UIView * _tableContainerView; // +0x120
    MMUILabel * _tipsLabel; // +0x128
    MMUIImageView * _originSelectIconView; // +0x130
    UIView * _navBarBlurView; // +0x138
    UIView * _accessLimitTipView; // +0x140
    UIView * _bottomBarBlurView; // +0x148
    WCFinderSnsPostProcessMgr * _finderPostMgr; // +0x150
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupUI;
- (void)setupData;
- (void)setMaxSelectedImagesCount:(unsigned long long)arg1;
- (double)getCellWidth;
- (id)viewModel;
- (id)flowLayout;
- (id)collectionView;
- (id)noDataLabel;
- (void)updateTipLabelState;
- (void)updateFooterViewState;
- (void)onClickAction;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isForbidPageSheet;
- (void)initBottomBar;
- (void)initTitleView;
- (BOOL)useTransparentNavibar;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustTitleView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)adjustSubviewRects;
- (void)reloadBottomBar;
- (int)pickerScene;
- (void)previewImageWithMedia:(id)arg1;
- (void)previewImageOfSelectedWithIndex:(unsigned int)arg1;
- (void)saveEditedImage:(BOOL)arg1;
- (void)saveEditedVideo;
- (void)saveAsset:(BOOL)arg1;
- (void)editPhoto:(id)arg1;
- (void)onClickCloseAction;
- (void)onQuit;
- (void)onSendMediaList:(id)arg1;
- (id)finderPostMgr;
- (void)pushToEditViewController;
- (void)sendSelectedMedia;
- (void)removeAllSeletedMedia;
- (unsigned int)selectedMediaInfosCount;
- (long long)indexInSelectedMedia:(id)arg1;
- (BOOL)canSelectMediaInPreview:(id)arg1;
- (void)pickMedia:(id)arg1;
- (void)onPreviewPickFinish;
- (long long)getSelectedMediaType;
- (void)finderPostMgrOnSendMediaWith:(id)arg1;
- (id)finderPostMgrGetSelectedMediaContent;
- (void)finderPostMgrCancelPostProcess;
- (long long)homepageType;
- (void)setHomepageType:(long long)arg1;
- (id)imageDictionaries;
- (void)setImageDictionaries:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)previewButton;
- (void)setPreviewButton:(id)arg1;
- (double)realBottomBarHeight;
- (void)setRealBottomBarHeight:(double)arg1;
- (BOOL)isOriginalImageForSend;
- (void)setIsOriginalImageForSend:(BOOL)arg1;
- (BOOL)needThumbImage;
- (void)setNeedThumbImage:(BOOL)arg1;
- (double)assetWidth;
- (void)setAssetWidth:(double)arg1;
- (id)sendButtonWording;
- (void)setSendButtonWording:(id)arg1;
- (long long)selectionConfirmMode;
- (void)setSelectionConfirmMode:(long long)arg1;
- (id /* block */)didTapConfirmItemBlock;
- (void)setDidTapConfirmItemBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (BOOL)isNoMoreData;
- (void)setIsNoMoreData:(BOOL)arg1;
- (void)setNoDataLabel:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)dimmingView;
- (void)setDimmingView:(id)arg1;
- (id)shadowImageView;
- (void)setShadowImageView:(id)arg1;
- (id)tableContainerView;
- (void)setTableContainerView:(id)arg1;
- (BOOL)m_hasClickSendButton;
- (void)setM_hasClickSendButton:(BOOL)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)originSelectIconView;
- (void)setOriginSelectIconView:(id)arg1;
- (id)navBarBlurView;
- (void)setNavBarBlurView:(id)arg1;
- (id)accessLimitTipView;
- (void)setAccessLimitTipView:(id)arg1;
- (id)bottomBarBlurView;
- (void)setBottomBarBlurView:(id)arg1;
- (void)setFinderPostMgr:(id)arg1;
- (void).cxx_destruct;
@end
