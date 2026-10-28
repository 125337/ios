@interface WCFinderProfileOverviewCache : NSObject <PBCoding>
{
    NSArray * _items; // +0x8
    WCFinderProfileOverviewCacheItem * _cache; // +0x10
}
+ (void)PBArrayAdd_items;
+ (void)PBArrayAdd_cache;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)items;
- (void)setItems:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end
