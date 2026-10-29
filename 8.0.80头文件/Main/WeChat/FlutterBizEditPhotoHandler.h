@interface FlutterBizEditPhotoHandler : NSObject <WCEditImageViewControllerDelegate, EditImageForwardAndEditLogicDelegate>
{
    BOOL _isHandlingEditResult; // +0x8
    WCEditImageViewController * _editImageViewController; // +0x10
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x18
    FlutterBizImageEditViewController * _imageEditHostViewController; // +0x20
    id /* block */ _completion; // +0x28
}
- (void)editPhoto:(id)arg1 photoPath:(id)arg2 useNewImageEditLayout:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)dismissAndReset:(id)arg1;
- (void)onEditImageForwardAndEditResult:(id)arg1;
- (void)onDismissEditView;
- (void)reset;
- (id)editImageViewController;
- (void)setEditImageViewController:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (id)imageEditHostViewController;
- (void)setImageEditHostViewController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)isHandlingEditResult;
- (void)setIsHandlingEditResult:(BOOL)arg1;
- (void).cxx_destruct;
@end
