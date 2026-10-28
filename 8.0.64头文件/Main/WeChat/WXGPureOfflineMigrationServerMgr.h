@interface WXGPureOfflineMigrationServerMgr : MMUserService <WXGPureOfflineMigrationServerViewControllerDelegate, WXGPureOfflineMigrationServerLogicDelegate, MMServiceProtocol>
{
    BOOL _isAllTime; // +0x8
    BOOL _isTextOnly; // +0x9
    BOOL _isServerRunning; // +0xa
    BOOL _isUserLogin; // +0xb
    unsigned short _serverPort; // +0xc
    NSString * _serverIp; // +0x10
    NSString * _authId; // +0x18
    NSString * _authHello; // +0x20
    NSString * _authOk; // +0x28
    NSData * _authKey; // +0x30
    NSDictionary * _sessionDict; // +0x38
    unsigned long long _totalMsgCount; // +0x40
    unsigned long long _totalSessionSize; // +0x48
    WXGPureOfflineMigrationServerViewController * _pomsVc; // +0x50
    WXGPureOfflineMigrationServerLogic * _serverLogic; // +0x58
    NSString * _qrcodeUrl; // +0x60
    NSString * _hashUserNameFromPeer; // +0x68
    NSString * _pcName; // +0x70
    NSString * _wifiName; // +0x78
    unsigned long long _notifyCode; // +0x80
}
+ (BOOL)isKeepScreenOn;
+ (void)ensureValidContext;
- (void)onServiceInit;
- (void)dealloc;
- (void)resetData;
- (void)updateSessionArray:(id)arg1;
- (void)onNotifyCodeChange:(unsigned long long)arg1;
- (void)showPureOfflineMigration:(id)arg1;
- (void)getQrcodeImage;
- (void)onGetQrcode:(id)arg1;
- (void)onCheckQrcodeBind:(int)arg1 hashUserName:(id)arg2;
- (void)onCloseCurrentViewController;
- (void)onNotifyCodeTo:(unsigned long long)arg1;
- (void)startServerService;
- (void)stopServerService;
- (void)pauseLogic;
- (void)clearServerAllTmpData;
- (BOOL)isServerWorking;
- (void)startTransfer;
- (void)chooseMigrationRange:(BOOL)arg1;
- (void)onChooseUser:(id)arg1;
- (void)onChooseUserOnMainThread:(id)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
- (void)onServerLogicTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (id)serverIp;
- (void)setServerIp:(id)arg1;
- (unsigned short)serverPort;
- (void)setServerPort:(unsigned short)arg1;
- (id)authId;
- (void)setAuthId:(id)arg1;
- (id)authHello;
- (void)setAuthHello:(id)arg1;
- (id)authOk;
- (void)setAuthOk:(id)arg1;
- (id)authKey;
- (void)setAuthKey:(id)arg1;
- (id)sessionDict;
- (unsigned long long)totalMsgCount;
- (unsigned long long)totalSessionSize;
- (BOOL)isAllTime;
- (void)setIsAllTime:(BOOL)arg1;
- (BOOL)isTextOnly;
- (void)setIsTextOnly:(BOOL)arg1;
- (id)pomsVc;
- (void)setPomsVc:(id)arg1;
- (id)serverLogic;
- (void)setServerLogic:(id)arg1;
- (BOOL)isServerRunning;
- (void)setIsServerRunning:(BOOL)arg1;
- (id)qrcodeUrl;
- (void)setQrcodeUrl:(id)arg1;
- (id)hashUserNameFromPeer;
- (void)setHashUserNameFromPeer:(id)arg1;
- (id)pcName;
- (void)setPcName:(id)arg1;
- (id)wifiName;
- (void)setWifiName:(id)arg1;
- (unsigned long long)notifyCode;
- (void)setNotifyCode:(unsigned long long)arg1;
- (BOOL)isUserLogin;
- (void)setIsUserLogin:(BOOL)arg1;
- (void).cxx_destruct;
@end
