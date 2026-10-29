@interface WXGRoamBackupPackageService : MMUserService <WXGChatLogSessionViewControllerDelegate, WXGRoamBackupPackageBridgeDelegate, IChatLogDataMgrExt, WXGDownloadSessionViewControllerDelegate, WXGRoamChooseRangeTypeViewControllerDelegate, MMKernelExt, CNetworkStatusExt, MultiSelectContactsViewControllerDelegate, WXGRoamChooseRangeExactUserViewControllerDelegate, WCMomentsContactTagListViewControllerDelegate, INetworkStatusMgrExt, PBMessageObserverDelegate, INewSyncExt, ILinkDeviceExt, MMServiceProtocol>
{
    BOOL _bAfterCreateShowDetail; // +0x8
    BOOL _bSwitchPackagePlaceTop; // +0x9
    BOOL _bAfterGetAllDelete; // +0xa
    BOOL _bShouldNotInteruption; // +0xb
    BOOL _bCloudRoamShouldNotInteruption; // +0xc
    BOOL _bAutoTestMode; // +0xd
    BOOL _bIsModelLoaded; // +0xe
    BOOL _reportOnFetchCallback; // +0xf
    BOOL _roamSdkInitLazy; // +0x10
    int _enteredRoamVCCount; // +0x14
    int _enteredRoamListVCCount; // +0x18
    int _isCloudBackupEnabled; // +0x1c
    RoamBackupRange * _currentChooseRange; // +0x20
    RoamBackupRangeItem_ContactFilter * _currentExcludeFilter; // +0x28
    NSMutableArray * _currentIncludeUsers; // +0x30
    long long _currentChooseRangeIndex; // +0x38
    id /* block */ _chooseTagCompletionBlock; // +0x40
    WXGRoamBackupPackageModel * _currentViewModel; // +0x48
    NSMutableArray * _listViewModels; // +0x50
    WXGRoamWindowViewController * _roamWindowVC; // +0x58
    WXGRoamLiteWindowViewController * _roamLiteWindowVC; // +0x60
    WXGRoamChooseRangeExactUserViewController * _downloadSelectVC; // +0x68
    WXGRoamBackupPackageManagerViewController * _detailVC; // +0x70
    WXGRoamBackupPackageBridge * _roamBridge; // +0x78
    WXGRoamBackupPackageRangeHandler * _rangeHandler; // +0x80
    long long _selectUserEnterScene; // +0x88
    UIViewController * _selectUserNavVC; // +0x90
    NSMutableDictionary * _cancelDict; // +0x98
    NSMutableDictionary * _cancelConnectDict; // +0xa0
    NSMutableDictionary * _modelMap; // +0xa8
    NSString * _workingBSSID; // +0xb0
    NSString * _curBindId; // +0xb8
    NSString * _curNewPkgSessionId; // +0xc0
    NSMutableDictionary * _execRoamServerResult; // +0xc8
    NSMutableSet * _prepareBackupPackageSet; // +0xd0
    NSMutableSet * _prepareRecoverPackageSet; // +0xd8
    RoamPackageCreateViewController * _weakCreateViewController; // +0xe0
    NSMutableDictionary * _bindCallbackDict; // +0xe8
}
- (void)onServiceInit;
- (void)onServiceInitLazy;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onTaskShouldPause;
- (void)onTaskCanResume;
- (void)onEnterForeground;
- (void)fetchAndReportPackageIfNeeded;
- (void)doReportPackageIfNeeded;
- (void)showLocalNotification;
- (void)genCurrentCreatePackageName;
- (id)getPackageNameFor:(id)arg1;
- (id)getDeviceNameForCurModel;
- (id)getDeviceNameFor:(id)arg1;
- (id)getRelatedMemoryKV;
- (id)getLastCreatePackageDeviceId;
- (void)setLastCreatePackageDeviceId:(id)arg1;
- (void)onAuthOK;
- (id)roamBridge;
- (void)setBAfterGetAllDelete:(BOOL)arg1;
- (unsigned long long)getRangeTypeCount:(int)arg1;
- (id)getRangeTypeName:(int)arg1;
- (void)addNewRangeItemToCurrentRange;
- (id)parseRangeItemToString:(id)arg1;
- (id)parseRangeToSymbolString:(id)arg1;
- (id)parseUserNameToSessionName:(id)arg1;
- (unsigned long long)parseRangeUsersCount:(id)arg1;
- (id)parseRangeItemExcludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeExactUserToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeLabelToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeExactUserWithPrefixToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeLabelWithPrefixToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemBackupTimeToString:(id)arg1 atIndex:(long long)arg2 model:(id)arg3;
- (void)setAutoTestMode:(BOOL)arg1;
- (void)startAutoTestBackup;
- (void)startAutoTestRestore;
- (BOOL)isNewBackupTaskRunning;
- (void)setAppBackupUIStateChanged:(BOOL)arg1;
- (void)setPauseAutoBackupForTimes:(id)arg1 pauseTime:(unsigned long long)arg2;
- (void)setAutoBackupLastSuccessTime:(id)arg1 lastSuccessTime:(unsigned long long)arg2;
- (id)getStandAlonePackageInfo:(id)arg1;
- (int)getConnectType:(id)arg1;
- (void)cancelPrepare:(id)arg1 isRoamLite:(BOOL)arg2;
- (BOOL)isNeedCancel:(id)arg1;
- (BOOL)isNeedConnectCancel:(id)arg1;
- (void)updateModelFromDB:(id)arg1;
- (void)connectWithModel:(id)arg1;
- (void)disconnectWithModel:(id)arg1;
- (void)startCulculateCurrentModel;
- (void)startBackupWithModel:(id)arg1;
- (void)startBackupWithModel:(id)arg1 isAuto:(BOOL)arg2;
- (BOOL)checkNeedUpdatePCWith:(id)arg1;
- (void)startRestoreWithModel:(id)arg1;
- (void)resumeWithModel:(id)arg1;
- (void)stopWithModel:(id)arg1;
- (void)pauseWithModel:(id)arg1;
- (int)getTaskTypeWithModel:(id)arg1;
- (id)getTransferStatWithModel:(id)arg1;
- (void)updateBackupUserInfoWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 needSetModel:(BOOL)arg3;
- (void)getAllModels:(BOOL)arg1 fetchFromServer:(BOOL)arg2;
- (void)getAllModels:(BOOL)arg1 fetchFromServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)createPackageWithModels:(id)arg1;
- (void)updatePackageWithModels:(id)arg1;
- (void)deletePackageWithModels:(id)arg1;
- (BOOL)isBackingUpWithModel:(id)arg1;
- (BOOL)isRestoringWithModel:(id)arg1;
- (void)deleteAllBackup;
- (void)deleteBackup:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (unsigned long long)getDiskFreeSize;
- (unsigned long long)isOpenNewBackup;
- (BOOL)isEnabledNewCreateUI;
- (BOOL)isCreatePackageAutoBackupByDefault;
- (BOOL)isOpenCloudBackup;
- (BOOL)canDownloadFromCloudBackup:(id)arg1;
- (unsigned long long)isEnableDowngrade;
- (void)sendStrongNotify:(id)arg1 title:(id)arg2 packageId:(unsigned long long)arg3;
- (unsigned int)getXWeChatVersionNeedUpdatePc;
- (unsigned int)getXWeChatVersionNeedUpdateMac;
- (unsigned int)getPhoneVersionNeedUpdate;
- (id)getPhoneVersionNeedUpdateStr;
- (BOOL)checkAndShowNeedUpdateFrom:(id)arg1;
- (id)mockOnlinePCDevice;
- (BOOL)isAppStoreClientVersion:(unsigned int)arg1;
- (BOOL)checkIsAppStoreXwechatWithModel:(id)arg1;
- (id)mockOnlinePCDeviceWrapper;
- (void)notifyLoginComplete;
- (id)getIconNameWithDeviceType:(unsigned int)arg1;
- (id)getDeviceTypeNameWithDeviceType:(unsigned int)arg1;
- (void)setupNotifyCode:(unsigned long long)arg1 toPackage:(unsigned long long)arg2;
- (void)notifyPackagePermissionFail;
- (void)onChooseRangeDetailComplete;
- (void)onChooseRangeIncludeUserComplete;
- (void)notifyOutBoxSelectComplete:(id)arg1 dirURL:(id)arg2;
- (void)notifyCurrentModelToNormal;
- (void)notifyCurrentModelToStop;
- (void)notifyToNormal:(id)arg1;
- (BOOL)isAutoBackupNotifyCodeNotCorrect:(id)arg1;
- (void)reGetBackedUpConversationIsRestore:(BOOL)arg1;
- (BOOL)showRoamLiteIfTaskIsRunning:(id)arg1;
- (void)showListVCOrNewEnterVCWith:(id)arg1;
- (void)showListVCOrNewEnterVCUnderTheTopWith:(id)arg1;
- (void)showListVCAndSetHasEnterWith:(id)arg1;
- (void)showManagerBackupPackageVCWith:(id)arg1 isDeleted:(BOOL)arg2;
- (void)showDetailBackupPackageVCWith:(id)arg1 index:(long long)arg2;
- (void)showDetailBackupPackageVCWith:(id)arg1 model:(id)arg2;
- (void)showDetailBackupPackageVCFromRootVCWith:(id)arg1;
- (void)showDetailBackupPackageVCAndPopWith:(id)arg1 andModel:(id)arg2;
- (void)showPackageNameChangeHalfViewWith:(id)arg1;
- (void)showChooseRangeVCWith:(id)arg1 isUpdate:(BOOL)arg2;
- (void)showCreateBackupPackageVCWith:(id)arg1 isRoamLite:(BOOL)arg2;
- (void)showNewCreateBackupPackageVCWith:(id)arg1 animated:(BOOL)arg2;
- (void)showChooseRangeTimeView;
- (void)showChooseRangeTypeVC;
- (void)showChooseRangeTypeVCExclude;
- (void)showChooseRangeTypeVCImport;
- (void)showDeviceSelectViewWith:(id)arg1;
- (void)showDevicePCAddViewWith:(id)arg1;
- (void)showDeviceUSBAddViewWith:(id)arg1;
- (void)showUSBTipsViewWith:(id)arg1;
- (void)showDeviceAddVCWith:(id)arg1;
- (void)onHideCreateViewHalfView;
- (void)showRangeExcludeHalfView;
- (void)showRangeIncludeUserHalfView;
- (void)showRangeHalfViewWith:(id)arg1 isUpdate:(BOOL)arg2;
- (void)showRoamAutoHalfViewWith:(id)arg1 isEnterFromList:(BOOL)arg2;
- (void)showRejectVC;
- (void)showPortablePermissonVCWith:(id)arg1;
- (void)showRoamWindowVCRunning;
- (void)showRoamWindowVCRestore;
- (void)resetRoamWindowVCRestore;
- (void)showRoamWindowVC:(BOOL)arg1;
- (void)hideRoamWindowVC:(BOOL)arg1;
- (void)closeRoamWindowVC:(BOOL)arg1;
- (void)showDeleteVCWith:(id)arg1;
- (void)showDeletePackageVCWith:(id)arg1;
- (void)showDeleteSelectVCWith:(id)arg1;
- (void)selectBackupInclude:(id)arg1;
- (void)selectBackupIncludeUpdate:(id)arg1;
- (void)showDisconnectHalfView:(id)arg1;
- (void)showConnectionVCWith:(id)arg1;
- (void)showUSBTipsHalfView:(id)arg1;
- (void)selectBackupExclude:(id)arg1;
- (void)selectBackupIncludeUsers:(id)arg1;
- (void)showSelectUserImport:(id)arg1;
- (void)selectUser:(id)arg1 existDic:(id)arg2;
- (void)showExactUserSelect:(id)arg1 enterScene:(long long)arg2 existArr:(id)arg3;
- (void)selectRestore:(id)arg1;
- (void)setShouldNoInterrupt;
- (void)setCanInterrupt;
- (BOOL)isRoamWorking;
- (void)setCloudRoamShouldNoInterrupt;
- (void)setCloudRoamCanInterrupt;
- (BOOL)isCloudRoamWorking;
- (BOOL)isOpenCloudload;
- (void)cloudloadMediaForMessage:(id)arg1 localPath:(id)arg2 username:(id)arg3 dataID:(id)arg4;
- (void)notifyToBindTicket:(id)arg1;
- (void)notifyRoamLitePackageCreatedIfNeeded:(int)arg1;
- (void)notifyRoamLiteStartTaskResultIfNeeded:(int)arg1;
- (void)notifyRoamLiteStartTaskResult:(int)arg1 packageId:(unsigned long long)arg2 isBackup:(BOOL)arg3;
- (void)bindDevice:(id)arg1 callback:(id /* block */)arg2;
- (void)notifyToExecRoamServer:(id)arg1;
- (void)notifyToListenPCNetwork:(int)arg1;
- (void)notifyToPackagesUpdate:(unsigned long long)arg1 withNewPkg:(BOOL)arg2;
- (void)sendStatusNotifyWithFunc:(id)arg1 isBind:(BOOL)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncRoamResult:(id)arg1;
- (void)onIlinkRegistered:(id)arg1;
- (void)onExecRoamServerResult:(id)arg1;
- (int)checkExecRoamServerResult:(id)arg1;
- (id)parseArgFromSyncResultDict:(id)arg1;
- (void)onSyncBindIdResult:(id)arg1;
- (void)execEnsurePackageModelLoaded:(id /* block */)arg1;
- (void)onSyncRoamLiteNewPackage:(id)arg1;
- (void)onSyncRoamLiteStartBackup:(id)arg1;
- (void)onSyncRoamLiteStartRestore:(id)arg1;
- (void)onSyncPCNetworkChanged:(id)arg1;
- (void)connect:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)deletePortableDevice:(id)arg1;
- (void)getAllPortableDevice;
- (void)jumpCreateBackup:(id)arg1 deviceName:(id)arg2 deviceType:(int)arg3 parentVC:(id)arg4;
- (void)jumpCreateBackup:(id)arg1 deviceName:(id)arg2 deviceType:(int)arg3 parentVC:(id)arg4 animated:(BOOL)arg5 pushListVC:(BOOL)arg6;
- (void)jumpBackupList:(id)arg1;
- (BOOL)useDebugWeApp;
- (void)jumpWeAppDeviceDetailFromCurrentDetail:(id)arg1;
- (void)remarkPortableDevice:(id)arg1 remark:(id)arg2;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onChooseRangeExactUserComplete:(long long)arg1 typeArray:(id)arg2 totalSize:(unsigned long long)arg3;
- (void)onChooseRangeTypeComplete:(long long)arg1 typeArray:(id)arg2 tagArray:(id)arg3 userIncludeArray:(id)arg4;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onRoamBackupPackageBridgeNotifyStartConnect:(id)arg1;
- (void)onRoamBackupPackageBridgeFinishGetAllModels:(id)arg1 error:(int)arg2 duration:(unsigned int)arg3 fromServer:(BOOL)arg4;
- (void)onRoamBackupPackageBridgeFinishCreatePackages:(int)arg1 packageIds:(id)arg2;
- (void)onRoamBackupPackageBridgeFinishUpdatePackages:(int)arg1 packages:(id)arg2;
- (void)onRoamBackupPackageBridgeFinishDeletePackages:(int)arg1 packageIds:(id)arg2 duration:(unsigned int)arg3;
- (void)onRoamBackupPackageBridgeTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageBridgeTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageBridgeTaskCompleteEvent:(unsigned long long)arg1 type:(int)arg2 error:(int)arg3 msg:(id)arg4 continueOnErrorCount:(unsigned long long)arg5;
- (void)onRoamBackupPackageBridgeTimeToAutoBackup:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeTimeToResumeQuitTask:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeDeleteBackupRet:(int)arg1 packageId:(unsigned long long)arg2 duration:(unsigned int)arg3 deleteCount:(unsigned long long)arg4 deleteAll:(BOOL)arg5;
- (void)onRoamBackupPackageBridgeTaskStateChangeEvent:(unsigned long long)arg1 state:(int)arg2 type:(int)arg3 errorList:(id)arg4;
- (void)onRoamBackupPackageBridgeDeviceConnectivityChanged:(BOOL)arg1 deviceId:(id)arg2;
- (void)onRoamBackupPackageBridgeDeviceInfoGet:(id)arg1 error:(int)arg2 deviceId:(id)arg3;
- (void)onRoamBackupPackageBridgeLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)onRoamBackupPackageBridgeLoadMediaProgress:(id)arg1 dataID:(id)arg2 finished:(unsigned long long)arg3 total:(unsigned long long)arg4;
- (void)onRoamBackupPackageBridgeDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageBridgeDowngradeEventChange:(BOOL)arg1 stop:(BOOL)arg2 packageId:(unsigned long long)arg3;
- (void)reportStat:(unsigned long long)arg1 logString:(id)arg2;
- (void)markPrepareBackupBegin:(unsigned long long)arg1;
- (void)reportBackupPrepareEstimateWithPackageId:(unsigned long long)arg1 estimateSize:(unsigned long long)arg2 convCount:(unsigned int)arg3 costTimeMs:(unsigned long long)arg4 isLiteEstimatorUsed:(BOOL)arg5;
- (void)report33661:(unsigned int)arg1 SubType:(unsigned int)arg2 PackageId:(unsigned long long)arg3 CostTime:(unsigned long long)arg4 ConvCount:(unsigned int)arg5 EstimateSize:(unsigned long long)arg6 PackageName:(id)arg7 ExtraInfo:(id)arg8 ErrorCode:(int)arg9 OnceInBackground:(unsigned long long)arg10;
- (id)getAllRoamAnalysis;
- (id)getReportData:(id)arg1;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3 isPackageIDValid:(BOOL)arg4;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3 isPackageIDValid:(BOOL)arg4 extraInfo:(id)arg5;
- (unsigned int)getReportDeviceType:(id)arg1;
- (void)showRoamLiteCreateWithDebug;
- (void)showRoamLitePackageListWithDebug;
- (void)showRoamLitePackageDetailWithDebug:(id)arg1 preVC:(id)arg2;
- (void)roamReformTest;
- (void)roamCgiTest;
- (void)getWifiNameAsync;
- (id)tranferToNonBreakingStringWith:(id)arg1;
- (BOOL)isAppInBackground;
- (void)touchBridge;
- (void)cloudRoamTest;
- (void)flutterCloudRoamTest:(id)arg1;
- (void)initCloudRoamManager;
- (void)cloudSelectUser:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudSelectTimeBegin:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudSelectTimeEnd:(id)arg1 completion:(id /* block */)arg2;
- (void)showCloudRoamPage:(id)arg1;
- (void)cloudSelectUserTag:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudManageBackup:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudSelectRestore:(id)arg1 completion:(id /* block */)arg2;
- (id)getFileIdFromCloudRoam:(id)arg1;
- (unsigned long long)getFileSizeFromCloudRoam:(id)arg1;
- (void)downloadFromCdnSync:(id)arg1 fileId:(id)arg2 fileType:(int)arg3 savePath:(id)arg4 aesKey:(id)arg5;
- (void)compressMedia;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)onSyncRoamLiteNewPackageFlutter:(id)arg1;
- (void)onSyncRoamLiteStartBackupFlutter:(id)arg1;
- (void)onSyncRoamLiteStartRestoreFlutter:(id)arg1;
- (void)onSyncBindIdResultFlutter:(id)arg1;
- (void)onSyncPCNetworkChangedFlutter:(id)arg1;
- (void)onExecRoamServerResultFlutter:(id)arg1;
- (void)onSyncRoamLiteStopAllBackupRestoreFlutter:(id)arg1;
- (id)currentChooseRange;
- (void)setCurrentChooseRange:(id)arg1;
- (id)currentExcludeFilter;
- (void)setCurrentExcludeFilter:(id)arg1;
- (id)currentIncludeUsers;
- (void)setCurrentIncludeUsers:(id)arg1;
- (long long)currentChooseRangeIndex;
- (void)setCurrentChooseRangeIndex:(long long)arg1;
- (BOOL)bAfterCreateShowDetail;
- (void)setBAfterCreateShowDetail:(BOOL)arg1;
- (BOOL)bSwitchPackagePlaceTop;
- (void)setBSwitchPackagePlaceTop:(BOOL)arg1;
- (BOOL)bAfterGetAllDelete;
- (id /* block */)chooseTagCompletionBlock;
- (void)setChooseTagCompletionBlock:(id /* block */)arg1;
- (id)currentViewModel;
- (void)setCurrentViewModel:(id)arg1;
- (id)listViewModels;
- (void)setListViewModels:(id)arg1;
- (int)enteredRoamVCCount;
- (void)setEnteredRoamVCCount:(int)arg1;
- (int)enteredRoamListVCCount;
- (void)setEnteredRoamListVCCount:(int)arg1;
- (id)roamWindowVC;
- (void)setRoamWindowVC:(id)arg1;
- (id)roamLiteWindowVC;
- (void)setRoamLiteWindowVC:(id)arg1;
- (id)downloadSelectVC;
- (void)setDownloadSelectVC:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (void)setRoamBridge:(id)arg1;
- (id)rangeHandler;
- (void)setRangeHandler:(id)arg1;
- (BOOL)bShouldNotInteruption;
- (void)setBShouldNotInteruption:(BOOL)arg1;
- (BOOL)bCloudRoamShouldNotInteruption;
- (void)setBCloudRoamShouldNotInteruption:(BOOL)arg1;
- (BOOL)bAutoTestMode;
- (void)setBAutoTestMode:(BOOL)arg1;
- (BOOL)bIsModelLoaded;
- (void)setBIsModelLoaded:(BOOL)arg1;
- (int)isCloudBackupEnabled;
- (void)setIsCloudBackupEnabled:(int)arg1;
- (long long)selectUserEnterScene;
- (void)setSelectUserEnterScene:(long long)arg1;
- (id)selectUserNavVC;
- (void)setSelectUserNavVC:(id)arg1;
- (id)cancelDict;
- (void)setCancelDict:(id)arg1;
- (id)cancelConnectDict;
- (void)setCancelConnectDict:(id)arg1;
- (id)modelMap;
- (void)setModelMap:(id)arg1;
- (id)workingBSSID;
- (void)setWorkingBSSID:(id)arg1;
- (id)curBindId;
- (void)setCurBindId:(id)arg1;
- (id)curNewPkgSessionId;
- (void)setCurNewPkgSessionId:(id)arg1;
- (id)execRoamServerResult;
- (void)setExecRoamServerResult:(id)arg1;
- (id)prepareBackupPackageSet;
- (void)setPrepareBackupPackageSet:(id)arg1;
- (id)prepareRecoverPackageSet;
- (void)setPrepareRecoverPackageSet:(id)arg1;
- (id)weakCreateViewController;
- (void)setWeakCreateViewController:(id)arg1;
- (BOOL)reportOnFetchCallback;
- (void)setReportOnFetchCallback:(BOOL)arg1;
- (BOOL)roamSdkInitLazy;
- (void)setRoamSdkInitLazy:(BOOL)arg1;
- (id)bindCallbackDict;
- (void)setBindCallbackDict:(id)arg1;
- (void).cxx_destruct;
@end
