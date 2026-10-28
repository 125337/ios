@interface OCRTransMgr : MMUserService <ICdnComMgrExt, MMConfigMgrExt, IMMLanguageMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    NSNumber * _isBottomBarAvaliable; // +0x8
    NSNumber * _isNewOCRTransAvaliable; // +0x10
    NSMutableDictionary * _clientMsgID2ContextMap; // +0x18
    EnhanceTranslatingUtil * _util; // +0x20
    BOOL _isDetectModelWorkable; // +0x28
    MMURLHandler * _urlHandler; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)onMMDynamicConfigUpdated;
- (BOOL)isBottomBarAvaliable;
- (BOOL)isNewOCRTransAvaliable;
- (BOOL)setFromLang:(id)arg1;
- (id)getFromLang;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)onLanguageChange;
- (unsigned int)cdnUploadTransImageData:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)sendTransImageData:(id)arg1 context:(id)arg2;
- (void)handleSendTransImageData:(id)arg1;
- (id)urlHandler;
- (BOOL)enableScanTranslatingNewStyle;
- (void)checkDetectDocumentModelUpdate;
- (void)loadDetectDocumentModel;
- (void)releaseDetectDocumentModel;
- (void)detectDocumentArea:(id)arg1 cropRect:(CGRect)arg2 sessionId:(unsigned long long)arg3;
- (void)setUrlHandler:(id)arg1;
- (BOOL)isDetectModelWorkable;
- (void)setIsDetectModelWorkable:(BOOL)arg1;
- (void).cxx_destruct;
@end
