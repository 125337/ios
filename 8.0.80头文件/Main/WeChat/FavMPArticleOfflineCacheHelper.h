@interface FavMPArticleOfflineCacheHelper : NSObject
+ (BOOL)isEnabled;
+ (BOOL)isSupportedURLItem:(id)arg1 targetURL:(id)arg2 finderThemeLiveShareItem:(id)arg3;
+ (id)articleURLForFavoritesItem:(id)arg1;
+ (id)articleURLForFavData:(id)arg1;
+ (id)requestURLInfoForURL:(id)arg1 urlItem:(id)arg2 sourceUserName:(id)arg3;
+ (id)requestURLInfoForDataObject:(id)arg1;
+ (void)preloadVisibleDataObjects:(id)arg1;
+ (void)addArticleIdentityForURL:(id)arg1 toSet:(id)arg2;
+ (void)collectArticleIdentitiesFromFavData:(id)arg1 intoSet:(id)arg2;
+ (void)deleteOfflineCachesForFavoritesItems:(id)arg1;
@end
