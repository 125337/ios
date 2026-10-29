@interface QUniversalMapCounter : NSObject
{
    TBMapCommonCounter * _worldMapCounter; // +0x8
    TBMapCommonCounter * _customLayerCounter; // +0x10
    TBMapCommonCounter * _indoorCounter; // +0x18
    TBMapCommonCounter * _darkModeCounter; // +0x20
    TBMapCommonCounter * _pointEventCounter; // +0x28
    TBMapCommonCounter * _heatMapCounter; // +0x30
    TBMapCommonCounter * _honeyCombHeatCounter; // +0x38
    TBMapCommonCounter * _arcOverlayCounter; // +0x40
    TBMapCommonCounter * _trailCounter; // +0x48
    TBMapCommonCounter * _scatterCounter; // +0x50
    TBMapCommonCounter * _scatterBitmapCounter; // +0x58
    TBMapCommonCounter * _groundOverlayCounter; // +0x60
    TBMapCommonCounter * _aoiLayerCounter; // +0x68
    TBMapCommonCounter * _offlineMapCounter; // +0x70
}
- (id)init;
- (id)worldMapCounter;
- (void)setWorldMapCounter:(id)arg1;
- (id)customLayerCounter;
- (void)setCustomLayerCounter:(id)arg1;
- (id)indoorCounter;
- (void)setIndoorCounter:(id)arg1;
- (id)darkModeCounter;
- (void)setDarkModeCounter:(id)arg1;
- (id)pointEventCounter;
- (void)setPointEventCounter:(id)arg1;
- (id)heatMapCounter;
- (void)setHeatMapCounter:(id)arg1;
- (id)honeyCombHeatCounter;
- (void)setHoneyCombHeatCounter:(id)arg1;
- (id)arcOverlayCounter;
- (void)setArcOverlayCounter:(id)arg1;
- (id)trailCounter;
- (void)setTrailCounter:(id)arg1;
- (id)scatterCounter;
- (void)setScatterCounter:(id)arg1;
- (id)scatterBitmapCounter;
- (void)setScatterBitmapCounter:(id)arg1;
- (id)groundOverlayCounter;
- (void)setGroundOverlayCounter:(id)arg1;
- (id)aoiLayerCounter;
- (void)setAoiLayerCounter:(id)arg1;
- (id)offlineMapCounter;
- (void)setOfflineMapCounter:(id)arg1;
- (void).cxx_destruct;
@end

