@interface MMNexusPageRegistry : NSObject
+ (id)_storage;
+ (void)registerPage:(id)arg1;
+ (void)registerPages:(id)arg1;
+ (id)metadataForPageId:(id)arg1;
+ (BOOL)isResourceNameRegistered:(id)arg1;
+ (id)preloadablePageIds;
+ (void)_clearAllForTesting;
@end
