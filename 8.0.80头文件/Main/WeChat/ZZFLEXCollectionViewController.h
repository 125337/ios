@interface ZZFLEXCollectionViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ZZFLEXAngelAPIProtocol>
{
    BOOL _sectionHeadersPinToVisibleBounds; // +0x70
    BOOL _sectionFootersPinToVisibleBounds; // +0x71
    UICollectionView * _collectionView; // +0x78
    ZZFLEXAngel * _angel; // +0x80
    long long _scrollDirection; // +0x88
}
- (void)scrollToTop:(BOOL)arg1;
- (void)scrollToBottom:(BOOL)arg1;
- (void)scrollToSection:(long long)arg1 position:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)scrollToSection:(long long)arg1 cell:(long long)arg2 position:(unsigned long long)arg3 animated:(BOOL)arg4;
- (void)scrollToCell:(long long)arg1 position:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)scrollToSectionIndex:(long long)arg1 position:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)scrollToIndexPath:(id)arg1 position:(unsigned long long)arg2 animated:(BOOL)arg3;
- (long long)sectionIndexForTag:(long long)arg1;
- (id)cellIndexPathForCellTag:(long long)arg1;
- (id)cellIndexPathForSectionTag:(long long)arg1 cellTag:(long long)arg2;
- (id)init;
- (void)loadView;
- (void)viewDidTransitionToNewSize;
- (void)resetCollectionViewWithLayout:(id)arg1;
- (void)dealloc;
- (void)setScrollDirection:(long long)arg1;
- (void)reloadView;
- (id /* block */)reload;
- (id /* block */)clear;
- (id /* block */)clearAllItems;
- (id /* block */)clearAllCells;
- (id /* block */)update;
- (id /* block */)updateAllItems;
- (id /* block */)updateAllCells;
- (id /* block */)isEmpty;
- (id /* block */)addSection;
- (id /* block */)insertSection;
- (id /* block */)sectionForTag;
- (id /* block */)deleteSection;
- (id /* block */)hasSection;
- (id /* block */)setHeader;
- (id /* block */)setXibHeader;
- (id /* block */)setFooter;
- (id /* block */)setXibFooter;
- (id /* block */)addCell;
- (id /* block */)addXibCell;
- (id /* block */)addCells;
- (id /* block */)addXibCells;
- (id /* block */)addSeperatorCell;
- (id /* block */)insertCell;
- (id /* block */)insertXibCell;
- (id /* block */)insertCells;
- (id /* block */)insertXibCells;
- (id)deleteCell;
- (id)deleteCells;
- (id)updateCell;
- (id)updateCells;
- (id)hasCell;
- (id)dataModel;
- (id)dataModelArray;
- (id)indexPath;
- (id)hostView;
- (id)data;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 colorForSectionAtIndex:(long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 didSectionHeaderPinToVisibleBounds:(long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 didSectionFooterPinToVisibleBounds:(long long)arg3;
- (id)collectionView;
- (id)angel;
- (long long)scrollDirection;
- (BOOL)sectionHeadersPinToVisibleBounds;
- (void)setSectionHeadersPinToVisibleBounds:(BOOL)arg1;
- (BOOL)sectionFootersPinToVisibleBounds;
- (void)setSectionFootersPinToVisibleBounds:(BOOL)arg1;
- (void).cxx_destruct;
@end
