@interface WAConfigMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2ConfigJSON; // +0x8
    NSMutableDictionary * _dicAppID2ConfigDarkJSON; // +0x10
    NSMutableDictionary * _dicAppID2ContactAttribute; // +0x18
    NSMutableDictionary * _dicAppID2CertDic; // +0x20
    NSMutableDictionary * _dicAppIDDebugType2PackageConfig; // +0x28
    NSMutableDictionary * _dicAppID2GameExtraInfo; // +0x30
    NSMutableDictionary * _dicAppIDOrUsername2PreHotPermission; // +0x38
    WAAppBrandNotifyStorage * m_notifyStorage; // +0x40
    WAAppBrandPluginNotifyStorage * m_pluginNotifyStorage; // +0x48
    WAEnableCopyPathMenuNotifyStorage * m_enableCopyPathMenuNotifyStorage; // +0x50
    NSMutableDictionary * dicEntryPagePathInfo; // +0x58
    NSMutableDictionary * dicUseVConsoleApp; // +0x60
    NSMutableDictionary * _userWeAppMonitor; // +0x68
    NSMutableDictionary * _dicGameMode; // +0x70
    BOOL _useCommandBuffer; // +0x78
    BOOL _useWCWSS; // +0x79
    BOOL _useCronetRequest; // +0x7a
    BOOL _useCronetDownload; // +0x7b
    BOOL _useCronetUpload; // +0x7c
    BOOL _useWxAudio; // +0x7d
    long long _weakNetNotify; // +0x80
    long long _useCommandBufferScene; // +0x88
    BOOL _shouldSupportAutoTest; // +0x90
    BOOL _mpShortLinkGlobalHighLightEnabled; // +0x91
    NSRecursiveLock * _notifyInfolock; // +0x98
    NSRecursiveLock * _pluginNotifyInfolock; // +0xa0
    NSRecursiveLock * _entryPagePathlock; // +0xa8
    id /* block */ _getDebugInfoCompleteBlock; // +0xb0
    MemoryMappedKV * _useVConsoleAppKv; // +0xb8
    MemoryMappedKV * _gameModeKv; // +0xc0
    MemoryMappedKV * _mbUserEnvVersionKv; // +0xc8
    BOOL _forceReportGamePerf; // +0xd0
    BOOL _overrideEntryPagePath; // +0xd1
    BOOL _preloadGamePowerSavingModeEnableCached; // +0xd2
    BOOL _preloadGamePowerSavingModeEnableValue; // +0xd3
    NSDictionary * _dicSystemConfig; // +0xd8
    WAPackageSweeperLogic * _pkgSweeperLogic; // +0xe0
    NSMutableDictionary * _tagsInfo; // +0xe8
    NSArray * _ignoreFreqIdKeyProtocolArray; // +0xf0
    NSArray * _ignoreFreqKeyValueProtocolArray; // +0xf8
    NSString * _mmUserAgent; // +0x100
    NSMutableDictionary * _cacheChannelMsgs; // +0x108
    NSMutableDictionary * _dicFrameCaptureMode; // +0x110
    MemoryMappedKV * _frameCaptureModeKv; // +0x118
}
+ (BOOL)isIdKeyIDInUdrWhiteList:(id)arg1;
+ (BOOL)isKeyValueIDInUdrWhiteList:(id)arg1;
+ (BOOL)isOverSeaUser;
+ (int)benchMarkLevel;
+ (BOOL)isDeviceSupportWeApp;
+ (BOOL)shouldEnableForwardScreenshotWithContext;
+ (BOOL)isOpenImageSearchEntry;
+ (BOOL)isOpenWeGameSplitPlugin;
+ (BOOL)isOpenWeGameMultiSplitPlugin;
+ (BOOL)isCloseWeGameMultiSplitPlugin;
+ (BOOL)isOpenIsolatePluginCheck;
+ (BOOL)isOpenABTestCheck:(BOOL)arg1;
+ (BOOL)isOpenWeAppSplitPlugin;
+ (BOOL)isOpenWeAppJSMemoryStat;
+ (BOOL)isOpenWeAppForceKillMemoryCheck;
+ (unsigned int)weappMemoryAbNormalLimitTotalLifeCycleIncreament;
+ (unsigned int)weappMemoryAbNormalLimitSingleForegroundIncreament;
+ (BOOL)isOpenWeAppHtmlSuffixProtect;
+ (unsigned int)weappCgiShortLinkRetryCount;
+ (BOOL)isDirectInvokeJs;
+ (BOOL)isDirectInvokeOc;
+ (BOOL)useWeappNewSearchBar;
+ (id)extensionIMsgExtRegisterKeyList;
+ (BOOL)isEnableMBADTest;
+ (id)rewardADMBExptInfoTest;
+ (BOOL)isEnableMBADOnline;
+ (id)rewardADMBExptInfoOnline;
+ (BOOL)isSettingStorageClearShouldUseContactRecordTime;
+ (BOOL)hitPlayableListWithAppID:(id)arg1;
+ (void)clearGamePowerSavingMode:(id)arg1;
+ (unsigned int)getWeappAILaunchMode;
+ (BOOL)getWeappAICanOperateInAgentMode;
- (void)appConfigJSONCategoryOnServiceInit;
- (void)appConfigJSONCategoryOnServiceClearData;
- (void)loadAppConfigWithAppID:(id)arg1 data:(id)arg2;
- (void)loadPluginConfigWithHostAppID:(id)arg1 pluginAppID:(id)arg2 data:(id)arg3;
- (id)appConfigDicForAppID:(id)arg1;
- (id)pageWindowAttributesForAppID:(id)arg1 page:(id)arg2;
- (id)singlePageModeAttributesForAppID:(id)arg1 page:(id)arg2;
- (BOOL)customOpenPage:(id)arg1 page:(id)arg2;
- (id)pageWindowAttributesForAppID:(id)arg1;
- (id)singlePageModeAttributesForAppID:(id)arg1;
- (BOOL)isTabPageWithPagePath:(id)arg1 appID:(id)arg2;
- (id)tabAttributesForAppID:(id)arg1;
- (id)entryPagePathForAppID:(id)arg1;
- (BOOL)isValidPath:(id)arg1 withAppID:(id)arg2;
- (id)dynamicEntryPagePathForAppID:(id)arg1;
- (BOOL)isEntryPagePathOverrided:(id)arg1;
- (id)networkTimeoutAttributeForAppID:(id)arg1;
- (BOOL)manualHideSplashForAppID:(id)arg1;
- (id)preloadResourcesAttributesForAppID:(id)arg1;
- (id)preloadSubPackagesAttributesForAppID:(id)arg1;
- (id)appConfigJsonDicForAppID:(id)arg1 pruneWxConfigByPage:(BOOL)arg2 isForWebView:(BOOL)arg3;
- (id)appConfigJsonTextForAppID:(id)arg1 pruneWxConfigByPage:(BOOL)arg2 isForWebView:(BOOL)arg3;
- (void)trimSubPackagesChildNodePages:(id)arg1;
- (void)trimSubPackage:(id)arg1 byKeyName:(id)arg2;
- (void)trimTabbar:(id)arg1;
- (void)trimPage:(id)arg1;
- (void)trimPreloadRule:(id)arg1;
- (void)trimPermission:(id)arg1;
- (void)trimPages:(id)arg1;
- (void)makeNativeConfig:(id)arg1;
- (id)getGlobalConfig:(id)arg1 appId:(id)arg2;
- (BOOL)useSkylineForAppId:(id)arg1;
- (BOOL)useSkylineDefaultForAppId:(id)arg1;
- (BOOL)useSkylineForAppId:(id)arg1 path:(id)arg2;
- (BOOL)findOpConfigInPackageForAppId:(id)arg1 publicLibVersion:(id)arg2;
- (id)getSplashCacheInfoForAppId:(id)arg1 path:(id)arg2;
- (long long)getOpConfigInPackageForAppId:(id)arg1 path:(id)arg2 publicLibVersion:(id)arg3;
- (long long)getSkylineMiniMemForAppId:(id)arg1 path:(id)arg2;
- (id)getSkylineOptionsForAppId:(id)arg1 path:(id)arg2;
- (unsigned int)getRequiredPrivateInfosBitsetForAppID:(id)arg1;
- (id)pageAttributesForAppID:(id)arg1 path:(id)arg2;
- (id)preloadRuleAttributesForAppID:(id)arg1 path:(id)arg2;
- (void)setAppConfigJSON:(id)arg1 forAppID:(id)arg2;
- (void)appendAppConfigJSON:(id)arg1 key:(id)arg2 forAppID:(id)arg3;
- (BOOL)hasKeyForAppID:(id)arg1 andPath:(id)arg2;
- (id)stringForAppID:(id)arg1 andPaths:(id)arg2;
- (BOOL)boolForAppID:(id)arg1 andPath:(id)arg2;
- (id)dictionaryForAppID:(id)arg1 andPaths:(id)arg2;
- (id)arrayForAppID:(id)arg1 andPaths:(id)arg2;
- (id)objectForAppID:(id)arg1 andPaths:(id)arg2;
- (id)replaceNormalAttrWithSinglePageAttr:(id)arg1;
- (void)replaceOrDeleteObjectInOldDictionary:(id)arg1 withObjectInNewDictionary:(id)arg2 key:(id)arg3 defaultValue:(id)arg4;
- (void)gameIconUdrCategoryOnServiceInit;
- (void)systemSettingCategoryOnServiceInit;
- (void)systemSettingCategoryOnServiceClearData;
- (id)systemSetting;
- (void)loadSystemSettingData;
- (void)updateSystemSettingData:(id)arg1;
- (void)onInitWXARelievedBuyTags:(id)arg1;
- (void)onInitWXAFlagshipTags:(id)arg1;
- (void)onInitWXAFinancialLicenseTags:(id)arg1;
- (void)updateStorageMinMB:(unsigned int)arg1;
- (void)networkCertificateCategoryOnServiceInit;
- (void)networkCertificateCategoryOnServiceClearData;
- (void)loadCertificateDataListFromData:(id)arg1 withAppID:(id)arg2 appVersion:(unsigned int)arg3;
- (void)setCertificateDataList:(id)arg1 withAppID:(id)arg2 appVersion:(unsigned int)arg3;
- (id)getCertificateDataListWithAppID:(id)arg1 appVersion:(unsigned int)arg2;
- (void)packageConfigCategoryOnServiceInit;
- (void)packageConfigCategoryOnServiceClearData;
- (id)getPackageConfigWithContact:(id)arg1 debugModeType:(unsigned int)arg2 getError:(id *)arg3;
- (void)clearPackageConfigForAppid:(id)arg1;
- (id)genKeyForAppID:(id)arg1 appVersion:(unsigned long long)arg2 debugModeType:(unsigned int)arg3;
- (void)gameExtraInfoCategoryOnServiceInit;
- (void)gameExtraInfoCategoryOnServiceClearData;
- (id)getGameExtraInfoWithAppID:(id)arg1;
- (id)contactAttributeWithAppID:(id)arg1;
- (void)setContactAttributeWithAppID:(id)arg1 appBrandInfo:(id)arg2;
- (void)contactAttributeCategoryOnServiceInit;
- (void)contactAttributeCategoryOnServiceClearData;
- (void)reportIgnoreFrequencyUdrCategoryOnServiceInit;
- (void)appConfigDarkJSONCategoryOnServiceInit;
- (void)appConfigDarkJSONCategoryOnServiceClearData;
- (BOOL)isDarkmodeConfigAvailableForAppID:(id)arg1;
- (void)loadAppConfigDarkWithAppID:(id)arg1 data:(id)arg2;
- (void)loadPluginConfigDarkWithHostAppID:(id)arg1 pluginAppID:(id)arg2 data:(id)arg3;
- (id)pageWindowDarkAttributesForAppID:(id)arg1 page:(id)arg2;
- (id)pageWindowDarkAttributesForAppID:(id)arg1;
- (id)tabDarkAttributesForAppID:(id)arg1;
- (id)getGlobalConfigDark:(id)arg1 appId:(id)arg2;
- (id)pageDarkAttributesForAppID:(id)arg1 path:(id)arg2;
- (void)setAppConfigDarkJSON:(id)arg1 forAppID:(id)arg2;
- (void)appendAppConfigDarkJSON:(id)arg1 key:(id)arg2 forAppID:(id)arg3;
- (BOOL)darkHasKeyForAppID:(id)arg1 andPath:(id)arg2;
- (id)darkStringForAppID:(id)arg1 andPaths:(id)arg2;
- (BOOL)darkBoolForAppID:(id)arg1 andPath:(id)arg2;
- (id)darkDictionaryForAppID:(id)arg1 andPaths:(id)arg2;
- (id)darkArrayForAppID:(id)arg1 andPaths:(id)arg2;
- (id)darkObjectForAppID:(id)arg1 andPaths:(id)arg2;
- (void)requestSilentOpenPermissionForAppid:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (unsigned long long)tryGetPreHotCheckResultWithAppid:(id)arg1 username:(id)arg2;
- (void)handleCheckPrehot:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (BOOL)isOpenFindFriendEntry;
- (BOOL)isScanWeappCacheByUsedOverTimeEnable;
- (unsigned int)scanWeappCacheByUsedOverTimeForDays;
- (BOOL)isSweepWeappCacheByUsedOverTimeEnable;
- (unsigned int)sweepWeappCacheByUsedOverTimeForDays;
- (BOOL)weappAutoCleanerEnable;
- (unsigned int)weappAutoCleanerExpiredDay;
- (BOOL)isWeappSweepUnusedExpiredPredownloadPkgEnable;
- (BOOL)isWeappSweepPluginCodeByUsedOverExpiredEnable;
- (unsigned int)weappSweepPluginCodeByUsedOverExpiredDays;
- (BOOL)isMagicWeAppResourcePreloadEnabled;
- (BOOL)isWeappAskXiaoweiUseGen2;
- (BOOL)isWeappSweepOrphanAppTaskDBFilesEnable;
- (BOOL)gameAutoCleanerEnable;
- (unsigned int)gameAutoCleanerExpiredDay;
- (unsigned int)fallbackReleasePkgExpiredDays;
- (unsigned int)fallbackLRUProtectDays;
- (unsigned int)fallbackVideoCacheProtectDays;
- (BOOL)fallbackSweepExpiredReleasePkgEnable;
- (BOOL)fallbackSweepExpiredReleasePkgByUsageDBEnable;
- (BOOL)fallbackSweepExpiredVideoCacheEnable;
- (BOOL)fallbackSweepLRUEnable;
- (id)getCdnBaseUrlStrIsDebugMode:(unsigned long long)arg1;
- (id)getCdnBaseUrlStrWithAppContact:(id)arg1;
- (id)getAppWebPageFullUrlWithAppid:(id)arg1 version:(unsigned long long)arg2 relativePath:(id)arg3 isDebugMode:(unsigned long long)arg4;
- (void)updateMMUserAgent;
- (id)getMMUserAgent;
- (BOOL)pageIsUseVConsoleForAppID:(id)arg1;
- (BOOL)openUseVConsoleWithAppID:(id)arg1;
- (BOOL)closeUseVConsoleWithAppID:(id)arg1;
- (unsigned int)getMbUserEnvVersion;
- (BOOL)setMbUserEnvVersion:(unsigned int)arg1;
- (long long)appRenderType:(id)arg1;
- (void)setRenderType:(long long)arg1 forAppId:(id)arg2;
- (void)setEntryPagePath:(id)arg1 forAppId:(id)arg2;
- (id)entryPagePath:(id)arg1;
- (void)clearEntryPagePath:(id)arg1;
- (id)entryPagePathInfoForAppID:(id)arg1;
- (id)loadEntryPagePathInfoForAppID:(id)arg1;
- (BOOL)saveEntryPagePathInfo:(id)arg1 forAppID:(id)arg2;
- (void)enableWeAppMonitor:(id)arg1 enable:(BOOL)arg2;
- (BOOL)isEnableWeAppMonitor:(id)arg1;
- (id)getPublicResDebugModeAppInfo;
- (id)getDeubgModeAppInfoByName:(id)arg1 debugType:(unsigned long long)arg2;
- (id)getAllDebugModeAppInfoForceSave:(BOOL)arg1;
- (id)getAllDebugModeAppInfo;
- (BOOL)isDebugModeAlreadyUpdatePkgWithAppid:(id)arg1 debugType:(unsigned long long)arg2 packageType:(unsigned long long)arg3 moduleName:(id)arg4;
- (void)setDebugModeDownloadPkgCompleteWithAppid:(id)arg1 debugType:(unsigned long long)arg2 packageType:(unsigned long long)arg3 moduleName:(id)arg4 checkSum:(id)arg5 downloadUrl:(id)arg6 value:(BOOL)arg7;
- (void)clearDebugModeDownloadStateWithAppid:(id)arg1;
- (void)loadNotifyStorage;
- (void)saveNotifyStorage:(id)arg1;
- (void)saveDebugModePluginAppInfo:(id)arg1;
- (void)insertDebugModePluginAppInfo:(id)arg1;
- (id)getSavePluginInfoKeyWithAppid:(id)arg1 versionDesc:(id)arg2;
- (id)getDeubgModePluginAppInfoByAppid:(id)arg1 versionDesc:(id)arg2;
- (id)getAllDebugModePluginInfoDic;
- (id)getAllDebugModePluginInfo;
- (BOOL)isDebugModeAlreadyUpdatePluginPkgWithAppid:(id)arg1 versionDesc:(id)arg2;
- (void)setDebugModeDownloadPluginPkgCompleteWithAppid:(id)arg1 versionDesc:(id)arg2 value:(BOOL)arg3;
- (BOOL)deleteDebugModePluginAppInfo:(id)arg1 versionDesc:(id)arg2;
- (void)loadPluginNotifyStorage;
- (BOOL)savePluginNotifyStorage:(id)arg1;
- (void)loadMPShortLinkGlobalHighLightSwitch;
- (void)loadEnableCopyPathMenuNotifyStorage;
- (void)saveEnableCopyPathMenuNotifyStorage:(id)arg1;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgContent:(id)arg3 msgSendTime:(unsigned long long)arg4;
- (void)parsePCWxaJsapiNotify:(id)arg1;
- (void)parsePCWxaLaunchNotify:(id)arg1;
- (void)parseWeAppSyncCommand:(id)arg1;
- (void)parseDebugAppCodeUpdated:(id)arg1;
- (void)parsePushComand:(id)arg1;
- (id)parseCopyPathMenuInfoList:(XmlReaderNode_t *)arg1;
- (void)parseUpdateWxaUsageListNotify:(id)arg1;
- (void)handleUpdateWxaListNotify:(id)arg1;
- (BOOL)useSimulatedNativeProfile;
- (BOOL)parallelDownloadSubPackage;
- (BOOL)useNewPopWhenSwitchTab;
- (BOOL)openEvaluate;
- (BOOL)isWeAppGenCodeCacheBeforeUpdateManager;
- (BOOL)showToastWhenPasteFor16;
- (double)durationInShowToastWhenPasteFor16;
- (BOOL)usePkgEncrypt:(BOOL)arg1 appId:(id)arg2;
- (BOOL)isPkgEncryptLibUseBatchInject;
- (BOOL)gameLiveForAppID:(id)arg1 versionType:(int)arg2;
- (BOOL)gameRewardsForAppID:(id)arg1 versionType:(int)arg2 outBizData:(id *)arg3;
- (BOOL)gameCircleForAppID:(id)arg1 versionType:(int)arg2 outBizData:(id *)arg3;
- (BOOL)jitModeForAppID:(id)arg1;
- (BOOL)jitModeForAppID:(id)arg1 forPreload:(BOOL)arg2;
- (BOOL)jitModeEnableNativeRender:(id)arg1;
- (BOOL)jitModeEnableXHR:(id)arg1;
- (long long)getGameModeForTest:(id)arg1;
- (void)setGameModeForTest:(id)arg1 gameMode:(long long)arg2;
- (void)clearGameModeForTest:(id)arg1;
- (id)dicFrameCaptureMode;
- (id)frameCaptureModeKv;
- (unsigned long long)getFrameCaptureModeForTest:(id)arg1;
- (void)setFrameCaptureModeForTest:(id)arg1 mode:(unsigned long long)arg2;
- (void)clearFrameCaptureModeForTest:(id)arg1;
- (BOOL)shouldShowLiveAppMenu;
- (BOOL)shouldShowCopyPathMenu:(id)arg1;
- (void)markOpenWeappDestop;
- (void)parseConfigNotify:(id)arg1;
- (id)getSaveInfoKeyWithAppid:(id)arg1 debugType:(unsigned int)arg2;
- (void)parseNotifyMsg:(id)arg1;
- (void)insertDebugModeAppInfo:(id)arg1;
- (BOOL)consumeSyncCheckDemoInfoFlagForAppID:(id)arg1 debugType:(unsigned long long)arg2;
- (BOOL)markSyncCheckDemoInfoForAppID:(id)arg1 debugType:(unsigned long long)arg2;
- (void)deleteDebugModeAppInfo:(id)arg1 debugType:(unsigned long long)arg2;
- (void)parseForceOpenAppNotifyMsg:(id)arg1;
- (void)parseWeAppUpdateWxaUsageListNotify:(id)arg1;
- (void)parseWeAppMsgChannelNotify:(id)arg1;
- (void)parseNewXmlPushLibsMsg:(id)arg1;
- (void)handleNewNewXmlPushMsg:(id)arg1;
- (id)popAllNewXmlPushLibsMsgForAppId:(id)arg1;
- (void)parseUpdateWxaUserSwitchNotify:(id)arg1;
- (void)handleUpdateWxaUserSwitchNotify:(id)arg1;
- (id)fetchCacheChannelMsgsForAppid:(id)arg1;
- (void)clearCacheChannelMsgsForAppid:(id)arg1;
- (id)feedbackURLWithAppid:(id)arg1;
- (id)exposeURLWithAppid:(id)arg1 pageid:(id)arg2 from:(unsigned long long)arg3 debugMode:(unsigned long long)arg4 appVersion:(unsigned int)arg5 exposeExtraInfo:(id)arg6;
- (id)exposeURLWithAppid:(id)arg1 msgid:(id)arg2 extraData:(id)arg3 from:(unsigned long long)arg4;
- (id)exposeURLWithUsername:(id)arg1 msgid:(id)arg2 templateid:(id)arg3 screenshotId:(id)arg4;
- (id)exposeURLForKFSessionWithAppid:(id)arg1 businessAppid:(id)arg2 pageId:(id)arg3;
- (id)forbbidenUrlWithAppid:(id)arg1 offShelfType:(unsigned long long)arg2;
- (id)lowVersionWithAppid:(id)arg1 updateType:(unsigned long long)arg2;
- (id)miniToolUnsupportedDisplayURL;
- (id)waappDetailInfoViewURLWithAppid:(id)arg1;
- (id)waappBanSceneWithAppid:(id)arg1 banScene:(unsigned long long)arg2;
- (id)scanQrCodeOffLineForbbidenUrlWithAppid:(id)arg1;
- (id)overseasForbbidenUrlWithAppid:(id)arg1;
- (id)mpShortLinkInvalidURLWithTitle:(id)arg1 content:(id)arg2;
- (void)asyncUpdateWeAppConfigInfo:(id)arg1;
- (void)doGetAppConfigCgiWithItems:(id)arg1;
- (BOOL)isInsertToWebLayer:(unsigned int)arg1;
- (BOOL)isUseGameCommandBuffer;
- (void)setUseGameCommandBuffer:(BOOL)arg1 scene:(long long)arg2;
- (long long)useCommandBufferScene;
- (BOOL)isUseWCWSS;
- (void)setUseWCWSS:(BOOL)arg1;
- (BOOL)canAddWeAppPageToWCFavorite;
- (BOOL)isUseCronetRequest;
- (void)setUseCronetRequest:(BOOL)arg1;
- (BOOL)isUseCronetDownload;
- (void)setUseCronetDownload:(BOOL)arg1;
- (BOOL)isUseCronetUpload;
- (void)setUseCronetUpload:(BOOL)arg1;
- (long long)isWeakNetInterval;
- (void)setWeakNetInterval:(long long)arg1;
- (BOOL)isUseWXAUDIO;
- (void)setUseWXAUDIO:(BOOL)arg1;
- (BOOL)isOpenWeGamePredownload;
- (BOOL)isOpenWeGameSplashScreen;
- (BOOL)isOpenLaunchDownloadInPrecheckerThread;
- (BOOL)isOpenLaunchTimeAxisKV;
- (BOOL)isEnableAliveFailedRecover;
- (BOOL)isOpenPerformanceIndexReport;
- (BOOL)isOpenLocalVersionFallback;
- (BOOL)isEnableDupOpen;
- (BOOL)isCloseSilentOpen;
- (BOOL)isEnableTextAreaLoupe;
- (BOOL)isOpenWalletPrefetch;
- (id)weappQRCodePrefix;
- (BOOL)isOpenShoppingCartEntry;
- (BOOL)canWeAppCustomServiceSendVideo;
- (BOOL)isOpenMPShortLinkMenuEntry;
- (BOOL)isOpenMPShortLinkGlobalHighLight;
- (BOOL)isOpenCameraScanWxCodePreload;
- (BOOL)isWxaOpenAutoSwitchCamera;
- (BOOL)isOpenMiniTask;
- (BOOL)shouldClosePageWhenAddToMiniTask;
- (BOOL)isEnableWKInspectable;
- (BOOL)isForbidGameRemoteDebug;
- (BOOL)isForbidGameMetal;
- (long long)enableParallelShaderCompile;
- (BOOL)gameEnableMultiThread;
- (BOOL)weappEnableUnifiedCmdbuffer;
- (BOOL)weappEnableCmdbufferCanvas2d;
- (BOOL)weappEnableCmdbufferCanvas;
- (BOOL)gameEnableCmdbufferCanvasNormalMode;
- (BOOL)isOpenUsrSpaceTrace;
- (unsigned long long)usrSpaceTraceScanFrequency;
- (BOOL)canUserManageDiscoverWeAppEntryReddot;
- (BOOL)shouldMainFrameTaskBarCommonUseSectionEnable;
- (BOOL)shouldInterceptLivePlayerCategory;
- (BOOL)shouldLivePlayerTeardownBeforeDealloc;
- (BOOL)shouldShowMiniToolSiderbar;
- (BOOL)shouldShowMiniToolVoiceBubble;
- (BOOL)shouldSystemInfoRemoveBlue;
- (BOOL)shouldAsyncUpdateCalendarPermission;
- (BOOL)shouldOpenSkyline;
- (BOOL)shouldSkylineUseCoreText;
- (BOOL)isEnableCronet;
- (BOOL)isEnableCronetSimpleDiskCache;
- (BOOL)shouldOpenSkylineResizeImage;
- (BOOL)shouldOpenSkylineNewSvgImage;
- (id)makeSkylinePerformCfg;
- (BOOL)enableWeAppEarlyLoading;
- (BOOL)isSpecializedAgentEnable;
- (BOOL)isWeappAgentEnable;
- (BOOL)isForceUseBundlePubVersion;
- (BOOL)isAppidForceUseDebugVersion:(id)arg1;
- (BOOL)isAppidForceKeepContextPageInCycleJump:(id)arg1 version:(unsigned long long)arg2 debugModeType:(unsigned long long)arg3;
- (BOOL)isEnableFixOverlayingPresentBgStateLeaks;
- (long long)getFixBgStateLeaksByHitTestDetection;
- (BOOL)isEnableFixSharedSkylineViewAfterPassivePop;
- (BOOL)isAppIdInAvoidAutoCleanWhiteList:(id)arg1;
- (BOOL)isAppIdInGameAvoidAutoCleanWhiteList:(id)arg1;
- (BOOL)isOpenPrivacyAuthorizationEntry;
- (BOOL)isOpenLatestPluginJsonMerge;
- (BOOL)isOpenWeAppBackgroundManuallyTerminateWebView;
- (BOOL)isOpenWxaLaunchOptimization;
- (BOOL)shouldEnableWxapkgCrc32Verification;
- (BOOL)isEnableInputRecover;
- (BOOL)isOpenJSThreadRunOnHighPriority;
- (BOOL)enableLazyLoadWxaPlugin;
- (long long)siderbarExpt;
- (BOOL)screenRecordUseNewExpt;
- (BOOL)playAppChangeExpt;
- (BOOL)useNewPlayerCtrl;
- (BOOL)enableRDMModeLaunchOptimization;
- (id)createSemverWithVersionStr:(id)arg1;
- (BOOL)isWxaAsyncGetStorageInfo;
- (BOOL)shouldDisableKillAllWKWebViewToAvoidWKBOOM;
- (BOOL)preloadGamePowerSavingModeEnable;
- (BOOL)calcPreloadGamePowerSavingModeEnable;
- (BOOL)gamePowerSavingModeEnable;
- (int)getGamePowerSavingMode:(id)arg1;
- (BOOL)setGamePowerSavingMode:(id)arg1 gamePowerMode:(int)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onResponseGetUserSwitch:(id)arg1;
- (void)onResponseGetDebugInfo:(id)arg1;
- (void)onResponseGetAppInfoList:(id)arg1;
- (void)getDebugNotifyInfoWithDevuin:(long long)arg1 appid:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)supportAutoTest;
- (void)registerPacakgeSweeperIgnoreAppid:(id)arg1 aboveVersion:(unsigned long long)arg2;
- (void)processGlobalExpt:(id)arg1;
- (id)getGlobalExptJson;
- (id)getOpConfigWithAppID:(id)arg1;
- (void)updateOpConfigWithContact:(id)arg1;
- (void)processOpConfigWithAppID:(id)arg1 opConfig:(id)arg2;
- (void)processOpConfigWithAppID:(id)arg1 exptInfo:(id)arg2;
- (BOOL)forceReportGamePerf;
- (void)setForceReportGamePerf:(BOOL)arg1;
- (id)dicSystemConfig;
- (void)setDicSystemConfig:(id)arg1;
- (id)pkgSweeperLogic;
- (void)setPkgSweeperLogic:(id)arg1;
- (id)tagsInfo;
- (void)setTagsInfo:(id)arg1;
- (id)ignoreFreqIdKeyProtocolArray;
- (void)setIgnoreFreqIdKeyProtocolArray:(id)arg1;
- (id)ignoreFreqKeyValueProtocolArray;
- (void)setIgnoreFreqKeyValueProtocolArray:(id)arg1;
- (BOOL)overrideEntryPagePath;
- (void)setOverrideEntryPagePath:(BOOL)arg1;
- (id)mmUserAgent;
- (void)setMmUserAgent:(id)arg1;
- (id)cacheChannelMsgs;
- (void)setCacheChannelMsgs:(id)arg1;
- (void)setDicFrameCaptureMode:(id)arg1;
- (void)setFrameCaptureModeKv:(id)arg1;
- (BOOL)preloadGamePowerSavingModeEnableCached;
- (void)setPreloadGamePowerSavingModeEnableCached:(BOOL)arg1;
- (BOOL)preloadGamePowerSavingModeEnableValue;
- (void)setPreloadGamePowerSavingModeEnableValue:(BOOL)arg1;
- (void).cxx_destruct;
@end
