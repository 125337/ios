@interface WebviewJSEventHandler_faceVerifyForPay : WebviewJSEventHandlerBase <FaceRecogPayHandlerDelegate>
{
    JSEvent * _cbEvent; // +0x8
    FaceRecogPayHandler * _faceHandler; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (id)cbEvent;
- (void)setCbEvent:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (void).cxx_destruct;
@end
