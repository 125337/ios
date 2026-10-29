@interface LiteAppStoreExtKeyCallLiteAppConnectEventAdapter : MMObject <MMLiteAppStoreExt>
{
    id <WXCustomWebViewControllerProtocol> _webviewController; // +0x8
}
+ (id)shareInstance;
- (void)registerDelegate;
- (void)unRegisterDelegate;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (void).cxx_destruct;
@end

