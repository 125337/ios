@interface WCEditFilterToolAttrView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, WCEditFilterHeaderViewDelegate>
{
    BOOL _didChangeFilter; // +0x8
    UIImage * _originalImage; // +0x10
    long long _filterIndex; // +0x18
    long long _filterValue; // +0x20
    id <WCEditFilterToolAttrViewDelegate> _delegate; // +0x28
    UICollectionView * _collectionView; // +0x30
    UICollectionViewFlowLayout * _flowLayout; // +0x38
    WCEditFilterHeaderView * _headerView; // +0x40
    unsigned long long _filterCount; // +0x48
    XEffectEffectManager * _effectManager; // +0x50
    NSIndexPath * _selectedIndexPath; // +0x58
    NSMutableArray * _filterValueArray; // +0x60
    NSMutableArray * _filterCellImageArray; // +0x68
    NSArray * _filterNameArray; // +0x70
    NSMutableDictionary * _filterDisplayImageDic; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)filterDisplayImageDic;
- (id)filterValueArray;
- (id)filterCellImageArray;
- (id)filterNameArray;
- (id)headerView;
- (id)flowLayout;
- (id)collectionView;
- (id)selectedIndexPath;
- (void)setOriginalImage:(id)arg1;
- (void)setFilterIndex:(long long)arg1;
- (void)setFilterValue:(long long)arg1;
- (id)effectManager;
- (void)reloadCollectionView;
- (id)imageWithImage:(id)arg1 scaledToFillSize:(CGSize)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)sliderValueDidChange:(int)arg1;
- (id)originalImage;
- (long long)filterIndex;
- (long long)filterValue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (unsigned long long)filterCount;
- (void)setFilterCount:(unsigned long long)arg1;
- (void)setEffectManager:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setFilterValueArray:(id)arg1;
- (void)setFilterCellImageArray:(id)arg1;
- (void)setFilterNameArray:(id)arg1;
- (void)setFilterDisplayImageDic:(id)arg1;
- (BOOL)didChangeFilter;
- (void)setDidChangeFilter:(BOOL)arg1;
- (void).cxx_destruct;
@end

