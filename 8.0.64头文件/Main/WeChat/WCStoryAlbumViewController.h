@interface WCStoryAlbumViewController : MMUIViewController <WCStoryCollectionFooterViewDelegate>
{
    BOOL _isNoMoreData; // +0x70
    WCMomentsPageContext * _pageContext; // +0x78
    NSString * _username; // +0x80
    UICollectionView * _collectionView; // +0x88
    UICollectionViewFlowLayout * _flowLayout; // +0x90
    WCStoryFloatTopBar * _floatTopBar; // +0x98
    WCStoryCollectionFooterView * _footerView; // +0xa0
    UIView * _blankView; // +0xa8
    MMUIButton * _fullTimelineButton; // +0xb0
    MMUILabel * _noDataLabel; // +0xb8
    WCStoryAlbumViewModel * _viewModel; // +0xc0
}
- (id)initWithUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)setupData;
- (double)getCellWidth;
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
- (id)pageContext;
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
- (void).cxx_destruct;
@end
