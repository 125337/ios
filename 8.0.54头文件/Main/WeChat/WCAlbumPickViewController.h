@interface WCAlbumPickViewController : MMUIViewController <WCAlbumPreviewBrowserViewControllerDelegate, WCAlbumPickerFooterViewDelegate, WCFinderSnsPostProcessMgrDelegate>
{
    BOOL _isOriginalImageForSend; // +0x68
    BOOL _needThumbImage; // +0x69
    BOOL _isNoMoreData; // +0x6a
    BOOL _m_hasClickSendButton; // +0x6b
    long long _homepageType; // +0x70
    NSMutableArray * _imageDictionaries; // +0x78
    UIImageView * _bottomBar; // +0x80
    MMUIButton * _previewButton; // +0x88
    double _realBottomBarHeight; // +0x90
    double _assetWidth; // +0x98
    NSString * _sendButtonWording; // +0xa0
    id <WCAlbumPickViewControllerDelegate> _delegate; // +0xa8
    UICollectionView * _collectionView; // +0xb0
    UICollectionViewFlowLayout * _flowLayout; // +0xb8
    WCAlbumPickerFooterView * _footerView; // +0xc0
    MMUILabel * _noDataLabel; // +0xc8
    NSString * _username; // +0xd0
    WCAlbumPickViewModel * _viewModel; // +0xd8
    UIButton * _sendButton; // +0xe0
    MMUIView * _bgView; // +0xe8
    MMUIView * _blurView; // +0xf0
    MMUIView * _dimmingView; // +0xf8
    UIImageView * _shadowImageView; // +0x100
    UIView * _tableContainerView; // +0x108
    MMUILabel * _tipsLabel; // +0x110
    MMUIImageView * _originSelectIconView; // +0x118
    UIView * _navBarBlurView; // +0x120
    UIView * _accessLimitTipView; // +0x128
    UIView * _bottomBarBlurView; // +0x130
    WCFinderSnsPostProcessMgr * _finderPostMgr; // +0x138
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

