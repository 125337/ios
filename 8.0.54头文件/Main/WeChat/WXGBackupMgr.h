@interface WXGBackupMgr : MMUserService <IMsgExt, MMKernelExt, ChatMigrationGetConnectInfoDelegate, WXGBackupLogicDelegate, WCBackupEntryViewControllerDelegate, WCPCMigrationEntryViewControllerDelegate, WXGBackupImportMessageHelperDelegate, WCImageFullScreeViewMgrExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    unsigned long long m_sessionCount; // +0x8
    unsigned long long m_msgCount; // +0x10
    unsigned long long m_dataSize; // +0x18
    NSString * deviceName; // +0x20
    NSString * vendorID; // +0x28
    unsigned int wechatVersion; // +0x30
    BOOL m_bShouldNotInterruption; // +0x34
    BOOL m_checkState; // +0x35
    BOOL m_bNeedReloadBanner; // +0x36
    BOOL _supportTimeSelect; // +0x37
    BOOL _supportReconnect; // +0x38
    BOOL _supportQuickBackup; // +0x39
    BOOL _supportFileFilter; // +0x3a
    unsigned short _server_port; // +0x3c
    NSString * _server_id; // +0x40
    NSData * _server_key; // +0x48
    NSString * _server_hello; // +0x50
    NSString * _server_ok; // +0x58
    NSString * _server_ip; // +0x60
    NSArray * _sessionArray; // +0x68
    NSString * _pcName; // +0x70
    NSString * _wifiName; // +0x78
    NSString * _selfWifiName; // +0x80
    unsigned long long _inMemoryMigrationSize; // +0x88
    unsigned long long _notifyCode; // +0x90
    long long _mediaFormatSupport; // +0x98
    WCBackupEntryViewController * _brEntryVC; // +0xa0
    WCPCMigrationEntryViewController * _pcmEntryVC; // +0xa8
    WXGBackupLogic * _backupLogic; // +0xb0
    WXGBackupImportMessageHelper * _importMessageHelper; // +0xb8
    ChatMigrationGetConnectInfo * _getConnectionInfo; // +0xc0
    unsigned long long _pairType; // +0xc8
}
+ (BOOL)isNotifyStateCanReenter:(unsigned long long)arg1;
- (BOOL)isBackupRecoverState;
- (BOOL)isPCMigrationState;
- (unsigned long long)backupState;
- (void)setBackupState:(unsigned long long)arg1;
- (unsigned long long)migrationSize;
- (void)setMigrationSize:(unsigned long long)arg1;
- (void)setBackupMigrationFilterSize:(unsigned long long)arg1;
- (unsigned long long)backupMigrationFilterSize;
- (void)setMigrationSizeProgress:(float)arg1;
- (float)migrationSizeProgress;
- (void)setSessionID:(id)arg1;
- (id)sessionID;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)p_clearBackupInfo;
- (BOOL)isHasDutyAndShowEntryViewController;
- (void)checkState;
- (void)showMigratePCSelection;
- (void)showEntryViewController;
- (void)showMigrationEntryViewController;
- (void)showBackupEntryViewController;
- (void)reloadBanner;
- (void)removeBanner;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)startLogic;
- (void)stopLogic;
- (void)terminateLogic;
- (void)confirmLogic;
- (void)cancelLogic;
- (void)restartLogic;
- (void)pauseLogic;
- (void)startBackupImport:(BOOL)arg1;
- (void)startMigrationImport:(BOOL)arg1;
- (void)startImport:(BOOL)arg1 importType:(unsigned long long)arg2;
- (void)stopImport;
- (void)cancelImport;
- (void)finishAndUpdateSession;
- (void)p_setShouldNotInterruption;
- (void)p_setCanInterrutpion;
- (void)cleanBackupData;
- (BOOL)isBackupMgrWorking;
- (void)setSessionArray:(id)arg1;
- (id)getAllSessionArray;
- (unsigned long long)getSessionCount;
- (unsigned long long)getMsgCount;
- (void)setDataSize:(unsigned long long)arg1;
- (unsigned long long)getDataSize;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getConnectURL:(id)arg1;
- (void)onGetConnectInfoNotSameAccount;
- (void)onGetConnectInfo:(id)arg1;
- (BOOL)isSameAccount:(id)arg1;
- (BOOL)isSameNetGateWay:(id)arg1;
- (void)extensionProcessNotifyCode:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)onMinimizeEntryViewController;
- (void)onCancelEntryViewController;
- (void)onBackupLogicNotify:(unsigned long long)arg1;
- (id)getProgress;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onBackupLogicAlert:(unsigned long long)arg1;
- (void)onFirstPacketOK:(BOOL)arg1;
- (void)onBackupImportMessageStart;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessagePrepareFinish;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)showLocalNotification;
- (void)onAuthOK;
- (void)onKickQuit;
- (void)onManulLogOut;
- (void)notifyToPause;
- (void)notifyToContinue;
- (void)notifyMigrateToPC;
- (void)notifyMigrateToMobile;
- (void)notifyToClose;
- (void)p_sendStatusNotify:(int)arg1;
- (void)p_sendStatusNotify:(int)arg1 withFunction:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getConnectDebugInfo;
- (void)report26824Type0:(id)arg1;
- (void)report26824Type1:(id)arg1;
- (void)report26824:(id)arg1;
- (void)unireport26824:(id)arg1;
- (void)reportDataReconciliation:(id)arg1;
- (id)server_id;
- (void)setServer_id:(id)arg1;
- (id)server_key;
- (void)setServer_key:(id)arg1;
- (id)server_hello;
- (void)setServer_hello:(id)arg1;
- (id)server_ok;
- (void)setServer_ok:(id)arg1;
- (id)server_ip;
- (void)setServer_ip:(id)arg1;
- (unsigned short)server_port;
- (void)setServer_port:(unsigned short)arg1;
- (id)sessionArray;
- (id)pcName;
- (void)setPcName:(id)arg1;
- (id)wifiName;
- (void)setWifiName:(id)arg1;
- (id)selfWifiName;
- (void)setSelfWifiName:(id)arg1;
- (unsigned long long)inMemoryMigrationSize;
- (void)setInMemoryMigrationSize:(unsigned long long)arg1;
- (unsigned long long)notifyCode;
- (BOOL)supportTimeSelect;
- (void)setSupportTimeSelect:(BOOL)arg1;
- (BOOL)supportReconnect;
- (void)setSupportReconnect:(BOOL)arg1;
- (BOOL)supportQuickBackup;
- (void)setSupportQuickBackup:(BOOL)arg1;
- (BOOL)supportFileFilter;
- (void)setSupportFileFilter:(BOOL)arg1;
- (long long)mediaFormatSupport;
- (void)setMediaFormatSupport:(long long)arg1;
- (id)brEntryVC;
- (void)setBrEntryVC:(id)arg1;
- (id)pcmEntryVC;
- (void)setPcmEntryVC:(id)arg1;
- (id)backupLogic;
- (void)setBackupLogic:(id)arg1;
- (id)importMessageHelper;
- (void)setImportMessageHelper:(id)arg1;
- (id)getConnectionInfo;
- (void)setGetConnectionInfo:(id)arg1;
- (unsigned long long)pairType;
- (void)setPairType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

