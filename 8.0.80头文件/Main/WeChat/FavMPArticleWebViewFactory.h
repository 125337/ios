@interface FavMPArticleWebViewFactory : NSObject
+ (BOOL)isFastLoadEnabled;
+ (BOOL)canOpenFavoritesItem:(id)arg1;
+ (id)contextForFavoritesItem:(id)arg1;
+ (void)configureWebViewController:(id)arg1 favoritesItem:(id)arg2 context:(id)arg3;
+ (id)webViewControllerForFavoritesItem:(id)arg1 isUsedFastLoad:(BOOL *)arg2;
+ (BOOL)canOpenFavDataItem:(id)arg1;
+ (id)contextForFavDataItem:(id)arg1 parent:(id)arg2;
+ (void)configureWebViewController:(id)arg1 favDataItemWrap:(id)arg2 context:(id)arg3;
+ (id)webViewControllerForFavDataItemWrap:(id)arg1 isUsedFastLoad:(BOOL *)arg2;
@end
