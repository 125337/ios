@interface TingStorageManagerCpp : NSObject
+ (void)setEnableListenCategoryCache:(BOOL)arg1;
+ (void)setEnableListenItemCache:(BOOL)arg1;
+ (void)setPreloadConcurrentCount:(int)arg1;
+ (int)getPreloadConcurrentCount;
+ (void)removeListenCategoryStorage:(id)arg1;
+ (void)clearListenCategoryStorage;
@end

