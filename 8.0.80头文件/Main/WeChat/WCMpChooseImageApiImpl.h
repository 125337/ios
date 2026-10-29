@interface WCMpChooseImageApiImpl : NSObject <MMFlutterPlugin, MpChooseImageApi>
{
    WCMpChooseImageImpl * _currentImpl; // +0x8
    MMFlutterViewController * _viewController; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)chooseImageRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
