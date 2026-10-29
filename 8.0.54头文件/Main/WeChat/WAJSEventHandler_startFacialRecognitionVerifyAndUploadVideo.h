@interface WAJSEventHandler_startFacialRecognitionVerifyAndUploadVideo : WAJSEventHandler_baseFacialRecognition
- (BOOL)useEncryptionVerify;
- (BOOL)needUploadVideo;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
@end

