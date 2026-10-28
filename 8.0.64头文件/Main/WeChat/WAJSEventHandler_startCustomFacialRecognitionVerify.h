@interface WAJSEventHandler_startCustomFacialRecognitionVerify : WAJSEventHandler_baseFacialRecognition
- (BOOL)useEncryptionVerify;
- (BOOL)needUploadVideo;
- (id)jsapiFuncName;
- (BOOL)needConfirmView;
@end
