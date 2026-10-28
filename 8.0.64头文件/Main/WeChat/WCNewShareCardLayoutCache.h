@interface WCNewShareCardLayoutCache : MMObject
{
    WCNewShareCardLayoutCacheItem * _cacheItem; // +0x8
}
- (id)init;
- (void)loadLayoutCache;
- (void)initForSave;
- (void)saveLayoutCache;
- (id)cacheItem;
- (void)setCacheItem:(id)arg1;
- (void).cxx_destruct;
@end
