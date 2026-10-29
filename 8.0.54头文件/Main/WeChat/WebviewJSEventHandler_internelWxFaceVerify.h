@interface WebviewJSEventHandler_internelWxFaceVerify : WebviewJSEventHandlerBase <FaceRecogHandlerDelegate, FaceRecogBaseHandlerDelegate>
{
    JSEvent * _cbEvent; // +0x8
    FaceRecogInternelHandler * _verifyHandler; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)didUploadFaceData:(id)arg1;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (id)cbEvent;
- (void)setCbEvent:(id)arg1;
- (id)verifyHandler;
- (void)setVerifyHandler:(id)arg1;
- (void).cxx_destruct;
@end

