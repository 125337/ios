@interface FlutterUploadPlugin : NSObject <MMFlutterPlugin, FlutterUploadHost>
- (void)onAttachedToEngine:(id)arg1;
- (void)uploadFilePath:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
@end
