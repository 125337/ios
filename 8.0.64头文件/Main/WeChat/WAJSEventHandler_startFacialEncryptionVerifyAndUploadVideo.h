@interface WAJSEventHandler_startFacialEncryptionVerifyAndUploadVideo : WAJSEventHandler_baseFacialRecognition
- (BOOL)useEncryptionVerify;
- (BOOL)needUploadVideo;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
@end
