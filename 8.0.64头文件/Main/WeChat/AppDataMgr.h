@interface AppDataMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, MMKernelExt>
{
    BOOL _appDataChecked; // +0x8
    BOOL _appSettingLoaded; // +0x9
    NSMutableDictionary * _appSettingMap; // +0x10
    NSMutableArray * _aryAuthApp; // +0x18
    BOOL _aryAuthAppLoaded; // +0x20
    NSMutableArray * _aryAppPersonalInfo; // +0x28
    BOOL _aryAppPersonalInfoLoader; // +0x30
    BOOL _appResisterInfoLoaded; // +0x31
    BOOL _newAppStatus; // +0x32
    NSMutableArray * _aryInstalledApp; // +0x38
    NSMutableArray * _aryReceivedApp; // +0x40
    NSMutableArray * _aryBuiltInApp; // +0x48
    ServiceAppsLogicImpl * _svcAppsLogicImpl; // +0x50
    NSMutableArray * _getAppInfoRunningQueue; // +0x58
    NSMutableArray * _getAppInfoWaitingQueue; // +0x60
    BOOL _bGetAppInfoListRunning; // +0x68
    AppIconItem * _updateAppIconRunningItem; // +0x70
    NSMutableArray * _updateAppIconWaitingQueue; // +0x78
    BOOL _bUpdateAppIconRunning; // +0x80
    BOOL _hasMoveFinished; // +0x81
    NSMutableDictionary * _dictInnerJumpAppIdType; // +0x88
    NSMutableDictionary * _dictInnerJumpTypeAppId; // +0x90
}
- (id)init;
- (void)dealloc;
- (void)initInnerJumpDict;
- (long long)getFuncTypeWithAppId:(id)arg1;
- (id)getAppIdWithFuncType:(long long)arg1;
- (unsigned long long)getFlagByMessageWrap:(id)arg1;
- (id)keyForDicShowInShareListSeqByType:(unsigned long long)arg1;
- (id)getShareTo3rdSortedAppInfo:(BOOL)arg1 andType:(unsigned long long)arg2;
- (void)convertShareTypeToOpenSDKType:(unsigned long long)arg1 ToOpenSDKType:(long long *)arg2;
- (void)save3rdAppSupportContentType:(unsigned long long)arg1 withAppID:(id)arg2;
- (void)setIsShowInShareList:(BOOL)arg1 withAppID:(id)arg2;
- (void)setShowInShareListSeq:(unsigned int)arg1 withAppID:(id)arg2 andType:(unsigned long long)arg3;
- (void)mergeBuiltInAppList;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (BOOL)getNewAppStatus;
- (void)setNewAppStatus:(BOOL)arg1;
- (void)saveNewAppStatus;
- (void)loadNewAppStatus;
- (BOOL)isAppSettingExist:(id)arg1;
- (BOOL)isOpenIDExist:(id)arg1;
- (id)getOpenID:(id)arg1;
- (BOOL)isCanForward:(id)arg1;
- (BOOL)isNeedDetectRequetURL:(id)arg1;
- (BOOL)isGame:(id)arg1;
- (BOOL)isGame:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)isGeneralApp:(id)arg1;
- (void)updateAppSettingFlag:(id)arg1;
- (void)updateAppAddedByUser:(id)arg1 :(BOOL)arg2;
- (BOOL)UpdateAppSettingItem:(id)arg1;
- (void)UpdateAppAuthState:(id)arg1 isAuth:(BOOL)arg2;
- (void)UpdateAppRecvMsgState:(id)arg1 isRecvMsg:(BOOL)arg2;
- (void)setAppSettingFlag:(unsigned int)arg1 withAppID:(id)arg2;
- (BOOL)isWeSportApp:(id)arg1;
- (void)doUpdateAppSettingItem;
- (void)onAuthOK;
- (BOOL)UpdateBatchAppSettingItem:(id)arg1;
- (BOOL)SetAppSetting:(id)arg1 setCmdID:(int)arg2 setCmdValue:(id)arg3;
- (void)handleGetAppSetting:(id)arg1;
- (void)handleSetAppSetting:(id)arg1;
- (BOOL)loadAppSetting;
- (void)saveAppSetting;
- (BOOL)checkAndUpdateAppDataForiOS7Plus:(id)arg1 forceUpdate:(BOOL)arg2;
- (BOOL)checkAndUpdateAppData;
- (BOOL)isAppDataChecked;
- (void)addAppByUserMoveToAppSetting;
- (id)getServiceAppArray:(id)arg1;
- (void)setServiceAppNotShowNew:(id)arg1;
- (id)getAppInstalledArray;
- (BOOL)isAppInstalledPossibly:(id)arg1;
- (BOOL)deleteUninstalledAppByAppID:(id)arg1;
- (BOOL)receiveAppInfoFromMsg:(id)arg1 name:(id)arg2 version:(int)arg3 isForceUpdate:(BOOL)arg4;
- (void)markUpdateWatermarkIfNeededWithInfo:(id)arg1;
- (id)getAppIcon:(id)arg1;
- (id)getAppIconRetNilIfNotExist:(id)arg1;
- (id)getAppWatermark:(id)arg1;
- (BOOL)compareAppID:(id)arg1 withOtherAppID:(id)arg2;
- (id)mergeValue:(id)arg1 newValue:(id)arg2;
- (id)mergeBuiltInAppInfo:(id)arg1;
- (id)getAppRegisterInfo:(id)arg1;
- (void)updateBizAppInfoWithAddByUser;
- (void)updateBizAppInfoWithGameCenter;
- (BOOL)addUpdateAppIconQueue:(id)arg1 appID:(id)arg2 cmd:(id)arg3;
- (BOOL)checkUpdateAppIconWaitingQueue;
- (void)addGetAppInfoListQueue:(id)arg1;
- (void)checkGetAppInfoListWaitingQueue;
- (void)clearGetAppInfoListRunningQueue;
- (BOOL)updateAppInfo:(id)arg1 appInfoVer:(unsigned int)arg2;
- (void)forceUpdateAppInfo:(id)arg1;
- (void)forceUpdateBizAppInfoWithAppIDList:(id)arg1;
- (BOOL)forceUpdateBizAppInfo:(id)arg1;
- (BOOL)addNeedUpdateAppId:(id)arg1;
- (id)getAuthAppList;
- (void)handleGetAuthAppList:(id)arg1;
- (void)handleGetAppPersonalInfoList:(id)arg1;
- (id)getPersonalInfoWithAppID:(id)arg1;
- (BOOL)loadAuthAppInfo;
- (void)saveAuthAppInfo;
- (BOOL)loadAppPersonalInfo;
- (void)saveAppPersonalInfo;
- (id)GetPathOfAppIcon:(id)arg1;
- (id)GetPathOfAppWatermark:(id)arg1;
- (id)getRegisterPasteboardName;
- (id)dictionaryToAppRegisterInfo:(id)arg1;
- (id)getRegisterDictionary;
- (void)saveAppRegisterInfo;
- (void)trimAppRegisterInfo:(id)arg1;
- (BOOL)loadAppRegisterInfo;
- (void)refreshAppInfoLastUpdateTimeForNewUser;
- (BOOL)checkRegisterInfo:(id)arg1;
- (id)getInstalledAppInfo:(id)arg1;
- (void)updateAppInfo:(id)arg1;
- (BOOL)updateAppIcon:(id)arg1;
- (BOOL)updateAppWatermark:(id)arg1;
- (id)updateValue:(id)arg1 newValue:(id)arg2;
- (void)handleGetAppInfoList:(id)arg1;
- (BOOL)isUrl:(id)arg1 hasValueAndChangedFromOldUrl:(id)arg2;
- (void)handleGetIcon:(id)arg1;
- (void)handleGetWatermark:(id)arg1;
- (BOOL)needUpdateImageIfUrlChanged;
- (BOOL)makeUrlRequst:(id)arg1 userData:(id)arg2 cdn:(BOOL)arg3;
- (void)updateAppSettingItemList:(id)arg1;
- (BOOL)structCGI:(id)arg1 withType:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onPreQuit;
- (id)appSettingMap;
- (void)setAppSettingMap:(id)arg1;
- (void).cxx_destruct;
@end
