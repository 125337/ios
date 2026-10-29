@interface MMMediaDevice : MMObject
+ (void)isMediaDeviceAvailable:(int)arg1 completionHandler:(id /* block */)arg2;
+ (void)isMediaDeviceAvailable:(int)arg1 shouldRequestAccessForMedia:(BOOL)arg2 completionHandler:(id /* block */)arg3;
+ (void)isCameraAvailable:(id /* block */)arg1 shouldRequestAccessForMedia:(BOOL)arg2;
+ (void)isAlbumAvailable:(id /* block */)arg1;
+ (void)isMicroPhoneAvailable:(id /* block */)arg1 shouldRequestAccessForMedia:(BOOL)arg2;
+ (void)isLocationAvailable:(id /* block */)arg1;
+ (void)deviceHasMediaPrivilege:(id)arg1 shouldRequestAccessForMedia:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)showMediaAuthorizedAlert:(id)arg1 content:(id)arg2;
@end
