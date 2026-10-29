@interface WCEditSelectedCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSMutableArray * _assets; // +0x8
    id <WCEditSelectedCollectionViewDelegate> _delegate; // +0x10
    UIColor * _cellBorderLineColor; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _flowLayout; // +0x28
    long long _currentSelectedIndex; // +0x30
    NSIndexPath * _oldIndexPath; // +0x38
    UIView * _snapedView; // +0x40
}
+ (CGSize)editSelectCollectionViewDefaultSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)collectionView;
- (id)flowLayout;
- (void)customSetHeight:(double)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handlelongGesture:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellBorderLineColor;
- (void)setCellBorderLineColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (long long)currentSelectedIndex;
- (void)setCurrentSelectedIndex:(long long)arg1;
- (id)oldIndexPath;
- (void)setOldIndexPath:(id)arg1;
- (id)snapedView;
- (void)setSnapedView:(id)arg1;
- (void).cxx_destruct;
@end

