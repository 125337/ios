@interface MMFinderLiveWebPageSheetContainerCache : NSObject
{
    NSMutableDictionary * _items; // +0x8
}
+ (id)itemKeyWithPageSheetParams:(id)arg1;
- (id)init;
- (void)addContainer:(id)arg1 withPageSheetParams:(id)arg2;
- (void)removeContainerWithPageSheetParams:(id)arg1;
- (id)containerWithPageSheetParams:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

