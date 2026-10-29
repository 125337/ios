@interface WCFinderStreamProfileDraftPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderProfileDraftListViewModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileMusicViewDelegate, WCFinderLocalDraftCollectionViewCellDelegate>
{
    WCFinderStreamFooterView * _footerView; // +0x8
    UILabel * _statusTips; // +0x10
    NSMutableSet * _exposeCellIds; // +0x18
}
- (id)init;
- (id)loadView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)openFinderEditor:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)viewModelDataChanged:(id)arg1;
- (void)viewModelTargetIndexChanged:(long long)arg1 localDraft:(id)arg2;
- (void)viewModel:(id)arg1 fetchDataError:(id)arg2;
- (void)viewModel:(id)arg1 deleteItemAtIdx:(long long)arg2;
- (BOOL)reloadDataWithBatchModify;
- (void)reloadCollectionView;
- (void)updateStatusWithHasError:(BOOL)arg1;
- (void)updateStatusTips:(BOOL)arg1;
- (void)onTagRetry;
- (id)hostVC;
- (void)finderLocalDraftCollectionViewCellDidDeleteDraft:(id)arg1 draftModel:(id)arg2;
- (void)onMusicViewDidSlideDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickRetry:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicView:(id)arg1 exposeMenuAction:(id)arg2 feedVM:(id)arg3;
- (BOOL)checkLongVideoFileValid:(id)arg1;
- (id)_aicgDraftCellTipStringWithLocalDraft:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)statusTips;
- (void)setStatusTips:(id)arg1;
- (id)exposeCellIds;
- (void)setExposeCellIds:(id)arg1;
- (void).cxx_destruct;
@end
