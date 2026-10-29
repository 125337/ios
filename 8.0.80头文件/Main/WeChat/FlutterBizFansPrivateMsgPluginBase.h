@interface FlutterBizFansPrivateMsgPluginBase : NSObject <BrandFansMsgSessionMgrExt, BrandFansContactMgrExt, PrivateMsgHostApi, FlutterPlugin, MMFlutterPlugin>
{
    id <BizFansStorageProvider> _provider; // +0x8
    MMFlutterViewController * _currentViewController; // +0x10
    BizFansPrivateMsgCallbackApi * _bizPrivateMsgCallbackApi; // +0x18
    NSString * _curBizuin; // +0x20
}
- (id)initWithProvider:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)getPrivateMsgSessionListBizuin:(id)arg1 completion:(id /* block */)arg2;
- (void)getPrivateMsgUnreadCountBizuin:(id)arg1 completion:(id /* block */)arg2;
- (void)openPrivateMsgChatSessionId:(id)arg1 bizuin:(id)arg2 completion:(id /* block */)arg3;
- (void)deletePrivateMsgSessionSessionId:(id)arg1 bizuin:(id)arg2 completion:(id /* block */)arg3;
- (void)onPrivateMsgSettingChangedBizuin:(id)arg1 redDotEnable:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)clearGreetBoxRedDotServiceType:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)checkIsLoginBiz:(id)arg1;
- (id)privateMsgSessionInfoFromSessionInfo:(id)arg1 bizuin:(id)arg2;
- (id)privateMsgSessionInfoFromGreetBox:(id)arg1 bizuin:(id)arg2;
- (id)privateMsgSessionInfoFromNotification:(id)arg1 officialUnreadCount:(long long)arg2;
- (id)emptyOfficialSessionWithUnreadCount:(long long)arg1;
- (void)onSessionChangedAndNotifyFlutterWithSessionId:(id)arg1;
- (void)onBrandMsgNotificationUpdatedForBizuin:(id)arg1 notification:(id)arg2;
- (void)onBrandFansMsgSessionUpdatedForBizuin:(id)arg1 sessionId:(id)arg2;
- (void)onClearAllUnreadCountForBizuin:(id)arg1;
- (void)onGreetBoxUpdatedForBizuin:(id)arg1 bizType:(int)arg2 greetBox:(id)arg3;
- (void)brandFansContactUpdatedForOpenID:(id)arg1 contact:(id)arg2;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)bizPrivateMsgCallbackApi;
- (void)setBizPrivateMsgCallbackApi:(id)arg1;
- (id)curBizuin;
- (void)setCurBizuin:(id)arg1;
- (void).cxx_destruct;
@end
