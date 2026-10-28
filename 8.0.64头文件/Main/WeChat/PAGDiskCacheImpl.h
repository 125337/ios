@interface PAGDiskCacheImpl : NSObject
+ (unsigned long long)MaxDiskSize;
+ (void)SetMaxDiskSize:(unsigned long long)arg1;
+ (void)RemoveAll;
+ (id)ReadFile:(id)arg1;
+ (BOOL)WritFile:(id)arg1 data:(id)arg2;
@end
