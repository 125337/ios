@interface WebDelayTransactionContext : MMObject
{
    MMWebViewController * _webViewVC; // +0x8
    MMWebViewKeepHolderMgr * _webKeeper; // +0x10
}
- (id)webViewVC;
- (void)setWebViewVC:(id)arg1;
- (id)webKeeper;
- (void)setWebKeeper:(id)arg1;
- (void).cxx_destruct;
@end

