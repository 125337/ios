@interface WCRecordPillar : NSObject
{
    BOOL _bSelectedShowHigher; // +0x8
    unsigned int _index; // +0xc
    float _lastStartTo; // +0x10
    float _lastEndTo; // +0x14
    double _pillarHeight; // +0x18
    CAShapeLayer * _layer; // +0x20
    UIColor * _color; // +0x28
    CALayer * _superLayer; // +0x30
    double _pillarWidth; // +0x38
}
- (id)initWithIndex:(unsigned int)arg1 SuperLayer:(id)arg2 color:(id)arg3 lineWidth:(double)arg4;
- (id)getShapeLayer;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (BOOL)bSelectedShowHigher;
- (void)setBSelectedShowHigher:(BOOL)arg1;
- (double)pillarHeight;
- (void)setPillarHeight:(double)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (float)lastStartTo;
- (void)setLastStartTo:(float)arg1;
- (float)lastEndTo;
- (void)setLastEndTo:(float)arg1;
- (id)superLayer;
- (void)setSuperLayer:(id)arg1;
- (double)pillarWidth;
- (void)setPillarWidth:(double)arg1;
- (void).cxx_destruct;
@end
