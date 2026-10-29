@interface WCFinderShareCachePolicy : NSObject
+ (id)currentConfig;
+ (BOOL)isEnabledForScene:(int)arg1 config:(id)arg2;
+ (BOOL)shouldDelayAtTimestamp:(double)arg1 config:(id)arg2;
+ (unsigned long long)validTimeWithConfig:(id)arg1;
+ (long long)priorityForSource:(int)arg1;
+ (BOOL)isCacheableDataItem:(id)arg1 source:(int)arg2;
+ (id)cachedObjectFromDataItem:(id)arg1 cacheTimestamp:(unsigned long long)arg2;
+ (id)cachedObjectFromData:(id)arg1;
@end
