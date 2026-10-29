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
    PalmTotalInfo * _finalPalmResult; // +0x60
    PalmMd5Info * _palmMd5Info; // +0x68
    NSString * _uploadVideoPath; // +0x70
    NSData * _randomSm4Key; // +0x78
    unsigned long long _cdnUploadStartTime; // +0x80
    unsigned long long _cdnUploadFileSize; // +0x88
    unsigned long long _openPalmServiceAuthCgiStartTime; // +0x90
    unsigned long long _checkPalmResourceCgiStartTime; // +0x98
    unsigned long long _uploadOnlinePalmResourceCgiStartTime; // +0xa0
    NSObject<OS_dispatch_semaphore> * _onCdnUploadSemaphore; // +0xa8
    NSObject<OS_dispatch_semaphore> * _uploadOnlinePalmResourceCgiOkSemaphore; // +0xb0
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)cleanTmpFileWithKey:(id)arg1;
- (void)removeLastSavedTmpFiles;
- (void)startLogic;
- (int)getModelVersion:(id)arg1;
- (BOOL)rewriteWePalmResource;
- (id)getPalmSdkFullVersion;
- (void)startCheckPalmServiceAuth;
- (void)onOpenPalmServiceAuthCgiOK:(int)arg1 body:(id)arg2 errorMessage:(id)arg3;
- (void)onPalmEntryViewControllerBack:(id)arg1;
- (id)wrapJSApiResult:(unsigned long long)arg1 errorMessage:(id)arg2;
- (id)savedTmpFilesWithData:(id)arg1 key:(id)arg2;
- (BOOL)saveTmpPalmImage:(id)arg1 record:(id)arg2;
- (BOOL)saveTmpPalmLivenessImage:(id)arg1 record:(id)arg2;
- (BOOL)saveTmpPalmVideo:(id)arg1 record:(id)arg2;
- (BOOL)saveTmpPalmStatsInfo:(id)arg1 record:(id)arg2;
- (id)wrapPalmInfoForCallback:(id)arg1;
- (void)onPalmEntryViewControllerGetFinalResult:(id)arg1 uploadVideoPath:(id)arg2;
- (void)uploadResultToCdn:(id)arg1 sessionId:(id)arg2;
- (void)uploadResultToCdnAsync:(id)arg1 sessionId:(id)arg2;
- (void)doUploadResultToCdnAsync:(id)arg1 sessionId:(id)arg2;
- (unsigned long long)encryptDataToFile:(id)arg1 sessionId:(id)arg2 outPath:(id *)arg3;
- (BOOL)startUploadCdnWithFilePath:(id)arg1;
- (void)processCdnUploadFail;
- (void)OnCdnUpload:(id)arg1;
- (void)doUploadBypassResultAsync:(id)arg1;
- (void)doUploadBypassResult:(id)arg1;
- (void)onUploadOnlinePalmResourceCgiOK:(int)arg1 errorMessage:(id)arg2;
- (void)handleTimeOutError:(unsigned int)arg1;
- (void)doCheckPalmResult:(id)arg1;
- (id)getPalmReportInfo;
- (void)onCheckPalmUserResouceCgiOK:(int)arg1 errorMessage:(id)arg2;
- (id)doSm2EncryptAndBase64:(id)arg1;
- (BOOL)isUploadedCorrectResource:(id)arg1;
- (void)handleError:(unsigned long long)arg1 errorMessage:(id)arg2;
- (id)getCdnClientId:(id)arg1;
- (id)saveResultToFile:(id)arg1 sessionId:(id)arg2;
- (id)doEncrypt:(id)arg1;
- (void)uploadCdnOnTimeout:(id)arg1 cdnType:(unsigned int)arg2;
- (void)onPalmEntryViewControllerTimeout:(id)arg1 uploadVideoPath:(id)arg2;
- (void)onPalmEntryViewControllerRecordTimeout:(id)arg1 uploadVideoPath:(id)arg2;
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
- (id)palmMd5Info;
- (void)setPalmMd5Info:(id)arg1;
- (id)uploadVideoPath;
- (void)setUploadVideoPath:(id)arg1;
- (id)randomSm4Key;
- (void)setRandomSm4Key:(id)arg1;
- (unsigned long long)cdnUploadStartTime;
- (void)setCdnUploadStartTime:(unsigned long long)arg1;
- (unsigned long long)cdnUploadFileSize;
- (void)setCdnUploadFileSize:(unsigned long long)arg1;
- (unsigned long long)openPalmServiceAuthCgiStartTime;
- (void)setOpenPalmServiceAuthCgiStartTime:(unsigned long long)arg1;
- (unsigned long long)checkPalmResourceCgiStartTime;
- (void)setCheckPalmResourceCgiStartTime:(unsigned long long)arg1;
- (unsigned long long)uploadOnlinePalmResourceCgiStartTime;
- (void)setUploadOnlinePalmResourceCgiStartTime:(unsigned long long)arg1;
- (id)onCdnUploadSemaphore;
- (void)setOnCdnUploadSemaphore:(id)arg1;
- (id)uploadOnlinePalmResourceCgiOkSemaphore;
- (void)setUploadOnlinePalmResourceCgiOkSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
