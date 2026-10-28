@interface WXGMigrationClientMgr : MMUserService <ChatMigrationGetConnectInfoDelegate, WXGMigrationClientLogicDelegate, WXGMigrationClientEntryViewControllerDelegate, WXGMigrationImportMessageHelperDelegate, WXGMigrationClientGuideViewDelegate, WCImageFullScreeViewMgrExt, WCAccountAutoLoginControlLogicExt, MMServiceProtocol>
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
    BOOL _isPureOfflineMode; // +0x42
    BOOL _continueWhenSpaceNotEnough; // +0x43
    BOOL _isReportedStop; // +0x44
    unsigned short _server_port; // +0x46
    unsigned int _enterFrom; // +0x48
    NSString * _sessionId; // +0x50
    NSString * _selfDeviceId; // +0x58
    NSString * _peerDeviceId; // +0x60
    NSString * _server_id; // +0x68
    NSData * _server_key; // +0x70
    NSString * _server_hello; // +0x78
    NSString * _server_ok; // +0x80
    NSString * _server_ip; // +0x88
    NSArray * _sessionArray; // +0x90
    NSString * _pcName; // +0x98
    NSString * _wifiName; // +0xa0
    NSString * _selfWifiName; // +0xa8
    unsigned long long _notifyCode; // +0xb0
    unsigned long long _moreNeedSize; // +0xb8
    unsigned long long _inMemoryMigrationSize; // +0xc0
    unsigned long long _totalSessionSize; // +0xc8
    WXGMigrationClientGuideView * _clientGuideView; // +0xd0
}
+ (BOOL)isClientRestart;
- (id)init;
- (void)createPath;
- (unsigned long long)migrationSize;
- (void)setMigrationSize:(unsigned long long)arg1;
- (void)setMigrationSizeProgress:(float)arg1;
- (float)migrationSizeProgress;
- (BOOL)isPureOfflineMigrationEnable;
- (void)parseMigrationOptUrlFromScanQrcode:(id)arg1;
- (void)getInfoURLFromScanQRCode:(id)arg1;
- (void)resetToScanQrcode;
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
- (void)showImportFromOtherDeviceGuideView;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)onCloseGuideView;
- (void)onHideClientEntryViewController;
- (void)onMinimizeClientEntryViewController;
- (void)onCancelClientEntryViewController;
- (void)onCancelClientEntryVcAndShowMainVc;
- (void)onGetConnectInfoNotSameAccount;
- (void)onGetConnectInfo:(id)arg1;
- (void)onGetInfoByUrl:(id)arg1;
- (void)pauseLogic;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)reportFinishWithNotifyCode:(unsigned long long)arg1;
- (void)reportFinishWithResult:(unsigned int)arg1 withError:(id)arg2 notifyCode:(unsigned long long)arg3;
- (void)reportViewClick:(id)arg1;
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
- (unsigned int)enterFrom;
- (void)setEnterFrom:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)selfDeviceId;
- (void)setSelfDeviceId:(id)arg1;
- (id)peerDeviceId;
- (void)setPeerDeviceId:(id)arg1;
- (BOOL)isPureOfflineMode;
- (void)setIsPureOfflineMode:(BOOL)arg1;
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
- (id)clientGuideView;
- (void)setClientGuideView:(id)arg1;
- (BOOL)isReportedStop;
- (void)setIsReportedStop:(BOOL)arg1;
- (void).cxx_destruct;
@end
