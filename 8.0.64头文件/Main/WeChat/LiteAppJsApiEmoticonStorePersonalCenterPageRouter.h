@interface LiteAppJsApiEmoticonStorePersonalCenterPageRouter : LiteAppJsApi <MMImagePickerManagerDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id)makeImagePickResult:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancelEditImage:(id)arg1;
@end
