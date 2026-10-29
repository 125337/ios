@interface MMFinderLiveConnectMicTeamPkPanel : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _isApplicant; // +0x8
    id /* block */ _pkBlock; // +0x10
    id /* block */ _quitMicBlock; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewDiffableDataSource * _diffableDataSource; // +0x28
    MMFinderLiveConnectMicPKInfo * _pkInfo; // +0x30
}
- (id)init;
- (void)showWithPkInfo:(id)arg1 isApplicant:(BOOL)arg2;
- (void)updateWithPkInfo:(id)arg1;
- (BOOL)useDiffableDatasourceWithCompositionalLayout;
- (void)requestDismiss;
- (double)pageSheetContentHeight;
- (void)initViews;
- (id)makeCloseButton;
- (void)closeAction;
- (void)layoutSubviews;
- (void)setupDataSourceIfNeeded;
- (id)defaultSnapshot;
- (id)createLayout;
- (double)itemSpacingWithSection:(long long)arg1;
- (id)createTeam1Section:(id)arg1;
- (id)createTeam2Section:(id)arg1;
- (void)changeTeamToAnother:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id /* block */)pkBlock;
- (void)setPkBlock:(id /* block */)arg1;
- (id /* block */)quitMicBlock;
- (void)setQuitMicBlock:(id /* block */)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (id)pkInfo;
- (void)setPkInfo:(id)arg1;
- (BOOL)isApplicant;
- (void)setIsApplicant:(BOOL)arg1;
- (void).cxx_destruct;
@end

