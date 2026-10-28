@interface MMFinderLiveGiftResourcePathUtils : NSObject
+ (id)getMd5ForURL:(id)arg1;
+ (id)cachePathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)unzipPathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)downloadPathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)giftCacheKey:(id)arg1 animationId:(id)arg2 scenarioKey:(id)arg3;
@end
