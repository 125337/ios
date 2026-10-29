@interface WAJSEventHandler_faceVerifyForPay : WAJSEventHandler_BaseEvent <FaceRecogPayHandlerDelegate>
{
    FaceRecogPayHandler * _faceHandler; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (void).cxx_destruct;
@end

