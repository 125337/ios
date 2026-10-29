@interface FlutterSnsProfilePlugin : NSObject <MMFlutterPlugin, PlatformProfileApi>
{
    MMFlutterViewController * _viewController; // +0x8
    id <SNSPluginDelegate> _delegate; // +0x10
    FlutterEngine * _engine; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)jumpToProfileUserName:(id)arg1 scene:(id)arg2 error:(id *)arg3;
- (unsigned int)contactInfoFromSceneWithSnsScene:(id)arg1;
- (void)getOpenImLabelUserName:(id)arg1 completion:(id /* block */)arg2;
- (void)getSignatureUserName:(id)arg1 completion:(id /* block */)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (void).cxx_destruct;
@end
