@interface MBWebViewPlugin_EmbedMap : WAWebViewPlugin_EmbedMap <WAEmbedMapIsolation>
{
    NSMutableDictionary * _mapId2CoverView; // +0x8
    NSMutableDictionary * _mapKey2InternalId; // +0x10
    NSMutableDictionary * _internalId2MapKey; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)onSystemEnterBackground;
- (void)onSystemEnterForeground;
- (unsigned int)allocInternalMapId;
- (void)insertMap:(id)arg1 completion:(id /* block */)arg2;
- (void)registerMapMappingWithAppid:(id)arg1 frontMapId:(unsigned int)arg2 internalId:(unsigned int)arg3;
- (unsigned int)internalMapIdForAppid:(id)arg1 frontMapId:(unsigned int)arg2;
- (unsigned int)frontMapIdForInternalId:(unsigned int)arg1;
- (id)appidForInternalId:(unsigned int)arg1;
- (void)unregisterMapMappingForAppid:(id)arg1 frontMapId:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (id)getChildViews;
- (void)resizeView:(unsigned int)arg1 region:(CGRect)arg2;
- (void)setViewVisible:(unsigned int)arg1 visible:(BOOL)arg2;
- (id)getMapView:(unsigned int)arg1;
- (BOOL)removeMap:(unsigned int)arg1;
- (void)sendEvent:(id)arg1 param:(id)arg2 sendWebview:(BOOL)arg3;
- (id)mapId2CoverView;
- (void)setMapId2CoverView:(id)arg1;
- (id)mapKey2InternalId;
- (void)setMapKey2InternalId:(id)arg1;
- (id)internalId2MapKey;
- (void)setInternalId2MapKey:(id)arg1;
- (void).cxx_destruct;
@end
