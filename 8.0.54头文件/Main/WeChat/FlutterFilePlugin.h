@interface FlutterFilePlugin : NSObject <MMFlutterPlugin, FlutterFileHost>
- (void)onAttachedToEngine:(id)arg1;
- (void)createDirectoryPath:(id)arg1 recursive:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)createFilePath:(id)arg1 completion:(id /* block */)arg2;
- (id)getDefaultImageCacheDirectoryWithError:(id *)arg1;
- (id)getRealPathPath:(id)arg1 error:(id *)arg2;
- (id)getGeneralCacheDirectoryWithError:(id *)arg1;
- (id)getStreamProfilerDirectoryRelease:(BOOL)arg1 error:(id *)arg2;
@end

