@interface QHeatGradient : NSObject
{
    int _mapSize; // +0x8
    NSArray * _colors; // +0x10
    NSArray * _startPoints; // +0x18
}
- (id)initWithColor:(id)arg1 andWithStartPoints:(id)arg2;
- (int)getMapSize;
- (id)colors;
- (id)startPoints;
- (void).cxx_destruct;
@end

