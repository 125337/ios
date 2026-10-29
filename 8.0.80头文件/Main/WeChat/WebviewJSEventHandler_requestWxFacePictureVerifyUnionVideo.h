@interface WebviewJSEventHandler_requestWxFacePictureVerifyUnionVideo : WebviewJSEventHandlerBase <FaceRecogPrivateVerifyHandlerDelegate>
{
    FaceRecogPrivateVerifyHandler * _handler; // +0x8
    JSEvent * _cbEvent; // +0x10
    NSMutableDictionary * _errorMap; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (id)cbEvent;
- (void)setCbEvent:(id)arg1;
- (id)errorMap;
- (void)setErrorMap:(id)arg1;
- (void).cxx_destruct;
@end
