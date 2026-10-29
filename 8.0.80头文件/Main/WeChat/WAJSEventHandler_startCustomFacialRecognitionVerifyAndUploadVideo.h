@interface WAJSEventHandler_startCustomFacialRecognitionVerifyAndUploadVideo : WAJSEventHandler_baseFacialRecognition
- (BOOL)useEncryptionVerify;
- (BOOL)needUploadVideo;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
@end
