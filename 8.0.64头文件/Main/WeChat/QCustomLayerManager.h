@interface QCustomLayerManager : NSObject
{
    QTileOverlayManager * _internalManager; // +0x8
    NSString * _businessKey; // +0x10
    NSMutableArray * _layers; // +0x18
    QCustomLayerConfigData * _config; // +0x20
}
- (id)init;
- (void)addCustomLayer:(id)arg1;
- (void)removeCustomLayer:(id)arg1;
- (void)updateAuthenticationConfig:(id)arg1;
- (void)doAddTileOverlay:(id)arg1;
- (id)internalManager;
- (void)setInternalManager:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (id)layers;
- (void)setLayers:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
