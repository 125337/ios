@interface ZZFLEXSectionModel : NSObject
{
    long long _sectionTag; // +0x8
    UIColor * _backgroundColor; // +0x10
    ZZFLEXViewModel * _headerViewModel; // +0x18
    ZZFLEXViewModel * _footerViewModel; // +0x20
    double _minimumLineSpacing; // +0x28
    double _minimumInteritemSpacing; // +0x30
    NSMutableArray * _itemsArray; // +0x38
    UIEdgeInsets _sectionInsets; // +0x40
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
- (void).cxx_destruct;
@end

