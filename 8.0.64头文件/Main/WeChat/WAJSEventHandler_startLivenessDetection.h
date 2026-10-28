@interface WAJSEventHandler_startLivenessDetection : WAJSEventHandler_baseFacialRecognition
- (BOOL)isLivenessDetectionOnly;
- (id)jsapiFuncName;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (BOOL)needConfirmView;
@end
