@interface QCustomLayerTileOverlay : QTileOverlay
{
    NSString * _businessKey; // +0x28
    NSString * _url; // +0x30
    QCustomLayerConfigItem * _serverConfig; // +0x38
}
+ (id)getTileOverlayCachePath;
+ (void)updateCustomLayerCaches:(id)arg1;
- (id)init;
- (void)setServerConfig:(id)arg1;
- (id)URLForTilePath:(struct)arg1;
- (void)onDownloadFail:(id)arg1 path:(const struct *)arg2 callback:(id /* block */)arg3 task:(id)arg4 tileKey:(id)arg5;
- (BOOL)shouldRemoverTileOverlayCache;
- (void)dealloc;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)serverConfig;
- (void).cxx_destruct;
@end
