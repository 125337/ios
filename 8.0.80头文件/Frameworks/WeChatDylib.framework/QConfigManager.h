@interface QConfigManager : NSObject
{
    BOOL _hasStartedUpdate; // +0x8
    int _unfinishedTasks; // +0xc
    id <QConfigManagerDelegate> _delegate; // +0x10
    QMediator * _mediator; // +0x18
    QStatisticer * _statistics; // +0x20
    NSString * _businessKey; // +0x28
    NSString * _configDirectoryPath; // +0x30
    NSString * _versionPlistPath; // +0x38
    NSMutableDictionary * _versionDict; // +0x40
    NSMutableDictionary * _tempVersionDict; // +0x48
    NSMutableDictionary * _indoorDict; // +0x50
}
- (id)getCurrentConfigVersions;
- (id)getCurrentIndoorConfigFilePath;
- (void)checkConfigUpdate;
- (void)checkOfflineConfigUpdateWithVersion:(id)arg1 md5:(id)arg2 callback:(id /* block */)arg3;
- (void)doCheckConfigUpdate:(const void *)arg1 checkCallback:(id /* block */)arg2;
- (void)doDownloadFile:(const void *)arg1 callback:(id /* block */)arg2;
- (BOOL)saveData:(id)arg1 fileName:(id)arg2 key:(id)arg3 userData:(id)arg4;
- (void)onUpdateDidFinish;
- (void)onUpdateDidFailWithError:(id)arg1;
- (void)onUpdateNotRequire;
- (void)statisticUpdateSucceess;
- (void)statisticUpdateFailInfo:(id)arg1;
- (void)statisticMapConfigFileExist;
- (id)apiKey;
- (id)sdkVersion;
- (id)appendParameterString;
- (FileUpdateReq)constructRequestWithName:(id)arg1 key:(id)arg2;
- (void)constructMapConfigItems:(void *)arg1 callbacks:(id)arg2;
- (void)checkStyleIDStringChange;
- (id)getMd5KeyFromVersionKey:(id)arg1;
- (BOOL)hasIndoorPrevilege;
- (id)initWithConfigPreference:(id)arg1;
- (void)setupVersionPlist;
- (void)setupVersionDict;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)statistics;
- (void)setStatistics:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (id)configDirectoryPath;
- (void)setConfigDirectoryPath:(id)arg1;
- (id)versionPlistPath;
- (void)setVersionPlistPath:(id)arg1;
- (id)versionDict;
- (void)setVersionDict:(id)arg1;
- (id)tempVersionDict;
- (void)setTempVersionDict:(id)arg1;
- (int)unfinishedTasks;
- (void)setUnfinishedTasks:(int)arg1;
- (id)indoorDict;
- (void)setIndoorDict:(id)arg1;
- (BOOL)hasStartedUpdate;
- (void)setHasStartedUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end
