@interface FavPostReportInfo : NSObject
{
    BOOL _svrRepairReupload; // +0x8
    unsigned int _checkResCount; // +0xc
    unsigned int _checkResSuccessTotalCnt; // +0x10
    unsigned int _checkResFailTotalCnt; // +0x14
    unsigned int _checkResSvrUploadedCnt; // +0x18
    unsigned int _checkResSvrUploadingCnt; // +0x1c
    unsigned int _checkResSvrNotExistCnt; // +0x20
    unsigned int _checkResCgiFailCnt; // +0x24
    int _downloadFailType; // +0x28
    unsigned int _clientUploadResSuccessCount; // +0x2c
    unsigned int _clientUploadResFailCount; // +0x30
    unsigned int _autoRetryCnt; // +0x34
    int _autoRetryErrType; // +0x38
    int _autoRetryErrCode; // +0x3c
    int _stage; // +0x40
    int _postType; // +0x44
    int _cgiRawErrCode; // +0x48
    NSString * _downloadFailDataId; // +0x50
    NSString * _downloadFailDataJson; // +0x58
    NSString * _downloadFailThumbJson; // +0x60
    NSString * _clientUploadResFailItemJson; // +0x68
    NSString * _errExtraMsg; // +0x70
}
- (id)init;
- (unsigned int)checkResCount;
- (void)setCheckResCount:(unsigned int)arg1;
- (unsigned int)checkResSuccessTotalCnt;
- (void)setCheckResSuccessTotalCnt:(unsigned int)arg1;
- (unsigned int)checkResFailTotalCnt;
- (void)setCheckResFailTotalCnt:(unsigned int)arg1;
- (unsigned int)checkResSvrUploadedCnt;
- (void)setCheckResSvrUploadedCnt:(unsigned int)arg1;
- (unsigned int)checkResSvrUploadingCnt;
- (void)setCheckResSvrUploadingCnt:(unsigned int)arg1;
- (unsigned int)checkResSvrNotExistCnt;
- (void)setCheckResSvrNotExistCnt:(unsigned int)arg1;
- (unsigned int)checkResCgiFailCnt;
- (void)setCheckResCgiFailCnt:(unsigned int)arg1;
- (id)downloadFailDataId;
- (void)setDownloadFailDataId:(id)arg1;
- (int)downloadFailType;
- (void)setDownloadFailType:(int)arg1;
- (id)downloadFailDataJson;
- (void)setDownloadFailDataJson:(id)arg1;
- (id)downloadFailThumbJson;
- (void)setDownloadFailThumbJson:(id)arg1;
- (unsigned int)clientUploadResSuccessCount;
- (void)setClientUploadResSuccessCount:(unsigned int)arg1;
- (unsigned int)clientUploadResFailCount;
- (void)setClientUploadResFailCount:(unsigned int)arg1;
- (id)clientUploadResFailItemJson;
- (void)setClientUploadResFailItemJson:(id)arg1;
- (unsigned int)autoRetryCnt;
- (void)setAutoRetryCnt:(unsigned int)arg1;
- (int)autoRetryErrType;
- (void)setAutoRetryErrType:(int)arg1;
- (int)autoRetryErrCode;
- (void)setAutoRetryErrCode:(int)arg1;
- (int)stage;
- (void)setStage:(int)arg1;
- (int)postType;
- (void)setPostType:(int)arg1;
- (int)cgiRawErrCode;
- (void)setCgiRawErrCode:(int)arg1;
- (id)errExtraMsg;
- (void)setErrExtraMsg:(id)arg1;
- (BOOL)svrRepairReupload;
- (void)setSvrRepairReupload:(BOOL)arg1;
- (void).cxx_destruct;
@end
