@interface ZZFLEXSectionModel : NSObject
{
    long long _sectionTag; // +0x8
    UIColor * _backgroundColor; // +0x10
    ZZFLEXViewModel * _headerViewModel; // +0x18
    ZZFLEXViewModel * _footerViewModel; // +0x20
    double _minimumLineSpacing; // +0x28
    double _minimumInteritemSpacing; // +0x30
    NSMutableArray * _itemsArray; // +0x38
    long long _fslColumnCount; // +0x40
    double _fslDecorationHeight; // +0x48
    UICollectionViewLayoutAttributes * _fslDecorationLayoutAttributes; // +0x50
    CGSize _fslCellSpace; // +0x58
    UIEdgeInsets _sectionInsets; // +0x68
    UIEdgeInsets _fslHeaderEdgeInset; // +0x88
    UIEdgeInsets _fslFooterEdgeInset; // +0xa8
    UIEdgeInsets _fslDecorationEdgeInset; // +0xc8
}
- (id)init;
- (CGSize)headerViewSize;
- (CGSize)footerViewSize;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (id)dataModelAtIndex:(unsigned long long)arg1;
- (id)description;
- (long long)sectionTag;
- (void)setSectionTag:(long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)headerViewModel;
- (void)setHeaderViewModel:(id)arg1;
- (id)footerViewModel;
- (void)setFooterViewModel:(id)arg1;
- (double)minimumLineSpacing;
- (void)setMinimumLineSpacing:(double)arg1;
- (double)minimumInteritemSpacing;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (UIEdgeInsets)sectionInsets;
- (void)setSectionInsets:(UIEdgeInsets)arg1;
- (id)itemsArray;
- (long long)fslColumnCount;
- (void)setFslColumnCount:(long long)arg1;
- (CGSize)fslCellSpace;
- (void)setFslCellSpace:(CGSize)arg1;
- (double)fslDecorationHeight;
- (void)setFslDecorationHeight:(double)arg1;
- (UIEdgeInsets)fslHeaderEdgeInset;
- (void)setFslHeaderEdgeInset:(UIEdgeInsets)arg1;
- (UIEdgeInsets)fslFooterEdgeInset;
- (void)setFslFooterEdgeInset:(UIEdgeInsets)arg1;
- (UIEdgeInsets)fslDecorationEdgeInset;
- (void)setFslDecorationEdgeInset:(UIEdgeInsets)arg1;
- (id)fslDecorationLayoutAttributes;
- (void)setFslDecorationLayoutAttributes:(id)arg1;
- (void).cxx_destruct;
@end
