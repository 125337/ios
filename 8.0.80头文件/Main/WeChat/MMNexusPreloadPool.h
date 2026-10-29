@interface MMNexusPreloadPool : NSObject
{
    NSMutableArray * _items; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)warmupPageId:(id)arg1;
- (id)acquireForPageId:(id)arg1;
- (void)purgeAll;
- (void)purgePageId:(id)arg1;
- (void)_evictIfNeededLocked;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
