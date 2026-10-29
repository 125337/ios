@interface ChatBotAsstVoIPFlutterEngine : NSObject
{
    MMFlutterViewController * _flutterVC; // +0x8
    MMFlutterInstance * _flutterInstance; // +0x10
    NSObject<FlutterNavigatorDelegate> * _navigatorDelegate; // +0x18
}
+ (id)sharedEngine;
- (id)launchWithCallId:(id)arg1;
- (void)tearDown;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)navigatorDelegate;
- (void)setNavigatorDelegate:(id)arg1;
- (void).cxx_destruct;
@end
