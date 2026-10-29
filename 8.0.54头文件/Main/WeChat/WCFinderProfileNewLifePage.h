@interface WCFinderProfileNewLifePage : WCFinderStreamProfileViewPage <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileNewLifePageModelDelegate, ILinkEventExt>
{
    BOOL _firstAppear; // +0x8
    int _newlifetabEnterType; // +0xc
    WCFinderProfileNewLifeHeaderView * _headerView; // +0x10
    WCFinderProfileNewLifeHeaderViewModel * _headerViewModel; // +0x18
    WCFinderStreamFooterView * _footerView; // +0x20
    WCFinderAnimationLoadingView * _loadingView; // +0x28
    RichTextView * _stateLabel; // +0x30
    RichTextView * _stateClickLabel; // +0x38
}
- (id)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)viewWillApear;
- (void)initHeaderView;
- (void)updateHeaderModel;
- (void)updateHeaderView;
- (void)updateState;
- (double)originY30percent;
- (void)updateStateLayout;
- (void)setupLoadingView:(BOOL)arg1;
- (void)setupStateLabel:(id)arg1;
- (void)setupStateClickLabel:(id)arg1;
- (id)stateContent;
- (id)stateClickContent;
- (void)refetch;
- (BOOL)isDiscoverSearchEnabled;
- (void)onNewLifePageModelStartPost:(id)arg1;
- (void)onNewLifePageModelFetchStateChanged:(id)arg1;
- (void)onNewLifePageModelAppendFromRange:(_NSRange)arg1 countAfterAppend:(unsigned long long)arg2;
- (void)onNewLifePageModelDeleteAtIndex:(unsigned long long)arg1;
- (void)onNewLifePageModelRefreshHeader;
- (void)onNewLifePageModelReload;
- (void)onNewLifePageModelMoveFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 decorationLayoutAttributesAtSection:(unsigned long long)arg3;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerViewModel;
- (void)setHeaderViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)stateClickLabel;
- (void)setStateClickLabel:(id)arg1;
- (BOOL)firstAppear;
- (void)setFirstAppear:(BOOL)arg1;
- (int)newlifetabEnterType;
- (void)setNewlifetabEnterType:(int)arg1;
- (void).cxx_destruct;
@end

