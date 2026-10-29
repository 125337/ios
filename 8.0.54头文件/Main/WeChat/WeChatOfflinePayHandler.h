@interface WeChatOfflinePayHandler : NSObject <IPreEnterWechatLogicExt, WCShareAuthViewControllerDelegate, WCPaySDKOpenOfflinePayControlLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
    WCShareAuthViewController * _authVC; // +0x10
}
- (id)init;
- (void)startWeChatOfflinePay:(id)arg1;
- (void)cancelWeChatOfflinePay;
- (void)onPreEnterWechatDone;
- (void)startOfflinePay;
- (void)startAuth;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (id)makeBizCustomLinkIfNeed;
- (void)onSDKOpenOfflinePayLogicDidStop;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)authVC;
- (void)setAuthVC:(id)arg1;
- (void).cxx_destruct;
@end

