@interface WAAppTaskVersionFallBackMarkItem : NSObject
{
    unsigned int _targetAppVersion; // +0x8
    NSString * _appid; // +0x10
    NSString * _username; // +0x18
    NSString * _instanceId; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _debugModeType; // +0x30
    unsigned long long _updateStartTimeInMs; // +0x38
    unsigned long long _updatingScene; // +0x40
    NSMutableArray * _needDownloadInfoDatas; // +0x48
    NSMutableArray * _downloadSuccessInfoDatas; // +0x50
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned int)targetAppVersion;
- (void)setTargetAppVersion:(unsigned int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)debugModeType;
- (void)setDebugModeType:(unsigned long long)arg1;
- (unsigned long long)updateStartTimeInMs;
- (void)setUpdateStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)updatingScene;
- (void)setUpdatingScene:(unsigned long long)arg1;
- (id)needDownloadInfoDatas;
- (void)setNeedDownloadInfoDatas:(id)arg1;
- (id)downloadSuccessInfoDatas;
- (void)setDownloadSuccessInfoDatas:(id)arg1;
- (void).cxx_destruct;
@end

