@interface WCFinderPersonalCenterItem2 : NSObject
{
    Class _cellClass; // +0x8
    id /* block */ _cellDescriptor; // +0x10
    UICollectionViewCell * _weakCell; // +0x18
    SEL _onClick; // +0x20
}
+ (id)cellClass:(Class)arg1 descriptor:(id /* block */)arg2;
- (void)update;
- (Class)cellClass;
- (void)setCellClass:(Class)arg1;
- (id /* block */)cellDescriptor;
- (void)setCellDescriptor:(id /* block */)arg1;
- (id)weakCell;
- (void)setWeakCell:(id)arg1;
- (SEL)onClick;
- (void)setOnClick:(SEL)arg1;
- (void).cxx_destruct;
@end
