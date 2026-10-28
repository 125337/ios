@interface _TtC6WeChat24ImageCacheCostAccountant : NSObject <NSCacheDelegate>
{
     module; // +0x8
     cost; // +0x18
     mutext; // +0x20
}
+ (id)headCacher;
+ (id)fastCacher;
+ (id)snsCacher;
+ (id)finderCacher;
+ (id)localCacher;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)onCacheWithImage:(id)arg1;
- (void)onAddCacheWithLength:(long long)arg1;
- (void)onRemoveCacheWithLength:(long long)arg1;
- (void)onDiscardWithImage:(id)arg1;
- (void)onRemoveAll;
- (id)init;
- (void).cxx_destruct;
@end
