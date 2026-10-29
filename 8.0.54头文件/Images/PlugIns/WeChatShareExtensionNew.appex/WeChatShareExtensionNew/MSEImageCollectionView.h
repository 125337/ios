@interface MSEImageCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _bFromMainViewController; // +0x8
    unsigned int _cellCount; // +0xc
    UICollectionView * _collectionView; // +0x10
    NSArray * _imageUrls; // +0x18
    double _itemWidth; // +0x20
    UIImageView * _singleImageView; // +0x28
    double _marginEdge; // +0x30
    double _cellMargin; // +0x38
    double _bottomMargin; // +0x40
    NSMutableDictionary * _cellCompressImageDic; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 ImageUrls:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 ImageUrls:(id)arg2 MarginEdge:(double)arg3 CellMargin:(double)arg4 RowCellCount:(unsigned int)arg5 BottomMargin:(double)arg6;
- (void)initSubView;
- (void)initSingleImageView;
- (void)initCollectView;
- (void)reloadCollectionView;
- (double)contentHeight;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (unsigned int)cellCount;
- (void)setCellCount:(unsigned int)arg1;
- (BOOL)bFromMainViewController;
- (void)setBFromMainViewController:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)imageUrls;
- (void)setImageUrls:(id)arg1;
- (double)itemWidth;
- (void)setItemWidth:(double)arg1;
- (id)singleImageView;
- (void)setSingleImageView:(id)arg1;
- (double)marginEdge;
- (void)setMarginEdge:(double)arg1;
- (double)cellMargin;
- (void)setCellMargin:(double)arg1;
- (double)bottomMargin;
- (void)setBottomMargin:(double)arg1;
- (id)cellCompressImageDic;
- (void)setCellCompressImageDic:(id)arg1;
- (void).cxx_destruct;
@end

