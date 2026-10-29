@interface QAOIMarkerManager : NSObject
{
    QMapContext * _context; // +0x8
    QOverlayContainer * _overlayContainer; // +0x10
    QMediator * _mediator; // +0x18
    QUniversalMapCounter * _universalCounter; // +0x20
    QAOILayerMarkerEngine * _dataEngine; // +0x28
    NSMutableDictionary * _layerHolder; // +0x30
    NSMutableDictionary * _markerHolder; // +0x38
    NSMutableDictionary * _textMarkerHolder; // +0x40
    NSCache * _poiImagePathCache; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)requestAOILayerData:(id)arg1 callback:(id /* block */)arg2;
- (BOOL)loadAOILayerWithInfoDict:(id)arg1 withLayer:(id)arg2;
- (id)creatPOIMarkersArray:(id)arg1 withLayer:(id)arg2;
- (void)loadPOIIconImagePath:(id)arg1 withLayerID:(id)arg2;
- (id)createAOILayerSurface:(id)arg1;
- (void)addAOILayerPolygonView:(id)arg1 withProperty:(id)arg2;
- (void)createAOILayerMarker:(id)arg1 withLayerID:(id)arg2;
- (void)removeAOILayerMarker:(id)arg1;
- (void)addAOILayer:(id)arg1 callback:(id /* block */)arg2;
- (void)removeAOILayer:(id)arg1;
- (id)getPOIMarkerInfoByID:(int)arg1;
- (void)modifyAOILayerStatus:(id)arg1 hidden:(BOOL)arg2;
- (void)showSubPois:(id)arg1 toShow:(BOOL)arg2;
- (id)getStyleDictionary:(id)arg1 withStyle:(int)arg2;
- (id)generatePayload:(id)arg1;
- (id)getAOILayerMarkerIconPathWithName:(id)arg1;
- (id)getImageDownloadURL:(id)arg1;
- (void)calculateUltimateZoomLevel:(id)arg1;
- (int)getMapStyleType;
- (void)setPOITextImageInstruction:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)overlayContainer;
- (void)setOverlayContainer:(id)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)universalCounter;
- (void)setUniversalCounter:(id)arg1;
- (id)dataEngine;
- (void)setDataEngine:(id)arg1;
- (id)layerHolder;
- (void)setLayerHolder:(id)arg1;
- (id)markerHolder;
- (void)setMarkerHolder:(id)arg1;
- (id)textMarkerHolder;
- (void)setTextMarkerHolder:(id)arg1;
- (id)poiImagePathCache;
- (void)setPoiImagePathCache:(id)arg1;
- (void).cxx_destruct;
@end
