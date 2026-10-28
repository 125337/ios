@interface WCWatchNativeMgr : MMUserService <WCSessionDelegate, PBMessageObserverDelegate, MMKernelExt, INetworkStatusMgrExt, IContactMgrExt, IMsgExt, IMMNewSessionMgrExt, IChatBoxMgrExt, IExptServiceExt, MMServiceProtocol>
{
    BOOL _isRefreshingSessionKey; // +0x8
    BOOL _needRefreshSessionKey; // +0x9
    BOOL _didHandledOpenURLSinceEnterForeground; // +0xa
    BOOL _reachable; // +0xb
    BOOL _isWatchRunning; // +0xc
    unsigned int _watchXLabSwitch; // +0x10
    unsigned int _globalXLabSwitch; // +0x14
    WCSession * _session; // +0x18
    NSObject<OS_dispatch_queue> * _watchSessionQueue; // +0x20
    NSMutableArray * _pendingSignalMessages; // +0x28
    NSDictionary * _latestContact; // +0x30
    NSDictionary * _recentContactDic; // +0x38
    NSDate * _setupDate; // +0x40
    NSString * _userXLabConfiguration; // +0x48
    MemoryMappedKV * _mappedKV; // +0x50
}
- (id)transferUserInfo:(id)arg1;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (void)transferCachedImage:(id)arg1 forURLString:(id)arg2;
- (void)transferCachedImage:(id)arg1 forURLString:(id)arg2 progress:(float)arg3;
- (void)transferInitDataForWatch;
- (void)logStatsWCSessionFile:(id)arg1;
- (void)logReportsWCSessionFile:(id)arg1;
- (void)statCodePayData:(unsigned int)arg1 byFile:(id)arg2;
- (void)statActiveData:(unsigned int)arg1 systemVersion:(id)arg2 byFile:(id)arg3;
- (void)statDurationData:(unsigned int)arg1 systemVersion:(id)arg2 byFile:(id)arg3;
- (void)reportActiveData:(unsigned int)arg1 byFile:(id)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)isPairedWatch;
- (id)mappedKV;
- (id)pendingSignalMessages;
- (void)setLastReachableDate:(id)arg1;
- (id)lastReachableDate;
- (BOOL)requestSessionKeyWaitForAuthOk;
- (void)setRequestSessionKeyWaitForAuthOk:(BOOL)arg1;
- (id)requestSessionKeyId;
- (void)setRequestSessionKeyId:(id)arg1;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)willHandleOpenURL:(id)arg1;
- (id)session;
- (void)setupSession;
- (void)sendPairedInfoToServer;
- (id)dictionaryFromContact:(id)arg1 sessionLastTime:(unsigned int)arg2;
- (id)dictionaryFromDBMsg:(id)arg1 chatName:(id)arg2;
- (id)getRecentContactsInfosForWatch;
- (void)handleUpdateQuickReplies:(id)arg1;
- (void)_handleDeviceIdFromWatch:(id)arg1;
- (void)enterBackground:(id)arg1;
- (BOOL)handleUserActivty:(id)arg1 restorationHandler:(id /* block */)arg2;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveFile:(id)arg2;
- (void)requestUploadLogWithTimeSpan:(id)arg1;
- (void)_handleSessionUserInfo:(id)arg1;
- (void)callbackSessionKeyRequest:(BOOL)arg1;
- (void)_handleSessionMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isSessionKeyCached;
- (void)checkAndRefreshSessionKeyIfNeed;
- (BOOL)getExtensionKeyForceRefresh:(BOOL)arg1;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned int)arg2;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)logoutWatch;
- (void)onKickQuit;
- (void)onPreQuit;
- (void)onPostQuit;
- (void)onAuthOK;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)displaySignalMessageWithDelay:(id)arg1;
- (void)displayAllPendingSignalMessages;
- (unsigned int)replyYoTo:(id)arg1 observer:(id)arg2;
- (id)hookConfDic;
- (void)updateApplicationContextIfCould:(unsigned long long)arg1;
- (id)settingDicWithCurCSetting:(id)arg1;
- (unsigned int)watchXLabSwitchValue;
- (unsigned int)globalXLabSwitchValue;
- (id)GetUserXLabConfiguration;
- (BOOL)isWatchAppInstalled;
- (BOOL)isNotificationActionFromWatch:(id)arg1;
- (BOOL)isWatchRecentReachable;
- (void)debugLog:(id)arg1;
- (BOOL)isValidContactForWatch:(id)arg1;
- (BOOL)dnsHostForWatch;
- (void)checkAndRefreshHostIfNeeded;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(BOOL)arg2;
- (void)onSessionChatBoxTypeChange:(id)arg1 inChatBox:(BOOL)arg2;
- (void)onExptItemListChange;
- (void)mockRequestNewSession;
- (void)setSession:(id)arg1;
- (id)watchSessionQueue;
- (void)setWatchSessionQueue:(id)arg1;
- (BOOL)reachable;
- (BOOL)isWatchRunning;
- (void)setPendingSignalMessages:(id)arg1;
- (id)latestContact;
- (void)setLatestContact:(id)arg1;
- (id)recentContactDic;
- (void)setRecentContactDic:(id)arg1;
- (id)setupDate;
- (void)setSetupDate:(id)arg1;
- (unsigned int)watchXLabSwitch;
- (void)setWatchXLabSwitch:(unsigned int)arg1;
- (unsigned int)globalXLabSwitch;
- (void)setGlobalXLabSwitch:(unsigned int)arg1;
- (id)userXLabConfiguration;
- (void)setUserXLabConfiguration:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end
