@interface FlutterSnsPlatformLanguagePlugin : NSObject <MMFlutterPlugin, PlatformLanguageApi, UIAdaptivePresentationControllerDelegate>
{
    id <SNSPluginDelegate> _delegate; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)translateSourceText:(id)arg1 completion:(id /* block */)arg2;
- (void)translateWithLanguageSelectionSourceText:(id)arg1 completion:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
