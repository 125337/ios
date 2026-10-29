@interface WACacheVersionCheckerContext : NSObject
{
    BOOL _preChecked; // +0x8
    BOOL _inColdLaunch; // +0x9
    BOOL _isSilentOpen; // +0xa
    BOOL _remoteMode; // +0xb
    unsigned int _syncType; // +0xc
    unsigned int _silentOpenType; // +0x10
    WAPackageConfig * _packageConfig; // +0x18
    NSString * _relativeURL; // +0x20
    NSMutableArray * _needDownloadInfoDatas; // +0x28
    NSArray * _entryPackages; // +0x30
    unsigned long long _checkScene; // +0x38
    unsigned long long _openScene; // +0x40
    NSString * _sceneNote; // +0x48
    NSString * _sessionId; // +0x50
}
- (id)packageConfig;
- (void)setPackageConfig:(id)arg1;
- (id)relativeURL;
- (void)setRelativeURL:(id)arg1;
- (BOOL)preChecked;
- (void)setPreChecked:(BOOL)arg1;
- (id)needDownloadInfoDatas;
- (void)setNeedDownloadInfoDatas:(id)arg1;
- (BOOL)inColdLaunch;
- (void)setInColdLaunch:(BOOL)arg1;
- (unsigned int)syncType;
- (void)setSyncType:(unsigned int)arg1;
- (id)entryPackages;
- (void)setEntryPackages:(id)arg1;
- (unsigned long long)checkScene;
- (void)setCheckScene:(unsigned long long)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (BOOL)isSilentOpen;
- (void)setIsSilentOpen:(BOOL)arg1;
- (unsigned int)silentOpenType;
- (void)setSilentOpenType:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)remoteMode;
- (void)setRemoteMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

