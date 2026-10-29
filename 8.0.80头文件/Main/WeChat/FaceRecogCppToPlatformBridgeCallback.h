@interface FaceRecogCppToPlatformBridgeCallback : NSObject
{
    FaceRecogCppToPlatformBridgeDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(FaceRecogCppToPlatformBridgeDispatcherBridgeObjcImpl *)arg1;
- (void)onStartHuiYanCheckComplete:(unsigned long long)arg1;
- (void)onStartAuthByLightDataComplete:(unsigned long long)arg1;
- (void)onCloseAuthViewComplete:(unsigned long long)arg1;
- (void)onStopAuthActionComplete:(unsigned long long)arg1;
- (void)onUploadFaceDataComplete:(unsigned long long)arg1 fileId:(id)arg2 aesKey:(id)arg3 errCode:(int)arg4;
- (void)onUploadFaceVideoComplete:(unsigned long long)arg1 fileId:(id)arg2 aesKey:(id)arg3 errCode:(int)arg4;
- (void)onRequestLoginFaceCheckConfigComplete:(unsigned long long)arg1 errCode:(int)arg2 errMsg:(id)arg3 bioId:(id)arg4 bioSigCollectCfg:(id)arg5 liveSelectData:(id)arg6 faceRatio:(float)arg7;
- (void)onBindLoginFaceCheckVideoComplete:(unsigned long long)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)onUpdateBizTipsComplete:(unsigned long long)arg1;
- (void)onOnFlowCompleteComplete:(unsigned long long)arg1;
- (void)onOpenCTIDComplete:(unsigned long long)arg1 errCode:(int)arg2 resultCode:(id)arg3 resultDesc:(id)arg4 idCardAuthData:(id)arg5 certPwdData:(id)arg6;
- (void)onGetWCExtInfoComplete:(unsigned long long)arg1 extSpamInfo:(id)arg2;
@end
