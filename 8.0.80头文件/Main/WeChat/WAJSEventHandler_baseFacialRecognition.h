@interface WAJSEventHandler_baseFacialRecognition : WAJSEventHandler_BaseEvent <FaceRecogPrivateVerifyHandlerDelegate>
{
    FaceRecogPrivateVerifyHandler * _handler; // +0x8
    NSString * _faceAuthCardToken; // +0x10
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (BOOL)needUploadVideo;
- (BOOL)useEncryptionVerify;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
- (BOOL)isLivenessDetectionOnly;
- (id)handler;
- (void)setHandler:(id)arg1;
- (id)faceAuthCardToken;
- (void)setFaceAuthCardToken:(id)arg1;
- (void).cxx_destruct;
@end
