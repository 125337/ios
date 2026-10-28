@interface PublicWifiManager : MMUserService <APAuthDelegate, APCheckDelegate, APAccessDelegate, APProtalDelegate, INetworkStatusMgrExt, APCheckPwdDelegate, MMServiceProtocol, MMKernelExt, MMWebViewDelegate>
{
    BOOL _isOnWifi; // +0x8
    BOOL _isRegisterHotspotInterface; // +0x9
    BOOL _isWifiChanged; // +0xa
    BOOL _hasDoWifiManager; // +0xb
    BOOL _isWaitingUserConfirm; // +0xc
    BOOL _isOpenUrlProcessing; // +0xd
    BOOL _isWaitingBindPhone; // +0xe
    unsigned int _gAnnotationSwith; // +0x10
    unsigned int _annotationExpire; // +0x14
    NSString * _currSSID; // +0x18
    NSString * _currMAC; // +0x20
    PublicWifiCache * _cache; // +0x28
    CContact * _currContact; // +0x30
    NSArray * _networkList; // +0x38
    APAuth * _apAuth; // +0x40
    APCheck * _apCheck; // +0x48
    APAccess * _apAccess; // +0x50
    APCheckPwd * _apCheckPwd; // +0x58
    APPortal * _apPortal; // +0x60
    APCheckPwd * _successedPwd; // +0x68
    APPortal * _successedPortal; // +0x70
    MMWebViewController * _abroadApAuthWebViewController; // +0x78
    MMUIViewController * _connectWebViewControler; // +0x80
    NSString * _proto4ToConnectSSID; // +0x88
    NSString * _proto4ToConnectPassword; // +0x90
    NSMutableDictionary * _knownProtocol3HotspotsList; // +0x98
}
- (void)dealloc;
- (id)init;
- (void)setCurrContact:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onAuthOK;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)handleOffWifi;
- (BOOL)isUserStayOnConnectingView;
- (id)getAbroadApAuthUrlWithSSID:(id)arg1;
- (void)resetWaitingFlagWhenFailed;
- (void)webViewReturn:(id)arg1;
- (void)didStartApAuth:(id)arg1;
- (void)didSuccessOfApAuth:(id)arg1;
- (void)didFailOfApAuth:(id)arg1 withErrCode:(int)arg2;
- (void)didExpiredOfApAuth:(id)arg1;
- (void)didReadyOfApPortal:(id)arg1;
- (void)didStartApPortal:(id)arg1;
- (void)didSuccessOfAPPortal:(id)arg1;
- (void)didFailOfAPPortal:(id)arg1 errMsg:(id)arg2;
- (void)didSuccessOfApCheck:(id)arg1;
- (void)didFailOfApCheck:(id)arg1 withErrCode:(int)arg2;
- (void)didReadyWithApCheckPwd:(id)arg1 protolType:(unsigned int)arg2;
- (void)didRunningOfApCheckPwd:(id)arg1;
- (void)didSuccessOfApCheckPwd:(id)arg1;
- (void)gotoApAuthWithApCheckPwd:(id)arg1 protolType:(unsigned int)arg2;
- (void)gotoApPortalWithApCheckPwd:(id)arg1 tid:(id)arg2 openId:(id)arg3 appid:(id)arg4;
- (void)gotoFrontPageWithApPortal:(id)arg1;
- (void)didFailedWithApCheckPwd:(id)arg1 errorMsg:(id)arg2;
- (void)onPublicWifiApInfoViewContorllerWillGoBack;
- (void)userConfirm;
- (int)stateOfApAuth;
- (id)ssidOfApAuth;
- (BOOL)shouldOpenWebview;
- (id)showUrlOfCurrApAuth;
- (void)cleanCache;
- (void)logout;
- (void)showBindPhoneViewFromFrontPage;
- (BOOL)isBindAboardPhone;
- (void)refreshApAuthPageIfNeed;
- (void)showGuidePageAfterScanQrCodeOfApPortal;
- (void)showErrorViewControllerWithErrMsg:(id)arg1 fromViewContorller:(id)arg2;
- (void)sendCloseEventToObserver;
- (void)delayConfig;
- (void)registerHotspotHelper;
- (BOOL)isHotspotValidAndInList:(id)arg1 macAddr:(id)arg2;
- (id)forgroundAppTask;
- (id)currSSID;
- (void)setCurrSSID:(id)arg1;
- (id)currMAC;
- (void)setCurrMAC:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (BOOL)isOnWifi;
- (void)setIsOnWifi:(BOOL)arg1;
- (id)currContact;
- (unsigned int)gAnnotationSwith;
- (void)setGAnnotationSwith:(unsigned int)arg1;
- (id)networkList;
- (void)setNetworkList:(id)arg1;
- (BOOL)isRegisterHotspotInterface;
- (void)setIsRegisterHotspotInterface:(BOOL)arg1;
- (BOOL)isWifiChanged;
- (void)setIsWifiChanged:(BOOL)arg1;
- (BOOL)hasDoWifiManager;
- (void)setHasDoWifiManager:(BOOL)arg1;
- (unsigned int)annotationExpire;
- (void)setAnnotationExpire:(unsigned int)arg1;
- (BOOL)isWaitingUserConfirm;
- (void)setIsWaitingUserConfirm:(BOOL)arg1;
- (BOOL)isOpenUrlProcessing;
- (void)setIsOpenUrlProcessing:(BOOL)arg1;
- (id)apAuth;
- (void)setApAuth:(id)arg1;
- (id)apCheck;
- (void)setApCheck:(id)arg1;
- (id)apAccess;
- (void)setApAccess:(id)arg1;
- (id)apCheckPwd;
- (void)setApCheckPwd:(id)arg1;
- (id)apPortal;
- (void)setApPortal:(id)arg1;
- (BOOL)isWaitingBindPhone;
- (void)setIsWaitingBindPhone:(BOOL)arg1;
- (id)successedPwd;
- (void)setSuccessedPwd:(id)arg1;
- (id)successedPortal;
- (void)setSuccessedPortal:(id)arg1;
- (id)abroadApAuthWebViewController;
- (void)setAbroadApAuthWebViewController:(id)arg1;
- (id)connectWebViewControler;
- (void)setConnectWebViewControler:(id)arg1;
- (id)proto4ToConnectSSID;
- (void)setProto4ToConnectSSID:(id)arg1;
- (id)proto4ToConnectPassword;
- (void)setProto4ToConnectPassword:(id)arg1;
- (id)knownProtocol3HotspotsList;
- (void)setKnownProtocol3HotspotsList:(id)arg1;
- (void).cxx_destruct;
@end
