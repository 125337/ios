@interface FlutterMailerPlugin : NSObject <FlutterPlugin, MFMailComposeViewControllerDelegate>
+ (void)registerWithRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
@end
