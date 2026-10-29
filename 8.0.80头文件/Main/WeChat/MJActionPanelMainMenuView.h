@interface MJActionPanelMainMenuView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isSectionSeparatorVisible; // +0x8
    BOOL _shouldCellsCenterAligned; // +0x9
    id <MJActionPanelMainMenuViewDelegate> _delegate; // +0x10
    unsigned long long _panelConfiguration; // +0x18
    NSArray * _sectionInsets; // +0x20
    UICollectionView * _collectionView; // +0x28
    NSArray * _menuItems; // +0x30
}
- (id)initWithMenuItems:(id)arg1 configuration:(unsigned long long)arg2;
- (void)setupConfiguration:(unsigned long long)arg1;
- (void)commonInit;
- (BOOL)menuItemsHaveChanges:(id)arg1;
- (void)updateWithMenuItems:(id)arg1 configuration:(unsigned long long)arg2 forceUpdate:(BOOL)arg3;
- (void)updateSectionInsets;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)defaultSectionInsetsForCollectionView:(id)arg1;
- (id)calculateHorizontalAlignmentInsetsForAllSectionsInCollectionView:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)panelConfiguration;
- (void)setPanelConfiguration:(unsigned long long)arg1;
- (BOOL)isSectionSeparatorVisible;
- (void)setIsSectionSeparatorVisible:(BOOL)arg1;
- (BOOL)shouldCellsCenterAligned;
- (void)setShouldCellsCenterAligned:(BOOL)arg1;
- (id)sectionInsets;
- (void)setSectionInsets:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (void).cxx_destruct;
@end
