@interface MMMusicNoDotSelectItemDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMMusicNoDotSelectItemViewDelegate>
{
    BOOL _isInLongSelectedStatus; // +0x8
    id <MMMusicNoDotSelectItemDisplayViewDataSource> _dataSource; // +0x10
    id <MMMusicNoDotSelectItemDisplayViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    MMMusicNoDotSelectItemDisplayViewCustomLayout * _collectionViewLayout; // +0x28
    MMMusicNoDotSelectItemView * _curSelectedItemView; // +0x30
    MMMusicNoDotSelectItemDisplayViewBgView * _bgView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)initView;
- (double)cellCount;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)handleAddSelectedItem:(id)arg1;
- (void)handleRemoveSelectedItemWithIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)reload:(BOOL)arg1;
- (double)getContentInterSpacing;
- (double)getContentLineSpacing;
- (double)getContentTopOffset;
- (double)getContentBottomOffset;
- (double)getContentRightOffset;
- (double)getDisplayItemLen;
- (double)getBgViewLeftWithItemCount:(unsigned long long)arg1 itemSize:(CGSize)arg2 itemMargin:(double)arg3 itemInsets:(UIEdgeInsets)arg4;
- (id)selectedItemViewModels;
- (void)changeBgViewWithAnimation:(double)arg1 delay:(double)arg2;
- (void)mmMusicNoDotSelectItemView:(id)arg1 onDeleteBtnClicked:(id)arg2;
- (void)addLongGesture;
- (void)handleLongGesture:(id)arg1;
- (BOOL)checkIsValidForLongSelected:(id)arg1;
- (void)updateSelectedDataLongSelectedDragStatusAndReload:(BOOL)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)curSelectedItemView;
- (void)setCurSelectedItemView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (BOOL)isInLongSelectedStatus;
- (void)setIsInLongSelectedStatus:(BOOL)arg1;
- (void).cxx_destruct;
@end
