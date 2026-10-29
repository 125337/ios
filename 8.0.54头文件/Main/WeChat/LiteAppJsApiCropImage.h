@interface LiteAppJsApiCropImage : LiteAppJsApi <MMImageCropperDelegate, IWebviewResourceManagerExt>
{
    NSMutableArray * _localIds; // +0x20
    long long _totalCount; // +0x28
    MMImageCropperViewController * _cropViewController; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)delayNotifyWeb:(id)arg1;
- (void).cxx_destruct;
@end

