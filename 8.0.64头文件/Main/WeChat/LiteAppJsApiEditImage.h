@interface LiteAppJsApiEditImage : LiteAppJsApi <WCEditImageViewControllerDelegate, IWebviewResourceManagerExt>
{
    NSMutableArray * _localIds; // +0x20
    long long _totalCount; // +0x28
    WCEditImageViewController * _editImageViewController; // +0x30
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)delayNotifyWeb:(id)arg1;
- (void).cxx_destruct;
@end
