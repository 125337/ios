@interface FLTPathProviderPlugin : NSObject <FLTPathProviderApi, FlutterPlugin>
+ (void)registerWithRegistrar:(id)arg1;
- (id)getApplicationDocumentsPathWithError:(id *)arg1;
- (id)getApplicationSupportPathWithError:(id *)arg1;
- (id)getLibraryPathWithError:(id *)arg1;
- (id)getTemporaryPathWithError:(id *)arg1;
@end

