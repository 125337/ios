@interface WACacheVersionPreCheckerContextResult : NSObject
{
    BOOL _hasResult; // +0x8
    BOOL _checkSuccess; // +0x9
    long long _errCode; // +0x10
    NSString * _errMsg; // +0x18
    NSMutableArray * _needDownloadInfoDatas; // +0x20
    NSMutableArray * _downloadSuccessInfoDatas; // +0x28
    NSMutableArray * _checkPassInfoDatas; // +0x30
    NSMutableArray * _checkFailedInfoDatas; // +0x38
    NSMutableArray * _pluginInfoDatas; // +0x40
    NSMutableArray * _checkAutoUpdateInfoDatas; // +0x48
}
- (BOOL)hasResult;
- (void)setHasResult:(BOOL)arg1;
- (BOOL)checkSuccess;
- (void)setCheckSuccess:(BOOL)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)needDownloadInfoDatas;
- (void)setNeedDownloadInfoDatas:(id)arg1;
- (id)downloadSuccessInfoDatas;
- (void)setDownloadSuccessInfoDatas:(id)arg1;
- (id)checkPassInfoDatas;
- (void)setCheckPassInfoDatas:(id)arg1;
- (id)checkFailedInfoDatas;
- (void)setCheckFailedInfoDatas:(id)arg1;
- (id)pluginInfoDatas;
- (void)setPluginInfoDatas:(id)arg1;
- (id)checkAutoUpdateInfoDatas;
- (void)setCheckAutoUpdateInfoDatas:(id)arg1;
- (void).cxx_destruct;
@end

