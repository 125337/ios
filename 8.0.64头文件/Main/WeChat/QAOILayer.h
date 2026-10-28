@interface QAOILayer : NSObject
{
    NSString * _uid; // +0x8
    double _minZoom; // +0x10
    double _maxZoom; // +0x18
    double _internalMinZoom; // +0x20
    double _internalMaxZoom; // +0x28
    NSMutableArray * _markers; // +0x30
    QAOILayerPolygonView * _polygonView; // +0x38
    QAOIMarkerManager * _manager; // +0x40
}
- (id)initWithUID:(id)arg1;
- (void)showSubPois:(BOOL)arg1;
- (id)uid;
- (void)setUid:(id)arg1;
- (double)minZoom;
- (void)setMinZoom:(double)arg1;
- (double)maxZoom;
- (void)setMaxZoom:(double)arg1;
- (double)internalMinZoom;
- (void)setInternalMinZoom:(double)arg1;
- (double)internalMaxZoom;
- (void)setInternalMaxZoom:(double)arg1;
- (id)markers;
- (void)setMarkers:(id)arg1;
- (id)polygonView;
- (void)setPolygonView:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
