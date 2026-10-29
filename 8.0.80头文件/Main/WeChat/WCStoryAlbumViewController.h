@interface WCStoryAlbumViewController : MMUIViewController <WCStoryCollectionFooterViewDelegate, WCPhotoMutipleImagePageDelegate>
{
    BOOL _showTimelineEntrance; // +0x70
    BOOL _isNoMoreData; // +0x71
    BOOL _hasZoomed; // +0x72
    WCMomentsPageContext * _pageContext; // +0x78
    NSString * _titleWording; // +0x80
    NSString * _username; // +0x88
    UICollectionView * _collectionView; // +0x90
    UICollectionViewFlowLayout * _flowLayout; // +0x98
    WCStoryFloatTopBar * _floatTopBar; // +0xa0
    WCStoryCollectionFooterView * _footerView; // +0xa8
    UIView * _blankView; // +0xb0
    MMUIButton * _fullTimelineButton; // +0xb8
    MMUILabel * _noDataLabel; // +0xc0
    WCStoryAlbumViewModel * _viewModel; // +0xc8
    NSString * _albumSessionId; // +0xd0
    unsigned long long _feedDepth; // +0xd8
    double _lastLaidOutAvailableWidth; // +0xe0
}
- (id)initWithUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)setupData;
- (double)getCellWidthForAvailableWidth:(double)arg1;
- (void)updateFloatTopBarWithVisibleCells:(id)arg1 scrollView:(id)arg2 animated:(BOOL)arg3;
- (id)thumbnailViewForMediaItem:(id)arg1;
- (id)viewModel;
- (id)flowLayout;
- (id)collectionView;
- (id)floatTopBar;
- (id)blankView;
- (id)noDataLabel;
- (id)fullTimelineButton;
- (void)updateTipLabelState;
- (void)updateAlbumViewState;
- (void)updateFooterViewState;
- (void)onClickAction;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)reportAlbumPageIn;
- (void)reportAlbumPageOut;
- (id)buildAlbumCommonParams;
- (id)pageContext;
- (BOOL)showTimelineEntrance;
- (void)setShowTimelineEntrance:(BOOL)arg1;
- (id)titleWording;
- (void)setTitleWording:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setFloatTopBar:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setBlankView:(id)arg1;
- (void)setFullTimelineButton:(id)arg1;
- (BOOL)isNoMoreData;
- (void)setIsNoMoreData:(BOOL)arg1;
- (void)setNoDataLabel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)albumSessionId;
- (void)setAlbumSessionId:(id)arg1;
- (unsigned long long)feedDepth;
- (void)setFeedDepth:(unsigned long long)arg1;
- (BOOL)hasZoomed;
- (void)setHasZoomed:(BOOL)arg1;
- (double)lastLaidOutAvailableWidth;
- (void)setLastLaidOutAvailableWidth:(double)arg1;
- (void).cxx_destruct;
@end
