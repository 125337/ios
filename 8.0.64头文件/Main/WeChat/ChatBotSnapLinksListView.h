@interface ChatBotSnapLinksListView : UIView <IMinimizeTaskDataChangeDelegateInterface, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IMinimizeTaskDelegateInterface, MiniTaskCollectionCellDelegate>
{
    BOOL _isShowPhoto; // +0x8
    NSMutableArray * _snapLinksCellDataArray; // +0x10
    UICollectionViewFlowLayout * _flowLayout; // +0x18
    UICollectionView * _collectionView; // +0x20
    MinimizeTaskData * _currOpenTaskData; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 isShowPotho:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutCollectionView;
- (void)resetData;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)snapshotImagePreferredSize;
- (unsigned long long)currentCellCount;
- (void)onMiniTaskCollectionCellDelete:(id)arg1 isFromMenu:(BOOL)arg2;
- (void)jumpMsgSession:(id)arg1;
- (void)jumpStarWithMIniTaskData:(id)arg1 cell:(id)arg2;
- (void)onMiniTaskCollectionCellFavorite:(id)arg1 isFromMenu:(BOOL)arg2;
- (void)onMiniTaskCollectionCellAddRemind:(id)arg1;
- (void)onMiniTaskCollectionCellRemoveRemind:(id)arg1;
- (void)removeMemoryListInfoForCell:(id)arg1;
- (id)snapLinksCellDataArray;
- (void)setSnapLinksCellDataArray:(id)arg1;
- (BOOL)isShowPhoto;
- (void)setIsShowPhoto:(BOOL)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)currOpenTaskData;
- (void)setCurrOpenTaskData:(id)arg1;
- (void).cxx_destruct;
@end
