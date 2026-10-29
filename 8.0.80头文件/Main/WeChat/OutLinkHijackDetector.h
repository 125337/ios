@interface OutLinkHijackDetector : MMUserService <MMServiceProtocol, ICdnComMgrExt, IMsgExt>
{
    NSString * _uploadingFile; // +0x8
    NSMutableDictionary * _fileRecord; // +0x10
    BOOL _isLoadConfigFile; // +0x18
    NSMutableArray * _configList; // +0x20
    unsigned int _configFileExpireTime; // +0x28
    NSMutableDictionary * _sucReportUrl; // +0x30
    unsigned int _blockConfigFlag; // +0x38
    NSArray * _blockBlackList; // +0x40
    NSArray * _blockWhiteList; // +0x48
    BOOL _needReportOperatorsHijack; // +0x50
    NSString * _hijackUrl; // +0x58
}
- (void)tryAbTestDataMigration;
- (id)getOperationsHijackBlockWhiteList;
- (int)getAbtestOperatorsHijackBlockControlFlag;
- (id)init;
- (void)tryloadHijackConfigFile;
- (void)saveHijackConfigFile;
- (BOOL)urlHasBeenReported:(id)arg1;
- (void)markUrlHasBeenReported:(id)arg1;
- (void)startDetect:(id)arg1;
- (void)storageHtmlContent:(id)arg1;
- (id)getWebReportRootDir;
- (id)getHijackConfigFileDir;
- (void)tryUploadUnFinishFile;
- (void)reportCdnInfoToServer:(id)arg1;
- (BOOL)isOperatorsHijackBlockEnable:(id)arg1;
- (id)getOperatorsHijackBlockBlackList;
- (int)getOperatorsHijackBlockControlFlag;
- (void)reportOperatorsHijackHtmlContent:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleDectConfigMsg:(id)arg1;
- (void)handleBlockConfigMsg:(id)arg1;
- (BOOL)needReportOperatorsHijack;
- (void)setNeedReportOperatorsHijack:(BOOL)arg1;
- (id)hijackUrl;
- (void)setHijackUrl:(id)arg1;
- (void).cxx_destruct;
@end
