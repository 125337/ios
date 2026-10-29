@interface WXGMigrationServerMgr : MMUserService <ChatMigrationCreateQRCodeDelegate, WXGMigrationServerLogicDelegate, WXGMigrationServerEntryViewControllerDelegate, WCAccountAutoLoginControlLogicExt, WXGMigrationMainViewControllerDelegate, MMServiceProtocol>
{
    WXGMigrationServerEntryViewController * m_serverEntryViewController; // +0x8
    WXGMigrationMainViewController * mgViewController; // +0x10
    id m_kickOutLogicObj; // +0x18
    SEL m_kickOutSel; // +0x20
    BOOL m_isWorking; // +0x28
    WXGMigrationServerLogic * m_serverLogic; // +0x30
    ChatMigrationCreateQRCode * m_qrCodeHandler; // +0x38
    unsigned short _server_port; // +0x40
    unsigned int _cryptUin; // +0x44
    NSString * _server_id; // +0x48
    NSData * _server_key; // +0x50
    NSString * _server_hello; // +0x58
    NSString * _server_ok; // +0x60
    NSString * _server_ip; // +0x68
    NSString * _server_ticket; // +0x70
    NSArray * _sessionArray; // +0x78
    unsigned long long _totalMsgCount; // +0x80
    unsigned long long _totalSessionSize; // +0x88
    NSString * _pcName; // +0x90
    NSString * _pcAccouttName; // +0x98
    NSString * _wifiName; // +0xa0
    NSString * _selfWifiName; // +0xa8
    unsigned long long _inMemoryMigrationSize; // +0xb0
    unsigned long long _notifyCode; // +0xb8
    unsigned long long _entryOpenType; // +0xc0
}
- (id)init;
- (void)resetServerState;
- (void)setSessionArray:(id)arg1;
- (id)getAllSessionArray;
- (unsigned long long)migrationSize;
- (void)setMigrationSize:(unsigned long long)arg1;
- (void)setMigrationSizeProgress:(float)arg1;
- (float)migrationSizeProgress;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
- (void)doLogoutAction;
- (BOOL)isLogout;
- (void)notifyWaitToSelect;
- (void)notifyWaitToMigration;
- (void)notifyWaitLoadingData;
- (void)notifyGetQRCodeFailed;
- (void)showMigrationViewController;
- (void)outerShowMigrationViewController;
- (void)innerShowMigrationViewController;
- (void)onMinimizeServerEntryViewController;
- (void)onCancelServerEntryViewController;
- (void)onFinishServerEntryViewController;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
- (void)onServerLogicAlertCode:(unsigned long long)arg1;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)startServerService;
- (void)stopServerService;
- (void)pauseLogic;
- (BOOL)isServerWorking;
- (void)clearServerAllTmpData;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)resetGetQRCodeImage;
- (void)getQRCodeImage;
- (void)p_getQRCodeImageOnline;
- (void)p_getQRCodeImageOffline;
- (void)onGetQRCode:(id)arg1;
- (void)onGetQRCodeOffline:(id)arg1;
- (void)autoLoginLogic:(id)arg1 needInterruptKickOut:(id /* block */)arg2 withReplayKickOutSelector:(SEL)arg3;
- (void)onMinimizeEntryViewController;
- (void)onCancelEntryViewController;
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
- (id)server_ticket;
- (void)setServer_ticket:(id)arg1;
- (unsigned int)cryptUin;
- (void)setCryptUin:(unsigned int)arg1;
- (unsigned short)server_port;
- (void)setServer_port:(unsigned short)arg1;
- (id)sessionArray;
- (unsigned long long)totalMsgCount;
- (void)setTotalMsgCount:(unsigned long long)arg1;
- (unsigned long long)totalSessionSize;
- (void)setTotalSessionSize:(unsigned long long)arg1;
- (id)pcName;
- (void)setPcName:(id)arg1;
- (id)pcAccouttName;
- (void)setPcAccouttName:(id)arg1;
- (id)wifiName;
- (void)setWifiName:(id)arg1;
- (id)selfWifiName;
- (void)setSelfWifiName:(id)arg1;
- (unsigned long long)inMemoryMigrationSize;
- (void)setInMemoryMigrationSize:(unsigned long long)arg1;
- (unsigned long long)notifyCode;
- (unsigned long long)entryOpenType;
- (void)setEntryOpenType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

