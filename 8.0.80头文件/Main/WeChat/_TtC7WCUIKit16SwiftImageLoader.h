@interface _TtC7WCUIKit16SwiftImageLoader : NSObject
+ (id)shared;
+ (BOOL)enabled;
+ (BOOL)enabledHead;
+ (unsigned long long)removeAllCache;
+ (void)removeAllMemoryCache;
+ (void)removeMemoryCacheTo:(double)arg1;
+ (id)cacheBaseDirectory;
+ (id)cachedDataFor:(id)arg1;
+ (BOOL)hasCachedWithUrl:(id)arg1;
+ (id)makeImagePathFor:(id)arg1;
+ (id)requestKeyFor:(id)arg1;
+ (void)removeMemoryCacheFor:(id)arg1;
+ (void)saveDataFor:(id)arg1 data:(id)arg2;
+ (void)saveImageFor:(id)arg1 image:(id)arg2 data:(id)arg3;
- (id)init;
- (void).cxx_destruct;
@end
