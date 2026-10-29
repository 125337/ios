@interface WAJSEventHandler_baseFacialRecognition : WAJSEventHandler_BaseEvent <FaceRecogPrivateVerifyHandlerDelegate>
{
    FaceRecogPrivateVerifyHandler * _handler; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (BOOL)needUploadVideo;
- (BOOL)useEncryptionVerify;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void).cxx_destruct;
@end

