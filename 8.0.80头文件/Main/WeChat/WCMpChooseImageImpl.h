@interface WCMpChooseImageImpl : NSObject <MMImagePickerManagerDelegate>
{
    BOOL _userDidSelectOrCancel; // +0x8
    BOOL _isOriginalMode; // +0x9
    UIViewController * _viewController; // +0x10
    id /* block */ _completion; // +0x18
}
- (void)chooseImageWithRequest:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)processUIImageFromInfo:(id)arg1;
- (id)writeTempFileWithData:(id)arg1 image:(id)arg2;
- (void)finishWithResult:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)userDidSelectOrCancel;
- (void)setUserDidSelectOrCancel:(BOOL)arg1;
- (BOOL)isOriginalMode;
- (void)setIsOriginalMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
