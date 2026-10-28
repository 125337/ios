@interface WAJSEventHandler_cropImage : WAJSEventHandler_BaseEvent <MMImageCropperDelegate>
{
    MMImageCropperViewController * _cropViewController; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void).cxx_destruct;
@end
