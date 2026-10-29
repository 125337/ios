@interface MiniTaskFavHelper : NSObject
+ (BOOL)canAddToFav:(id)arg1;
+ (void)addMiniTaskToFav:(id)arg1 startLoading:(id /* block */)arg2 complete:(id /* block */)arg3;
+ (void)addFavItem:(id)arg1;
@end

