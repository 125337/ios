@interface FlutterPAGPlugin : NSObject <FlutterPlugin, PAGViewApi>
{
    NSObject<FlutterTextureRegistry> * _registry; // +0x8
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x10
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x18
    NSMutableDictionary * _controllerMap; // +0x20
}
+ (void)setLogFunc:(id /* block */)arg1;
+ (void)registerWithRegistry:(id)arg1;
+ (void)registerWithRegistrar:(id)arg1;
- (id)initWithRegistry:(id)arg1 registrar:(id)arg2 messenger:(id)arg3;
- (void)dealloc;
- (void)createInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)pagViewStartPlayPagId:(long long)arg1 error:(id *)arg2;
- (id)pagViewStopPagId:(long long)arg1 error:(id *)arg2;
- (void)pagViewReleasePagId:(long long)arg1 error:(id *)arg2;
- (id)replaceImagePagId:(long long)arg1 index:(long long)arg2 filepath:(id)arg3 error:(id *)arg4;
- (id)setSolidLayerColorPagId:(long long)arg1 name:(id)arg2 color:(long long)arg3 error:(id *)arg4;
- (id)flushPagId:(id)arg1 error:(id *)arg2;
- (void)flushPagId:(long long)arg1 completion:(id /* block */)arg2;
- (void)seekPagId:(long long)arg1 timeMs:(long long)arg2 error:(id *)arg3;
- (id)replaceTextPagId:(long long)arg1 index:(long long)arg2 text:(id)arg3 error:(id *)arg4;
- (id)registry;
- (id)registrar;
- (id)messenger;
- (id)controllerMap;
- (void).cxx_destruct;
@end
