@interface WCDragableSelectorView : WCSelectorView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCCollectionViewDataSource, WCCollectViewReorderDragDelegate>
{
    WCDragCollectionView * _collectionView; // +0x70
    WCCollectViewReorder * _collectionViewReorder; // +0x78
    NSMutableDictionary * _cellImageViewDic; // +0x80
    BOOL _scrollEnabled; // +0x88
    id <WCDragableSelectorViewDelegate> _dragDelegate; // +0x90
}
- (id)init;
- (double)calCollectionViewWidth;
- (int)calMaxImagePerRow;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)reload;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)xd_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)xd_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)getCellImageViewArray;
- (void)onCollectionViewCellMoved:(CGPoint)arg1;
- (BOOL)onEndCollectionViewCellMovement:(long long)arg1;
- (id)dragDelegate;
- (void)setDragDelegate:(id)arg1;
- (BOOL)scrollEnabled;
- (void)setScrollEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
