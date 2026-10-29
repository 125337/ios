@interface WCPayCollectPalmControlLogic : WCPayControlLogic <WCPayOpenPalmServiceAuthCgiDelegate, WCPayCheckPalmUserResouceCgiDelegate, ICdnComMgrExt, WCPayUploadOnlinePalmResourceCgiDelegate>
{
    BOOL _isCdnUploading; // +0x38
    BOOL _isNeedUploadBypass; // +0x39
    BOOL _isNeedUploadCgi; // +0x3a
    BOOL _isNeedPalmInfoCallback; // +0x3b
    unsigned int _palmCaptureMode; // +0x3c
    unsigned int _uploadCdnType; // +0x40
    id <WCPayCollectPalmControlLogicDelegate> _logicDelegate; // +0x48
    NSString * _currentAppId; // +0x50
    NSString * _currentCdnMediaId; // +0x58
    NSString * _finalPalmResult; // +0x60
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)removeLastSavedTmpFiles;
- (void)startLogic;
- (void)startCheckPalmServiceAuth;
- (void)onOpenPalmServiceAuthCgiOK:(BOOL)arg1 body:(id)arg2 errorMessage:(id)arg3;
- (void)onPalmEntryViewControllerBack:(id)arg1;
- (id)wrapJSApiResult:(unsigned long long)arg1 errorMessage:(id)arg2;
- (id)wrapPalmInfoForCallback:(id)arg1;
- (void)onPalmEntryViewControllerGetFinalResult:(id)arg1;
- (void)uploadResultToCdn:(id)arg1 encryptFileKey:(id)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)doUploadBypassResult:(id)arg1;
- (void)onUploadOnlinePalmResourceCgiOK:(BOOL)arg1 errorMessage:(id)arg2;
- (void)handleTimeOutError:(unsigned int)arg1;
- (void)doCheckPalmResult:(id)arg1;
- (id)getPalmReportInfo;
- (void)onCheckPalmUserResouceCgiOK:(int)arg1 errorMessage:(id)arg2;
- (id)getEncryptPalmFileKey:(id)arg1;
- (BOOL)isUploadedCorrectResource:(id)arg1;
- (void)handleError:(unsigned long long)arg1 errorMessage:(id)arg2;
- (id)getCdnClientId:(id)arg1;
- (id)saveResultToFile:(id)arg1 encryptFileKey:(id)arg2;
- (id)doEncrypt:(id)arg1 data:(id)arg2;
- (void)uploadCdnOnTimeout:(id)arg1 cdnType:(unsigned int)arg2;
- (void)onPalmEntryViewControllerTimeout:(id)arg1;
- (void)onPalmEntryViewControllerRecordTimeout:(id)arg1;
- (void)onPalmEntryViewControllerSetupFailed:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)handleTimeoutVideoUpload;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)currentAppId;
- (void)setCurrentAppId:(id)arg1;
- (id)currentCdnMediaId;
- (void)setCurrentCdnMediaId:(id)arg1;
- (BOOL)isCdnUploading;
- (void)setIsCdnUploading:(BOOL)arg1;
- (BOOL)isNeedUploadBypass;
- (void)setIsNeedUploadBypass:(BOOL)arg1;
- (BOOL)isNeedUploadCgi;
- (void)setIsNeedUploadCgi:(BOOL)arg1;
- (BOOL)isNeedPalmInfoCallback;
- (void)setIsNeedPalmInfoCallback:(BOOL)arg1;
- (unsigned int)palmCaptureMode;
- (void)setPalmCaptureMode:(unsigned int)arg1;
- (unsigned int)uploadCdnType;
- (void)setUploadCdnType:(unsigned int)arg1;
- (id)finalPalmResult;
- (void)setFinalPalmResult:(id)arg1;
- (void).cxx_destruct;
@end

