@interface WXGMigrationClientMgr : MMUserService <ChatMigrationGetConnectInfoDelegate, WXGMigrationClientLogicDelegate, WXGMigrationClientEntryViewControllerDelegate, WXGMigrationImportMessageHelperDelegate, WCImageFullScreeViewMgrExt, WCAccountAutoLoginControlLogicExt, MMServiceProtocol>
{
    BOOL m_isWorking; // +0x8
    id m_kickOutLogicObj; // +0x10
    SEL m_kickOutSel; // +0x18
    WXGMigrationClientEntryViewController * m_clientEntryViewController; // +0x20
    WXGMigrationClientLogic * m_clientLogic; // +0x28
    ChatMigrationGetConnectInfo * m_getConnectionInfo; // +0x30
    WXGMigrationImportMessageHelper * m_migrationImportMessageHelper; // +0x38
    BOOL m_canShowRescan; // +0x40
    BOOL m_bNeedReloadBanner; // +0x41
    BOOL _continueWhenSpaceNotEnough; // +0x42
    unsigned short _server_port; // +0x44
    NSString * _server_id; // +0x48
    NSData * _server_key; // +0x50
    NSString * _server_hello; // +0x58
    NSString * _server_ok; // +0x60
    NSString * _server_ip; // +0x68
    NSArray * _sessionArray; // +0x70
    NSString * _pcName; // +0x78
    NSString * _wifiName; // +0x80
    NSString * _selfWifiName; // +0x88
    unsigned long long _notifyCode; // +0x90
    unsigned long long _moreNeedSize; // +0x98
    unsigned long long _inMemoryMigrationSize; // +0xa0
    unsigned long long _totalSessionSize; // +0xa8
}
+ (BOOL)isClientRestart;
- (id)init;
- (void)createPath;
- (unsigned long long)migrationSize;
- (void)setMigrationSize:(unsigned long long)arg1;
- (void)setMigrationSizeProgress:(float)arg1;
- (float)migrationSizeProgress;
- (void)getInfoURLFromScanQRCode:(id)arg1;
- (void)startClientService;
- (void)stopClientService;
- (void)terminateClientService;
- (BOOL)isClientWorking;
- (BOOL)isHasDutyAndShowEntryViewController;
- (BOOL)isOnHotspot;
- (void)startImport;
- (void)stopImport;
- (void)cancelImport;
- (void)onMigrationNewImport;
- (void)onMigrationAllData;
- (void)clearClientTmpData;
- (void)onCancelMigrationUpdateSession;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
- (void)doLogoutAction;
- (BOOL)isLogout;
- (void)showClientEntryViewController;
- (BOOL)canShowRescanButton;
- (void)reloadBanner;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)onMinimizeClientEntryViewController;
- (void)onCancelClientEntryViewController;
- (void)onGetConnectInfoNotSameAccount;
- (void)onGetConnectInfo:(id)arg1;
- (void)pauseLogic;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)onClientLogicAlertCode:(unsigned long long)arg1;
- (void)onClientLogicNotifyCode:(unsigned long long)arg1;
- (void)onClientFirstPacketOK:(BOOL)arg1;
- (void)onClientProcessCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)onClientProcessCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientLogicCurrentTransferSpeed:(float)arg1;
- (void)onClientLogicTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (BOOL)isSameAccount:(id)arg1;
- (void)onMigrationStartImportMessage;
- (void)onMigrationStartOldVersionImportMessage;
- (void)onMigrationImportMessageError;
- (void)onMigrationImportSucessPrepare;
- (void)onMigrationImportMessageFinish;
- (void)onMigrationImportMessageCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)onMigrationImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)autoLoginLogic:(id)arg1 needInterruptKickOut:(id /* block */)arg2 withReplayKickOutSelector:(SEL)arg3;
- (id)getConnectDebugInfo;
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
- (void)setSessionArray:(id)arg1;
- (id)pcName;
- (void)setPcName:(id)arg1;
- (id)wifiName;
- (void)setWifiName:(id)arg1;
- (id)selfWifiName;
- (void)setSelfWifiName:(id)arg1;
- (unsigned long long)notifyCode;
- (unsigned long long)moreNeedSize;
- (void)setMoreNeedSize:(unsigned long long)arg1;
- (unsigned long long)inMemoryMigrationSize;
- (void)setInMemoryMigrationSize:(unsigned long long)arg1;
- (unsigned long long)totalSessionSize;
- (void)setTotalSessionSize:(unsigned long long)arg1;
- (BOOL)continueWhenSpaceNotEnough;
- (void)setContinueWhenSpaceNotEnough:(BOOL)arg1;
- (void).cxx_destruct;
@end

