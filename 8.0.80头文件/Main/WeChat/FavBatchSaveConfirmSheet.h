@interface FavBatchSaveConfirmSheet : NSObject
+ (void)showWithImageCount:(long long)arg1 videoCount:(long long)arg2 confirmBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
+ (void)showWithImageCount:(long long)arg1 videoCount:(long long)arg2 reportParams:(id)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
+ (void)showAlreadySavedWithAlbumDate:(id)arg1 reportParams:(id)arg2 confirmBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
+ (void)showInsufficientStorageWithSelectedItemCount:(long long)arg1 requiredSpaceSize:(unsigned long long)arg2 availableSpaceSize:(unsigned long long)arg3 reportParams:(id)arg4 confirmBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
+ (void)showWithTitle:(id)arg1 confirmButtonTitle:(id)arg2 clickType:(unsigned long long)arg3 reportParams:(id)arg4 confirmBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
+ (id)titleForAlreadySavedWithAlbumDate:(id)arg1;
+ (id)titleWithImageCount:(long long)arg1 videoCount:(long long)arg2;
@end
