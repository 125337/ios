@interface QBaseVisualLayerManager : NSObject
{
    NSMutableArray * _layers; // +0x8
    NSMutableDictionary * _visualayerDict; // +0x10
    QBasicMapView * _basicMapView; // +0x18
    QLayerManager * _internalLayerManager; // +0x20
    NSString * _apiKey; // +0x28
    NSString * _configPath; // +0x30
}
- (void)setApiKey:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)remove:(id)arg1;
- (void)updateAuthenticationConfig:(id)arg1;
- (void)requestVisualLayerData:(id)arg1 completion:(id /* block */)arg2;
- (id)layers;
- (void)setLayers:(id)arg1;
- (id)visualayerDict;
- (void)setVisualayerDict:(id)arg1;
- (id)basicMapView;
- (void)setBasicMapView:(id)arg1;
- (id)internalLayerManager;
- (void)setInternalLayerManager:(id)arg1;
- (id)apiKey;
- (id)configPath;
- (void)setConfigPath:(id)arg1;
- (void).cxx_destruct;
@end
