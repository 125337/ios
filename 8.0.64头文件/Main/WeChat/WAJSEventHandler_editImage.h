@interface WAJSEventHandler_editImage : WAJSEventHandler_BaseEvent <WCEditImageViewControllerDelegate>
{
    WCEditImageViewController * _editImageViewController; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void).cxx_destruct;
@end
