@interface MMLiveButtonContainerView : MMLandscapeDragBarPageSheet <UICollectionViewDelegate, UICollectionViewDataSource>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id <MMLiveButtonContainerViewDelegate> _delegate; // +0x10
    NSArray * _controlItems; // +0x18
    UIView * _backgroundView; // +0x20
    UICollectionView * _controlItemsCollectionView; // +0x28
}
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2 controlItems:(id)arg3;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showWithAnimated:(BOOL)arg1;
- (id)backgroundView;
- (id)controlItemsCollectionView;
- (id)liveTask;
- (CGSize)getCellSize;
- (CGSize)getCollectionViewSize;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)controlItems;
- (void)setControlItems:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setControlItemsCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
