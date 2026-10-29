@interface ExtDeviceService : MMUserService <PBMessageObserverDelegate, INewSyncExt, MMServiceProtocol>
{
    BOOL _xmlTestMode; // +0x8
    NSMutableDictionary * _callBackDict; // +0x10
    NSMutableDictionary * _deviceTicketInfo; // +0x18
    NSMutableDictionary * _pendingXiaoWeiConsents; // +0x20
    NSObject * _xiaoWeiConsentLock; // +0x28
}
+ (BOOL)enableMultiPlatformImpl;
+ (BOOL)enableSyncRecordImpl;
+ (BOOL)getSyncRecordTrigger:(unsigned int)arg1 iconType:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAppDidBecomeActive;
- (id)deviceTicketInfo;
- (void)enterLoggedDevicePageFrom:(id)arg1;
- (void)openFlutterExtDeviceLoginPageWithURL:(id)arg1 responseData:(id)arg2;
- (void)openUnlockPageWithUUID:(id)arg1;
- (void)syncRecordNotify:(id)arg1 args:(id)arg2 complete:(id /* block */)arg3;
- (void)sendStatusNotifyWithFunc:(id)arg1 complete:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addCallBack:(unsigned int)arg1 complete:(id /* block */)arg2;
- (void)callCallBack:(unsigned int)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)handleDeviceDetailNotify:(id)arg1 deviceUUID:(id)arg2 wording:(id)arg3;
- (BOOL)tryToHandleDeviceKey:(id)arg1;
- (void)jumpToDeviceDetailPage:(id)arg1;
- (BOOL)checkDeviceDetailHasHandled:(id)arg1;
- (id)getDeviceInfo:(id)arg1;
- (void)handleAutoLoginAPNSPushWithUsrInfo:(id)arg1;
- (void)onNewSyncRecordSync:(id)arg1;
- (void)onNewSyncChatbotMsgSync:(id)arg1;
- (void)handleChatbotSyncRecordsAuthReq:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 serverId:(long long)arg4 timestamp:(unsigned long long)arg5 bizType:(int)arg6;
- (BOOL)checkXiaoWeiSyncConsentHasHandled:(id)arg1;
- (void)showXiaoWeiSyncConsentViewController:(id)arg1 deviceName:(id)arg2 fromBackground:(BOOL)arg3;
- (void)sendXiaoWeiSyncConsentLocalNotification:(id)arg1 deviceName:(id)arg2;
- (void)sendChatbotSyncRecordsAuthResp:(id)arg1 result:(BOOL)arg2;
- (void)setXMLTestMode:(BOOL)arg1;
- (BOOL)obtainXMLTestMode;
- (id)callBackDict;
- (void)setCallBackDict:(id)arg1;
- (BOOL)xmlTestMode;
- (void)setXmlTestMode:(BOOL)arg1;
- (void)setDeviceTicketInfo:(id)arg1;
- (id)pendingXiaoWeiConsents;
- (void)setPendingXiaoWeiConsents:(id)arg1;
- (id)xiaoWeiConsentLock;
- (void)setXiaoWeiConsentLock:(id)arg1;
- (void).cxx_destruct;
@end
