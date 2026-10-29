@interface QPathViewPayload : NSObject
{
    int _displayLevel; // +0x8
    int _zIndex; // +0xc
    float _lineWidth; // +0x10
    UIColor * _strokeColor; // +0x18
    UIColor * _fillColor; // +0x20
    struct * _points; // +0x28
    unsigned long long _pointCount; // +0x30
    NSArray * _holes; // +0x38
    double _radius; // +0x40
    unsigned long long _strokeType; // +0x48
    NSArray * _lineDashPattern; // +0x50
    NSArray * _segmentStyle; // +0x58
    NSArray * _segmentColor; // +0x60
    struct _originPoint; // +0x68
}
- (id)init;
- (void)setPoints:(struct *)arg1 count:(unsigned long long)arg2;
- (void)freeOldData;
- (void)dealloc;
- (int)displayLevel;
- (void)setDisplayLevel:(int)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (float)lineWidth;
- (void)setLineWidth:(float)arg1;
- (struct)originPoint;
- (void)setOriginPoint:(struct)arg1;
- (struct *)points;
- (unsigned long long)pointCount;
- (id)holes;
- (void)setHoles:(id)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (unsigned long long)strokeType;
- (void)setStrokeType:(unsigned long long)arg1;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (id)segmentStyle;
- (void)setSegmentStyle:(id)arg1;
- (id)segmentColor;
- (void)setSegmentColor:(id)arg1;
- (void).cxx_destruct;
@end

