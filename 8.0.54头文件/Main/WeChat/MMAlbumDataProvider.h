@interface MMAlbumDataProvider : MMObject
+ (void)AllMMAlbumsWith:(id /* block */)arg1 errorBlock:(id /* block */)arg2 options:(id)arg3;
+ (void)AllMMAlbumsWith:(id /* block */)arg1 errorBlock:(id /* block */)arg2 options:(id)arg3 callbackOnMainThread:(BOOL)arg4;
+ (BOOL)isAuthorize;
+ (BOOL)isAuthorizeNotDetermined;
+ (BOOL)isUserAuthorize;
+ (BOOL)isPhotoAccessLimited;
+ (void)FirstMMAlbumWith:(id /* block */)arg1 errorBlock:(id /* block */)arg2 options:(id)arg3;
+ (void)FetchMMAlbumWithID:(id)arg1 With:(id /* block */)arg2 errorBlock:(id /* block */)arg3 options:(id)arg4;
+ (void)FetchLastMMAssetWith:(id /* block */)arg1 inSecond:(double)arg2;
+ (void)internalFetchLastMMAssetWith:(id /* block */)arg1 inSecond:(double)arg2;
@end

