@interface WAAppTaskLifeCycleRecord : MMObject <PBCoding, NSCopying>
{
    BOOL _bytecodeEnabled; // +0x8
    BOOL _hasSkylineRuntime; // +0x9
    unsigned int _appVersion; // +0xc
    unsigned int _uiPublibVersion; // +0x10
    unsigned int _pageCount; // +0x14
    unsigned int _engineType; // +0x18
    unsigned int _gameRenderMode; // +0x1c
    unsigned int _totalHotLaunchCount; // +0x20
    unsigned int _allJSVMFootprintMemoryInMB; // +0x24
    unsigned int _mainContextJSVMFootprintMemoryInMB; // +0x28
    unsigned int _skylineViewCnt; // +0x2c
    unsigned int _differentSkylineViewCnt; // +0x30
    NSString * _instanceId; // +0x38
    NSString * _appid; // +0x40
    NSString * _username; // +0x48
    NSString * _nickname; // +0x50
    unsigned long long _appServiceType; // +0x58
    unsigned long long _currentScene; // +0x60
    NSString * _currentSceneNote; // +0x68
    NSString * _strPublibVersion; // +0x70
    NSString * _networkType; // +0x78
    NSMutableArray * _pageRecords; // +0x80
    NSMutableArray * _coldLaunchNeedDownloadModules; // +0x88
    NSString * _lastServiceJsError; // +0x90
    NSString * _serviceRuntimeContext; // +0x98
    unsigned long long _debugType; // +0xa0
    unsigned long long _launchTimeStampInMs; // +0xa8
    unsigned long long _currentRunningState; // +0xb0
    unsigned long long _currentRunningStateStartTimeStampInMs; // +0xb8
    unsigned long long _totalLifeTimeInMs; // +0xc0
    unsigned long long _totalForegroundTimeInMs; // +0xc8
    unsigned long long _totalBackgroundTimeInMs; // +0xd0
    unsigned long long _totalSuspendTimeInMs; // +0xd8
}
+ (void)PBArrayAdd_instanceId;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appServiceType;
+ (void)PBArrayAdd_currentScene;
+ (void)PBArrayAdd_currentSceneNote;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_strPublibVersion;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_pageRecords;
+ (void)PBArrayAdd_lastServiceJsError;
+ (void)PBArrayAdd_serviceRuntimeContext;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_engineType;
+ (void)PBArrayAdd_bytecodeEnabled;
+ (void)PBArrayAdd_debugType;
+ (void)PBArrayAdd_uiPublibVersion;
+ (void)PBArrayAdd_gameRenderMode;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)onTaskDieForReason:(unsigned long long)arg1 lifeCyclePerformanceIndexes:(id)arg2;
- (id)getLastNPagePath;
- (id)getJSErrorForLastPage;
- (id)getPagePathForLastPage;
- (id)getJSErrorForPage:(id)arg1;
- (void)onTaskEnterForeground;
- (void)onTaskEnterBackground;
- (void)onTaskEnterSuspend;
- (void)onTaskHotLaunch;
- (void)calCurrentRunnningStateStayTime;
- (void)onTaskEncounterQualityIssue:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (unsigned long long)appServiceType;
- (void)setAppServiceType:(unsigned long long)arg1;
- (unsigned long long)currentScene;
- (void)setCurrentScene:(unsigned long long)arg1;
- (id)currentSceneNote;
- (void)setCurrentSceneNote:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)strPublibVersion;
- (void)setStrPublibVersion:(id)arg1;
- (unsigned int)uiPublibVersion;
- (void)setUiPublibVersion:(unsigned int)arg1;
- (id)networkType;
- (void)setNetworkType:(id)arg1;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg1;
- (id)pageRecords;
- (void)setPageRecords:(id)arg1;
- (id)coldLaunchNeedDownloadModules;
- (void)setColdLaunchNeedDownloadModules:(id)arg1;
- (id)lastServiceJsError;
- (void)setLastServiceJsError:(id)arg1;
- (id)serviceRuntimeContext;
- (void)setServiceRuntimeContext:(id)arg1;
- (unsigned long long)debugType;
- (void)setDebugType:(unsigned long long)arg1;
- (unsigned long long)launchTimeStampInMs;
- (void)setLaunchTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)currentRunningState;
- (void)setCurrentRunningState:(unsigned long long)arg1;
- (unsigned long long)currentRunningStateStartTimeStampInMs;
- (void)setCurrentRunningStateStartTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)engineType;
- (void)setEngineType:(unsigned int)arg1;
- (BOOL)bytecodeEnabled;
- (void)setBytecodeEnabled:(BOOL)arg1;
- (unsigned int)gameRenderMode;
- (void)setGameRenderMode:(unsigned int)arg1;
- (unsigned long long)totalLifeTimeInMs;
- (void)setTotalLifeTimeInMs:(unsigned long long)arg1;
- (unsigned long long)totalForegroundTimeInMs;
- (void)setTotalForegroundTimeInMs:(unsigned long long)arg1;
- (unsigned long long)totalBackgroundTimeInMs;
- (void)setTotalBackgroundTimeInMs:(unsigned long long)arg1;
- (unsigned long long)totalSuspendTimeInMs;
- (void)setTotalSuspendTimeInMs:(unsigned long long)arg1;
- (unsigned int)totalHotLaunchCount;
- (void)setTotalHotLaunchCount:(unsigned int)arg1;
- (unsigned int)allJSVMFootprintMemoryInMB;
- (void)setAllJSVMFootprintMemoryInMB:(unsigned int)arg1;
- (unsigned int)mainContextJSVMFootprintMemoryInMB;
- (void)setMainContextJSVMFootprintMemoryInMB:(unsigned int)arg1;
- (BOOL)hasSkylineRuntime;
- (void)setHasSkylineRuntime:(BOOL)arg1;
- (unsigned int)skylineViewCnt;
- (void)setSkylineViewCnt:(unsigned int)arg1;
- (unsigned int)differentSkylineViewCnt;
- (void)setDifferentSkylineViewCnt:(unsigned int)arg1;
- (void).cxx_destruct;
@end
