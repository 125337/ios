@interface FlutterBizSharePlugin : NSObject <MMFlutterPlugin, BizShareApi>
{
    MMFlutterViewController * _viewController; // +0x8
    FlutterBizShareHandler * _flutterBizShareHandler; // +0x10
    id /* block */ _mpImageForwardPluginProvider; // +0x18
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)showShareMenuInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)forwardToFriendInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)getBizFlutterShareHandler;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)flutterBizShareHandler;
- (void)setFlutterBizShareHandler:(id)arg1;
- (id /* block */)mpImageForwardPluginProvider;
- (void)setMpImageForwardPluginProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
