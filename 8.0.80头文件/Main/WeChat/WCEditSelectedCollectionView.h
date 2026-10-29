@interface WCEditSelectedCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _showGifLogo; // +0x8
    BOOL _disableLongGesture; // +0x9
    NSMutableArray * _assets; // +0x10
    NSMutableArray * _thumbImages; // +0x18
    id <WCEditSelectedCollectionViewDelegate> _delegate; // +0x20
    UIColor * _cellBorderLineColor; // +0x28
    UICollectionView * _collectionView; // +0x30
    UICollectionViewFlowLayout * _flowLayout; // +0x38
    long long _currentSelectedIndex; // +0x40
    MMAsset * _currentSelectedAsset; // +0x48
    NSIndexPath * _oldIndexPath; // +0x50
    UIView * _snapedView; // +0x58
    double _layoutSpace; // +0x60
}
+ (CGSize)editSelectCollectionViewDefaultSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)collectionView;
- (id)flowLayout;
- (void)customSetHeight:(double)arg1;
- (void)customLayoutSpace:(double)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handlelongGesture:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)setCurrentSelect:(unsigned long long)arg1;
- (void)selectItemAtIndexPath:(unsigned long long)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)refresh;
- (void)scrollViewDidScroll:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)thumbImages;
- (void)setThumbImages:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellBorderLineColor;
- (void)setCellBorderLineColor:(id)arg1;
- (BOOL)showGifLogo;
- (void)setShowGifLogo:(BOOL)arg1;
- (BOOL)disableLongGesture;
- (void)setDisableLongGesture:(BOOL)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (long long)currentSelectedIndex;
- (void)setCurrentSelectedIndex:(long long)arg1;
- (id)currentSelectedAsset;
- (void)setCurrentSelectedAsset:(id)arg1;
- (id)oldIndexPath;
- (void)setOldIndexPath:(id)arg1;
- (id)snapedView;
- (void)setSnapedView:(id)arg1;
- (double)layoutSpace;
- (void)setLayoutSpace:(double)arg1;
- (void).cxx_destruct;
@end
