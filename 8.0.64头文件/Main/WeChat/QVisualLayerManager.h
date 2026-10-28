@interface QVisualLayerManager : QBaseVisualLayerManager <QGLOverlayDelegate>
{
    BOOL _isAuthened; // +0x8
    NSString * _apiKey; // +0x10
    NSString * _configPath; // +0x18
    QDataLayerConfigData * _config; // +0x20
    NSMutableDictionary * _glOverlayDict; // +0x28
    QVisualLayerDataDownloader * _engine; // +0x30
    QVisCacheManager * _cacheManager; // +0x38
}
- (void)updateHeatLayer:(id)arg1;
- (void)updateHeatLayerParam:(id)arg1 param:(id)arg2;
- (void)setHeatControls:(id)arg1 controls:(id)arg2;
- (void)loadHeatDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)loadHeatThemeStyle:(id)arg1 styleDict:(id)arg2;
- (void)setHoneyCombControls:(id)arg1 controls:(id)arg2;
- (void)loadHoneyCombDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)loadHoneyCombThemeStyle:(id)arg1 styleDict:(id)arg2;
- (void)updateHoneyCombLayer:(id)arg1;
- (void)updateHoneyCombLayerParam:(id)arg1 param:(id)arg2;
- (void)createHoneyCombLayerOption:(id)arg1 param:(id)arg2;
- (void)setModelLayerControls:(id)arg1 withPayload:(id)arg2;
- (void)setModelLayerDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)loadModelData:(id)arg1 withPayload:(id)arg2;
- (void)fillModelDataFromInfo:(id)arg1 payload:(id)arg2;
- (void)fillModelStyleFromInfo:(id)arg1 payload:(id)arg2;
- (id)getModelLayerDownloadURL:(id)arg1;
- (BOOL)checkCacheExist:(id)arg1 withPayload:(id)arg2;
- (void)setModleLayerPosition:(id)arg1 withPayload:(id)arg2;
- (void)setModleLayerRotation:(id)arg1 withPayload:(id)arg2;
- (void)downloadModelLayerData:(id)arg1 withUrl:(id)arg2 completion:(id /* block */)arg3;
- (void)saveModelFiles:(id)arg1 withLayer:(id)arg2;
- (void)updateModelLayer:(id)arg1;
- (void)updateAllModelLayersForSameOriginalLayerId:(id)arg1;
- (id)createModelLayer:(id)arg1;
- (void)updateModelLayerParams:(id)arg1 withPayload:(id)arg2;
- (void)updateModelRenderMode:(id)arg1 withInfo:(id)arg2;
- (void)updateModelLayerControls:(id)arg1 withPayload:(id)arg2;
- (void)setModelPath:(id)arg1 withPaylaod:(id)arg2 andLayer:(id)arg3;
- (void)updatePedestal;
- (struct)pedestalMapRectForVisualLayer:(id)arg1;
- (int)updatePedestal:(id)arg1;
- (void)resetPedestal;
- (void)setArcLineControls:(id)arg1 controls:(id)arg2;
- (void)loadArcLineDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)updateArcLayer:(id)arg1 withDataAndStyle:(id)arg2;
- (void)updateArcLineLayer:(id)arg1 param:(id)arg2;
- (id)init;
- (void)setConfigPath:(id)arg1;
- (void)setApiKey:(id)arg1;
- (void)setLayerOpacity:(id)arg1;
- (void)setLayerVisibility:(id)arg1;
- (void)setLayerZIndex:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)add:(id)arg1 layer:(id)arg2;
- (void)remove:(id)arg1;
- (void)addGLOverlay:(id)arg1 withView:(id)arg2 info:(id)arg3 andLayer:(id)arg4;
- (void)upDateGLOverlay:(id)arg1 info:(id)arg2;
- (void)loadLocalCacheData:(id)arg1;
- (void)constructHoneyCombLayer:(id)arg1 layer:(id)arg2;
- (void)constructHeatLayer:(id)arg1 layer:(id)arg2;
- (void)constructArcLineLayer:(id)arg1 layer:(id)arg2;
- (void)constructModelLayer:(id)arg1 layer:(id)arg2;
- (id)getPairedDataAndStyle:(id)arg1;
- (id)loadVisLayerPointData:(id)arg1;
- (id)loadVisArcLineData:(id)arg1;
- (void)loadCommonControls:(id)arg1 dict:(id)arg2;
- (void)updateVisLayerProperty:(id)arg1 properties:(id)arg2;
- (void)updateGlOverlayViewProperties:(id)arg1 property:(id)arg2;
- (id)convertIntColor:(int)arg1;
- (void)notifyVisualLog:(id)arg1 withLog:(id)arg2 andLevel:(int)arg3;
- (void)updateAuthenticationConfig:(id)arg1;
- (void)startVerCheck:(id)arg1 configItem:(id)arg2;
- (void)resetVisLayers;
- (BOOL)isConfigContainsLayer:(id)arg1;
- (void)compareModelDataID:(id)arg1 withNewData:(id)arg2;
- (void)notifyLoadLayer:(id)arg1 withError:(id)arg2;
- (void)requestVisualLayerData:(id)arg1 completion:(id /* block */)arg2;
- (id)generateLayerURL:(id)arg1;
- (void)processVisLayerData:(id)arg1 layer:(id)arg2;
- (BOOL)checkLayerUpdateNeeded:(id)arg1;
- (id)executeCommandOnLayer:(id)arg1 mapView:(id)arg2 commandJson:(id)arg3;
- (id)layerForID:(id)arg1;
- (id)apiKey;
- (id)configPath;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isAuthened;
- (void)setIsAuthened:(BOOL)arg1;
- (id)glOverlayDict;
- (void)setGlOverlayDict:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)cacheManager;
- (void)setCacheManager:(id)arg1;
- (void).cxx_destruct;
@end
