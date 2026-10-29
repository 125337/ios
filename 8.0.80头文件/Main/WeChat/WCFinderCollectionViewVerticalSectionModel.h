@interface WCFinderCollectionViewVerticalSectionModel : NSObject <WCFinderCollectionViewSectionModelProtocol>
{
    NSArray * _items; // +0x8
}
+ (id)modelWithItem:(id)arg1;
+ (id)modelWithItems:(id)arg1;
- (id)itemsHeightWithLayoutEnvironment:(id)arg1;
- (id)itemsHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
