@interface WCFinderInteractionCommentRecordViewController : MMUIViewController <UICollectionViewDelegate, WCFinderInteractionCommentRecordViewModelDelegate, WCFinderDataLoadTipsDelegate>
{
    WCFinderInteractionCommentRecordViewModel * _viewModel; // +0x70
    UICollectionView * _collectionView; // +0x78
    UICollectionViewDiffableDataSource * _dataSource; // +0x80
    WCFinderDataLoadTips * _loadingTips; // +0x88
}
- (id)initWithTargetUserName:(id)arg1 displayName:(id)arg2;
- (void)viewDidLoad;
- (void)_setupCollectionView;
- (void)_setupLoadingTips;
- (id)navigationBarBackgroundColor;
- (void)registerYReportSdk;
- (void)_pushMentionDetailViewController;
- (void)_reloadData;
- (void)viewModel:(id)arg1 sendEvent:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)onDataLoadTipsClickRetry;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)loadingTips;
- (void)setLoadingTips:(id)arg1;
- (void).cxx_destruct;
@end
