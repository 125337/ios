@interface FaceRecogUploadLogic : MMObject <ICdnComMgrExt, FaceRecogBindVideoLogicDelegate, PBMessageObserverDelegate>
{
    BOOL _isRSA; // +0x8
    BOOL _uploading; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _currentResourceType; // +0x10
    id <FaceRecogUploadLogicDelegate> _delegate; // +0x18
    NSString * _appId; // +0x20
    NSString * _bioId; // +0x28
    FaceRecogReporter * _reporter; // +0x30
    NSString * _userTicket; // +0x38
    NSString * _verifyInfo; // +0x40
    NSString * _packageName; // +0x48
    NSString * _packageSign; // +0x50
    NSString * _serialId; // +0x58
    long long _extraVideoMaxSize; // +0x60
    NSString * _currentFaceResultClientId; // +0x68
    NSString * _currentFaceVideoClientId; // +0x70
    NSString * _currentFaceVideoForPayClientId; // +0x78
    NSString * _currentFaceResultPath; // +0x80
    NSString * _currentFaceVideoPath; // +0x88
    FaceRecogBindVideoLogic * _bindVideoLogic; // +0x90
}
+ (id)genResourceClientId:(id)arg1 bioId:(id)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)isUploading;
- (void)cancelUpload:(unsigned int)arg1;
- (void)onUploadStartFailed:(unsigned int)arg1;
- (BOOL)startUploadFaceResult:(id)arg1 path:(id)arg2;
- (BOOL)startUploadFaceVideo:(id)arg1;
- (BOOL)startUploadFaceVideo:(id)arg1 forSpam:(BOOL)arg2;
- (BOOL)isUploadedCorrectResource:(id)arg1;
- (void)safeRenameDeleteFile:(id)arg1;
- (void)setCurrentFaceVideoPath:(id)arg1;
- (void)setCurrentFaceResultPath:(id)arg1;
- (void)bindVideoOperationDone:(int)arg1 logic:(id)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)onUploadOperationFinish:(id)arg1;
- (void)getFaceFlashData:(id)arg1 inWorkMode:(long long)arg2;
- (void)startUploadFaceVideoForPay:(id)arg1;
- (void)handleFaceFlashVideoForPayCDNUploadWithFilePath:(id)arg1 bioId:(id)arg2;
- (void)handleFaceFlashVideoForPayCGIRequestWithFileId:(id)arg1 aesKey:(id)arg2 serialId:(id)arg3;
- (void)onGetRecordExtraVideoResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)bioId;
- (void)setBioId:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)isRSA;
- (void)setIsRSA:(BOOL)arg1;
- (id)userTicket;
- (void)setUserTicket:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)packageName;
- (void)setPackageName:(id)arg1;
- (id)packageSign;
- (void)setPackageSign:(id)arg1;
- (id)serialId;
- (void)setSerialId:(id)arg1;
- (long long)extraVideoMaxSize;
- (void)setExtraVideoMaxSize:(long long)arg1;
- (id)currentFaceResultClientId;
- (void)setCurrentFaceResultClientId:(id)arg1;
- (id)currentFaceVideoClientId;
- (void)setCurrentFaceVideoClientId:(id)arg1;
- (id)currentFaceVideoForPayClientId;
- (void)setCurrentFaceVideoForPayClientId:(id)arg1;
- (id)currentFaceResultPath;
- (id)currentFaceVideoPath;
- (unsigned int)currentResourceType;
- (void)setCurrentResourceType:(unsigned int)arg1;
- (BOOL)uploading;
- (void)setUploading:(BOOL)arg1;
- (id)bindVideoLogic;
- (void)setBindVideoLogic:(id)arg1;
- (void).cxx_destruct;
@end
