@interface WXGRoamBackupPackageService : MMUserService <WXGChatLogSessionViewControllerDelegate, WXGRoamBackupPackageBridgeDelegate, IChatLogDataMgrExt, WXGDownloadSessionViewControllerDelegate, WXGRoamChooseRangeTypeViewControllerDelegate, MMKernelExt, MultiSelectContactsViewControllerDelegate, WXGRoamChooseRangeExactUserViewControllerDelegate, INetworkStatusMgrExt, PBMessageObserverDelegate, INewSyncExt, MMServiceProtocol>
{
    BOOL _bAfterCreateShowDetail; // +0x8
    BOOL _bSwitchPackagePlaceTop; // +0x9
    BOOL _bShouldNotInteruption; // +0xa
    BOOL _bAutoTestMode; // +0xb
    int _enterListViewCount; // +0xc
    RoamBackupRange * _currentChooseRange; // +0x10
    RoamBackupRangeItem_ContactFilter * _currentExcludeFilter; // +0x18
    NSMutableArray * _currentIncludeUsers; // +0x20
    long long _currentChooseRangeIndex; // +0x28
    WXGRoamBackupPackageModel * _currentViewModel; // +0x30
    NSMutableArray * _listViewModels; // +0x38
    WXGRoamWindowViewController * _roamWindowVC; // +0x40
    WXGRoamChooseRangeExactUserViewController * _downloadSelectVC; // +0x48
    WXGRoamBackupPackageManagerViewController * _detailVC; // +0x50
    WXGRoamBackupPackageBridge * _roamBridge; // +0x58
    WXGRoamBackupPackageRangeHandler * _rangeHandler; // +0x60
    long long _selectUserEnterScene; // +0x68
    UIViewController * _selectUserNavVC; // +0x70
    NSMutableDictionary * _cancelDict; // +0x78
    NSMutableDictionary * _cancelConnectDict; // +0x80
    NSMutableDictionary * _modelMap; // +0x88
    NSString * _workingBSSID; // +0x90
    NSString * _curBindId; // +0x98
}
- (void)onServiceInit;
- (void)dealloc;
- (void)onTaskShouldPause;
- (void)onTaskCanResume;
- (void)onEnterForeground;
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
- (void)setAutoTestMode:(BOOL)arg1;
- (void)startAutoTestBackup;
- (void)startAutoTestRestore;
- (BOOL)isNewBackupTaskRunning;
- (void)setAppBackupUIStateChanged:(BOOL)arg1;
- (void)setPauseAutoBackupForTimes:(id)arg1 pauseTime:(unsigned long long)arg2;
- (void)setAutoBackupLastSuccessTime:(id)arg1 lastSuccessTime:(unsigned long long)arg2;
- (id)getStandAlonePackageInfo:(id)arg1;
- (int)getConnectType:(id)arg1;
- (void)cancelPrepare:(id)arg1;
- (BOOL)isNeedCancel:(id)arg1;
- (BOOL)isNeedConnectCancel:(id)arg1;
- (void)updateModelFromDB:(id)arg1;
- (void)startCulculateCurrentModel;
- (void)startBackupWithModel:(id)arg1;
- (void)startBackupWithModel:(id)arg1 isAuto:(BOOL)arg2;
- (void)startRestoreWithModel:(id)arg1;
- (void)resumeWithModel:(id)arg1;
- (void)stopWithModel:(id)arg1;
- (void)pauseWithModel:(id)arg1;
- (int)getTaskTypeWithModel:(id)arg1;
- (id)getTransferStatWithModel:(id)arg1;
- (void)updateBackupUserInfoWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 needSetModel:(BOOL)arg3;
- (void)getAllModels:(BOOL)arg1 fetchFromServer:(BOOL)arg2;
- (void)createPackageWithModels:(id)arg1;
- (void)updatePackageWithModels:(id)arg1;
- (void)deletePackageWithModels:(id)arg1;
- (void)deleteAllBackup;
- (void)deleteBackup:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (unsigned long long)getDiskFreeSize;
- (unsigned long long)isOpenNewBackup;
- (unsigned long long)isEnableDowngrade;
- (unsigned int)getXWeChatVersionNeedUpdatePc;
- (unsigned int)getXWeChatVersionNeedUpdateMac;
- (BOOL)checkAndShowNeedUpdateFrom:(id)arg1;
- (id)mockOnlinePCDevice;
- (void)notifyLoginComplete;
- (id)getIconNameWithDeviceType:(unsigned int)arg1;
- (id)getDeviceTypeNameWithDeviceType:(unsigned int)arg1;
- (void)setupNotifyCode:(unsigned long long)arg1 toPackage:(unsigned long long)arg2;
- (void)notifyPackagePermissionFail;
- (void)onChooseRangeDetailComplete;
- (void)onChooseRangeIncludeUserComplete;
- (void)notifyOutBoxSelectComplete:(id)arg1 dirURL:(id)arg2;
- (void)notifyCurrentModelToNormal;
- (void)notifyToNormal:(id)arg1;
- (BOOL)isAutoBackupNotifyCodeNotCorrect:(id)arg1;
- (void)reGetBackedUpConversationIsRestore:(BOOL)arg1;
- (void)showListVCOrNewEnterVCWith:(id)arg1;
- (void)showListVCAndSetHasEnterWith:(id)arg1;
- (void)showManagerBackupPackageVCWith:(id)arg1 isDeleted:(BOOL)arg2;
- (void)showDetailBackupPackageVCWith:(id)arg1 index:(long long)arg2;
- (void)showPackageNameChangeHalfViewWith:(id)arg1;
- (void)showChooseRangeVCWith:(id)arg1 isUpdate:(BOOL)arg2;
- (void)showCreateBackupPackageVCWith:(id)arg1;
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
- (void)showRoamWindowVC;
- (void)hideRoamWindowVC;
- (void)showDeleteVCWith:(id)arg1;
- (void)showDeletePackageVCWith:(id)arg1;
- (void)showDeleteSelectVCWith:(id)arg1;
- (void)selectBackupInclude:(id)arg1;
- (void)selectBackupIncludeUpdate:(id)arg1;
- (void)showDisconnectHalfView:(id)arg1;
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
- (BOOL)isOpenCloudload;
- (BOOL)isOpenCloudBackup;
- (void)cloudloadMediaForMessage:(id)arg1 localPath:(id)arg2 username:(id)arg3 dataID:(id)arg4;
- (void)notifyToBindTicket;
- (void)notifyToExecRoamServer:(id)arg1;
- (void)notifyToPackagesUpdate;
- (void)sendStatusNotifyWithFunc:(id)arg1 isBind:(BOOL)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncRoamBindTicket:(id)arg1;
- (void)connect:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)deletePortableDevice:(id)arg1;
- (void)getAllPortableDevice;
- (void)jumpCreateBackup:(id)arg1 deviceName:(id)arg2 deviceType:(int)arg3 parentVC:(id)arg4;
- (void)jumpBackupList:(id)arg1;
- (void)jumpWeAppDeviceDetailFromCurrentDetail;
- (void)remarkPortableDevice:(id)arg1 remark:(id)arg2;
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
- (void)onRoamBackupPackageBridgeTaskCompleteEvent:(unsigned long long)arg1 type:(int)arg2 error:(int)arg3 msg:(id)arg4;
- (void)onRoamBackupPackageBridgeTimeToAutoBackup:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeTimeToResumeQuitTask:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeDeleteBackupRet:(int)arg1 packageId:(unsigned long long)arg2 duration:(unsigned int)arg3 deleteCount:(unsigned long long)arg4 deleteAll:(BOOL)arg5;
- (void)onRoamBackupPackageBridgeTaskStateChangeEvent:(unsigned long long)arg1 state:(int)arg2 type:(int)arg3 errorList:(id)arg4;
- (void)onRoamBackupPackageBridgeDeviceConnectivityChanged:(BOOL)arg1 deviceId:(id)arg2;
- (void)onRoamBackupPackageBridgeDeviceInfoGet:(id)arg1 error:(int)arg2 deviceId:(id)arg3;
- (void)onRoamBackupPackageBridgeLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)onRoamBackupPackageBridgeDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageBridgeDowngradeEventChange:(BOOL)arg1 stop:(BOOL)arg2 packageId:(unsigned long long)arg3;
- (void)reportStat:(unsigned long long)arg1 logString:(id)arg2;
- (id)getAllRoamAnalysis;
- (id)getReportData:(id)arg1;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3 isPackageIDValid:(BOOL)arg4;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3 isPackageIDValid:(BOOL)arg4 extraInfo:(id)arg5;
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
- (id)currentViewModel;
- (void)setCurrentViewModel:(id)arg1;
- (id)listViewModels;
- (void)setListViewModels:(id)arg1;
- (int)enterListViewCount;
- (void)setEnterListViewCount:(int)arg1;
- (id)roamWindowVC;
- (void)setRoamWindowVC:(id)arg1;
- (id)downloadSelectVC;
- (void)setDownloadSelectVC:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (void)setRoamBridge:(id)arg1;
- (id)rangeHandler;
- (void)setRangeHandler:(id)arg1;
- (BOOL)bShouldNotInteruption;
- (void)setBShouldNotInteruption:(BOOL)arg1;
- (BOOL)bAutoTestMode;
- (void)setBAutoTestMode:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

