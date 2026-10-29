@interface MMMultiSceneReporter : MMUserService <MMWebViewControllerExtention, MMServiceProtocol>
{
    long long _preScene; // +0x8
    long long _lastScene; // +0x10
    NSString * _lastSceneInfo; // +0x18
    long long _lastAction; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportAction:(long long)arg1 scene:(long long)arg2 bizInfo:(id)arg3;
- (void)reportAction:(long long)arg1 scene:(long long)arg2;
- (void)reportAction:(long long)arg1;
- (BOOL)needBizInfo:(long long)arg1;
- (void)EX_WebViewControllerDidAppear:(id)arg1;
- (long long)preScene;
- (void)setPreScene:(long long)arg1;
- (long long)lastScene;
- (void)setLastScene:(long long)arg1;
- (id)lastSceneInfo;
- (void)setLastSceneInfo:(id)arg1;
- (long long)lastAction;
- (void)setLastAction:(long long)arg1;
- (void).cxx_destruct;
@end

