@interface QHeatTileOverlay : QTileOverlay
{
    unsigned long long _minimumZoomIntensity; // +0x28
    unsigned long long _maximumZoomIntensity; // +0x30
    BOOL _dirty; // +0x38
    QHeatTileCreationData * _data; // +0x40
    NSArray * _nodes; // +0x48
    long long _decayRadius; // +0x50
    double _opacity; // +0x58
    QHeatTileGradient * _gradient; // +0x60
    QQuadTree * _quadTree; // +0x68
}
- (struct)calculateBounds;
- (id)maxValueForZoom:(unsigned long long)arg1;
- (id)calculateIntensities;
- (id)generateKernel;
- (void)prepare;
- (id)transparentImageWithSize:(int)arg1;
- (unsigned int *)calculateRawpixels:(double)arg1 data:(id)arg2 minX:(double)arg3 minY:(double)arg4 points:(id)arg5 wrappedPoints:(id)arg6 wrappedPointsOffset:(double)arg7 zoom:(unsigned long long)arg8;
- (id)loadTileImageAtPath:(struct)arg1;
- (double)getWrappedPointsOffsetWithWrappedPoints:(id)arg1 tileBounds:(struct)arg2 worldWidth:(double)arg3 data:(id)arg4;
- (struct)mapPointForCoordinate:(CLLocationCoordinate2D)arg1;
- (void)loadTileAtPath:(struct)arg1 result:(id /* block */)arg2;
- (void)setNodes:(id)arg1;
- (void)setDecayRadius:(long long)arg1;
- (void)setOpacity:(double)arg1;
- (void)setGradient:(id)arg1;
- (id)init;
- (id)initWithURLTemplate:(id)arg1;
- (id)initWithHeatTileNodes:(id)arg1;
- (id)nodes;
- (long long)decayRadius;
- (double)opacity;
- (id)gradient;
- (id)quadTree;
- (void)setQuadTree:(id)arg1;
- (void).cxx_destruct;
@end
