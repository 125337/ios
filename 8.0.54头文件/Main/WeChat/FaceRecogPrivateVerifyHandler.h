@interface FaceRecogPrivateVerifyHandler : MMObject <FaceRecog3rdVerifyConfirmLogicDelegate, FaceRecogHandlerDelegate, FaceRecog3rdVerifyConfirmViewControllerDelegate>
{
    BOOL _needConfirmView; // +0x8
    BOOL _needVideo; // +0x9
    BOOL _isDismissed; // +0xa
    unsigned int _checkAliveType; // +0xc
    unsigned int _sourceType; // +0x10
    unsigned int _scene; // +0x14
    id <FaceRecogPrivateVerifyHandlerDelegate> _delegate; // +0x18
    MMUIViewController * _fromVC; // +0x20
    NSString * _funcName; // +0x28
    FaceRecog3rdVerifyConfirmViewController * _confirmVC; // +0x30
    FaceRecog3rdVerifyHandler * _verifyHandler; // +0x38
    FaceRecog3rdVerifyConfirmLogic * _confirmLogic; // +0x40
    NSString * _appId; // +0x48
    NSString * _verifyInfo; // +0x50
}
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithUnionVideoAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 needVideo:(BOOL)arg3 scene:(unsigned int)arg4;
- (void)dealloc;
- (void)initData;
- (void)doStartFaceReco;
- (id)getCurVC;
- (void)disMissAll:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)startLoading;
- (void)stopLoading;
- (void)start;
- (void)reportWithResult:(int)arg1;
- (id)getVerifyResult:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)onGetConfirmInfoSucceed:(id)arg1;
- (void)onGetConfirmInfo:(id)arg1 failedCauseOf:(unsigned int)arg2 msg:(id)arg3 desc:(id)arg4;
- (void)onConfirmStartFaceReco;
- (void)onConfirmCancel;
- (void)onConfirmFail;
- (void)onGetConfirmInfoFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (BOOL)needConfirmView;
- (void)setNeedConfirmView:(BOOL)arg1;
- (unsigned int)checkAliveType;
- (void)setCheckAliveType:(unsigned int)arg1;
- (id)funcName;
- (void)setFuncName:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)confirmVC;
- (void)setConfirmVC:(id)arg1;
- (id)verifyHandler;
- (void)setVerifyHandler:(id)arg1;
- (id)confirmLogic;
- (void)setConfirmLogic:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (BOOL)needVideo;
- (void)setNeedVideo:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (void).cxx_destruct;
@end

