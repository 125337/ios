@interface TingOpenAPIHandler : MMObject
+ (void)openTingViewFromJSAPIWithParam:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(id /* block */)arg4;
+ (void)openCategoryFromJSAPIWithParam:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(id /* block */)arg4;
+ (void)openCategoryItemWithCategoryId:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(id /* block */)arg4;
+ (void)openCategoryItem:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(id /* block */)arg4;
+ (void)__doOpenCategory:(id)arg1 scene:(int)arg2 navigationController:(id)arg3;
+ (BOOL)__checkCategoryItemValid:(id)arg1 errMsg:(id *)arg2;
+ (void)playWithCategoryId:(id)arg1 scene:(int)arg2 callBack:(id /* block */)arg3;
+ (BOOL)operateTingItemInCurrentNav:(id)arg1 params:(id)arg2;
+ (void)showAddAlbumBottomToastInView:(id)arg1 scene:(int)arg2 WithClickAction:(id /* block */)arg3;
+ (void)__handleCategoryEvent:(id)arg1 categoryItem:(id)arg2 params:(id)arg3;
+ (unsigned long long)eventFromEngineEventValue:(unsigned long long)arg1;
+ (void)openProfileFromJSAPIWithParam:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(id /* block */)arg4;
@end

