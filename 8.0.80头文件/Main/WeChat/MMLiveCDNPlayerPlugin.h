@interface MMLiveCDNPlayerPlugin : NSObject <FlutterPlatformViewFactory, MMFlutterPlugin, LiveCDNPlayerApi>
{
    NSMapTable * _playerContainers; // +0x8
    FlutterEngine * _engine; // +0x10
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x18
}
- (id)init;
- (void)destroy;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (void)startPlayViewId:(long long)arg1 url:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLiveInfoAndPlayWithContainer:(id)arg1 completion:(id /* block */)arg2;
- (id)readCacheForExportId:(id)arg1 isBizOrBrsScene:(BOOL)arg2 viewId:(long long)arg3;
- (void)requestLiveInfoWithExportId:(id)arg1 isBizOrBrsScene:(BOOL)arg2 container:(id)arg3 completion:(id /* block */)arg4;
- (void)saveCacheForDataItem:(id)arg1 exportId:(id)arg2 isBizOrBrsScene:(BOOL)arg3 viewId:(long long)arg4;
- (void)stopPlayViewId:(long long)arg1 completion:(id /* block */)arg2;
- (void)pauseViewId:(long long)arg1 completion:(id /* block */)arg2;
- (void)resumeViewId:(long long)arg1 completion:(id /* block */)arg2;
- (void)setMuteViewId:(long long)arg1 isMuted:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)disposeViewId:(long long)arg1 completion:(id /* block */)arg2;
- (id)playerContainers;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)registrar;
- (void)setRegistrar:(id)arg1;
- (void).cxx_destruct;
@end
