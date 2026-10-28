@interface WCFinderTextDetailListPannel : WCFinderCustomPanelSheet <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderTextDetailItemDelegate>
{
    int _scene; // +0x70
    NSString * _emptyWording; // +0x78
    AnyPromise * _sessionsPromise; // +0x80
    NSMutableArray * _sections; // +0x88
    UICollectionView * _flowView; // +0x90
    WCFinderAnimationLoadingView * _loadingView; // +0x98
    UILabel * _warnningLabel; // +0xa0
    id /* block */ _refetch; // +0xa8
}
+ (id)buildWithTitle:(id)arg1 sections:(id)arg2 scene:(int)arg3 refetch:(id /* block */)arg4;
- (void)setupSections:(id)arg1;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)onClickRetry;
- (void)waitFillData;
- (void)startLoading;
- (void)showWarnningLabel:(id)arg1 allowRetry:(BOOL)arg2;
- (id)createCollectionView;
- (id)configEmptyWording:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onHeaderClickExpandFold:(id)arg1;
- (void)onItemClickContent:(id)arg1;
- (id)emptyWording;
- (void)setEmptyWording:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sessionsPromise;
- (void)setSessionsPromise:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)flowView;
- (void)setFlowView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)warnningLabel;
- (void)setWarnningLabel:(id)arg1;
- (id /* block */)refetch;
- (void)setRefetch:(id /* block */)arg1;
- (void).cxx_destruct;
@end
