@interface QHeatTileGradient : NSObject
{
    int _mapSize; // +0x8
    NSArray * _colors; // +0x10
    NSArray * _startPoints; // +0x18
}
- (id)initWithColor:(id)arg1 andWithStartPoints:(id)arg2;
- (id)generateColorMap:(double)arg1;
- (id)interpolateColorFrom:(id)arg1 to:(id)arg2 ratio:(float)arg3;
- (id)colors;
- (id)startPoints;
- (void).cxx_destruct;
@end
