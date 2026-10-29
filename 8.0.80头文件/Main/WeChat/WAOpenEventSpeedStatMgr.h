@interface WAOpenEventSpeedStatMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_timeStampCache; // +0x8
    unsigned long long m_beginTime; // +0x10
    NSString * m_appid; // +0x18
    NSString * m_username; // +0x20
    long long m_version; // +0x28
    unsigned long long m_appState; // +0x30
    unsigned long long m_scene; // +0x38
    NSString * m_sceneNote; // +0x40
    NSString * m_pagePath; // +0x48
    unsigned long long m_appServiceType; // +0x50
    BOOL m_isTriggerDownload; // +0x58
    BOOL m_isSyncUpdateContact; // +0x59
    BOOL m_isSyncLaunchCgi; // +0x5a
    BOOL m_isUsePreloadTask; // +0x5b
    BOOL m_isSyncJsApiInfoCgi; // +0x5c
    BOOL m_isSyncABTestInfoCgi; // +0x5d
    unsigned int m_syncUpdateReason; // +0x60
    unsigned int m_scriptDataSize; // +0x64
    unsigned int m_packageSize; // +0x68
    BOOL m_updatedContact; // +0x6c
    BOOL m_usePatch; // +0x6d
    BOOL m_finishShowLoading; // +0x6e
    unsigned long long m_loadingFinishedTimeStampInMs; // +0x70
    unsigned long long m_preloadPageFrameBeginTime; // +0x78
    unsigned long long m_preloadPageFrameJSBeginTime; // +0x80
    unsigned long long m_packageReadyTime; // +0x88
    unsigned long long m_userScriptInjectedTime; // +0x90
    unsigned long long m_initReadyTime; // +0x98
    NSString * m_instanceId; // +0xa0
    unsigned int m_isSplitPluginCode; // +0xa8
    unsigned int m_appTaskDidOpened; // +0xac
    NSMutableDictionary * m_keyEventSampleConfigs; // +0xb0
    WACanvasDataSampleMgr * canvasSampleMgr; // +0xb8
    unsigned int _sampleType; // +0xc0
    unsigned int _sampleCollectInterval; // +0xc4
    unsigned int _fpsLagWindowSize; // +0xc8
    unsigned int _fpsLagWindowDiff; // +0xcc
    unsigned int _fpsLowThreshold; // +0xd0
    WAThreadSafeMutableDictionary * _dicUsername2InstanceId; // +0xd8
    WAThreadSafeMutableDictionary * _dicAppid2InstanceId; // +0xe0
}
- (id)init;
- (void)registerOpenWeAppInfo:(id)arg1 username:(id)arg2 appVersion:(long long)arg3 appState:(unsigned long long)arg4 scene:(unsigned long long)arg5 sceneNote:(id)arg6 isPluginCode:(unsigned int)arg7 appServiceType:(unsigned long long)arg8 pagePath:(id)arg9;
- (void)markEventTriggerDownload:(id)arg1;
- (void)markEventSyncUpdateContact:(id)arg1 reason:(unsigned int)arg2;
- (void)markEventSyncLaunchCgi:(id)arg1;
- (void)markEventSyncJsApiInfoCgi:(id)arg1;
- (void)markEventSyncABTestInfoCgi:(id)arg1;
- (void)markEventOpenFromPreloadTask:(id)arg1;
- (void)markEventDealScriptSize:(unsigned int)arg1 appid:(id)arg2 preload:(BOOL)arg3;
- (void)markEventBegin:(unsigned long long)arg1;
- (unsigned long long)markEventEnd:(unsigned long long)arg1 appType:(unsigned int)arg2;
- (void)markEventDownloadPackageInfo:(id)arg1 packageSize:(unsigned int)arg2 usePatch:(BOOL)arg3;
- (void)markEventFinishShowLoading:(id)arg1;
- (void)markTaskClosedWithAppid:(id)arg1 username:(id)arg2 reason:(unsigned long long)arg3;
- (void)markTaskClosedWithAppid:(id)arg1 username:(id)arg2 reason:(unsigned long long)arg3 subReason:(unsigned int)arg4;
- (void)reportTaskClosedWith:(id)arg1 username:(id)arg2 task:(id)arg3 reason:(unsigned long long)arg4 subReason:(unsigned int)arg5;
- (void)markTaskInterfereWithAppid:(id)arg1 username:(id)arg2 action:(unsigned long long)arg3;
- (void)beginWhenWeAppInitWithUsername:(id)arg1 appid:(id)arg2 extraParams:(id)arg3 hostExtraParams:(id)arg4;
- (void)endWhenWeAppTerminateWithUsername:(id)arg1 appid:(id)arg2 instanceId:(id)arg3;
- (void)markLaunchProcessDidGetContact:(id)arg1;
- (id)getInstanceIdForUsername:(id)arg1 appid:(id)arg2;
- (void)unRegisterInstanceId:(id)arg1;
- (void)registerInstanceId:(id)arg1 forUsername:(id)arg2 appid:(id)arg3;
- (void)markUpdateContact:(BOOL)arg1;
- (unsigned long long)getLaunchTime;
- (unsigned long long)getResourcePrepareReadyTime;
- (unsigned int)getPackageSize;
- (BOOL)getUsePatch;
- (id)getReportId;
- (unsigned int)downloadPkgSize;
- (void)endWithPackageReadyForUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 isPreload:(unsigned int)arg4 isParallelRequest:(BOOL)arg5 isSkyline:(BOOL)arg6;
- (void)endWithGetUrlReadyForUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 ret:(unsigned int)arg4;
- (void)endWithUserScriptInjected;
- (void)endWithGameInteractive;
- (void)reportInitReadyWithUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 path:(id)arg4 isPreload:(unsigned int)arg5 splashADState:(unsigned int)arg6 canShowLoadingAdvert:(BOOL)arg7 isSkyline:(BOOL)arg8 useRenderingCache:(BOOL)arg9 splashAdClientState:(unsigned int)arg10;
- (void)reportInjectReadyWithUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 path:(id)arg4 isPreload:(unsigned int)arg5;
- (void)reportFirstWebViewPushReadyWithUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3;
- (void)reportPushWebViewWithUsername:(id)arg1 appid:(id)arg2;
- (unsigned long long)getBeginTime;
- (unsigned long long)getLaunchResourceBeginTime;
- (unsigned long long)getLaunchResourceEndTime;
- (unsigned long long)getPackageResourceBeginTime;
- (unsigned long long)getPackageResourceReadyTime;
- (unsigned long long)getJsApiInfoBeginTime;
- (unsigned long long)getJsApiInfoCgiReadyTime;
- (unsigned long long)getJsApiABTestPermissionBeginTime;
- (unsigned long long)getJsApiABTestPermissionEndTime;
- (void)requestWeAppExtraConfigWithAppID:(id)arg1 debugModeType:(unsigned int)arg2 appVersion:(unsigned int)arg3 scene:(unsigned int)arg4 isFromBackground:(BOOL)arg5 dicLaunchParameter:(id)arg6;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2 baseInfo:(id)arg3;
- (id)getCanvasServerSampleConfigById:(id)arg1;
- (id)getNetTypeString:(unsigned int)arg1;
- (unsigned int)sampleType;
- (void)setSampleType:(unsigned int)arg1;
- (unsigned int)sampleCollectInterval;
- (void)setSampleCollectInterval:(unsigned int)arg1;
- (unsigned int)fpsLagWindowSize;
- (void)setFpsLagWindowSize:(unsigned int)arg1;
- (unsigned int)fpsLagWindowDiff;
- (void)setFpsLagWindowDiff:(unsigned int)arg1;
- (unsigned int)fpsLowThreshold;
- (void)setFpsLowThreshold:(unsigned int)arg1;
- (id)dicUsername2InstanceId;
- (void)setDicUsername2InstanceId:(id)arg1;
- (id)dicAppid2InstanceId;
- (void)setDicAppid2InstanceId:(id)arg1;
- (void).cxx_destruct;
@end
