@interface QVectorHeatOverlay : QGLOverlay
{
    struct _boundingRect; // +0x8
    BOOL _toBuildData; // +0x28
    BOOL _hasSetGeoPoint; // +0x29
    NSArray * _nodes; // +0x30
    QVectorHeatOverlayOption * _option; // +0x38
    double _minIntensity; // +0x40
    double _maxIntensity; // +0x48
    CLLocationCoordinate2D _internalGeoReferencePoint; // +0x50
}
- (id)initWithHeatNodes:(id)arg1 option:(id)arg2;
- (struct)boundingMapRect;
- (void)setNodes:(id)arg1;
- (void)setGeoReferencePoint:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)geoReferencePoint;
- (void)setDisplayLevel:(long long)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)setColors:(id)arg1 startPoints:(id)arg2;
- (id)colors;
- (id)startPoints;
- (void)setMinHeight:(double)arg1 maxHeight:(double)arg2;
- (double)maxHeight;
- (double)minHeight;
- (void)setMinIntensity:(double)arg1 maxIntensity:(double)arg2;
- (double)maxIntensity;
- (double)minIntensity;
- (void)setSize:(double)arg1;
- (double)size;
- (void)setGap:(double)arg1;
- (double)gap;
- (void)setEnable3D:(BOOL)arg1;
- (BOOL)enable3D;
- (void)setNeedsDisplay;
- (id)getAggregationUnit:(CLLocationCoordinate2D)arg1;
- (void *)createImpl;
- (void)destoryImpl;
- (id)getType;
- (void)calculateBoundingRect;
- (vector<tcmapkit::IAggregatable *, std::allocator<tcmapkit::IAggregatable *>>)processNodeDataCopy;
- (void)buildHeatLayerData:(void *)arg1 option:(id)arg2;
- (struct)getReferencePoint;
- (void)setColorRange:(void *)arg1 option:(id)arg2;
- (void)setHeightRange:(void *)arg1 option:(id)arg2;
- (void)setIntensityRange:(void *)arg1 option:(id)arg2;
- (void)setVisibleRange:(void *)arg1 option:(id)arg2;
- (void)validateInitHeightRange:(id)arg1;
- (BOOL)checkIsDynamicIntensityRange:(double)arg1 maxIntensity:(double)arg2;
- (void)recordGLoverlayCount:(id)arg1;
- (id)nodes;
- (id)option;
- (void)setOption:(id)arg1;
- (BOOL)toBuildData;
- (void)setToBuildData:(BOOL)arg1;
- (void)setMinIntensity:(double)arg1;
- (void)setMaxIntensity:(double)arg1;
- (CLLocationCoordinate2D)internalGeoReferencePoint;
- (void)setInternalGeoReferencePoint:(CLLocationCoordinate2D)arg1;
- (BOOL)hasSetGeoPoint;
- (void)setHasSetGeoPoint:(BOOL)arg1;
- (void).cxx_destruct;
@end

