@interface LOTShapeStar : NSObject
{
    NSString * _keyname; // +0x8
    LOTKeyframeGroup * _outerRadius; // +0x10
    LOTKeyframeGroup * _outerRoundness; // +0x18
    LOTKeyframeGroup * _innerRadius; // +0x20
    LOTKeyframeGroup * _innerRoundness; // +0x28
    LOTKeyframeGroup * _position; // +0x30
    LOTKeyframeGroup * _numberOfPoints; // +0x38
    LOTKeyframeGroup * _rotation; // +0x40
    unsigned long long _type; // +0x48
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (id)outerRadius;
- (id)outerRoundness;
- (id)innerRadius;
- (id)innerRoundness;
- (id)position;
- (id)numberOfPoints;
- (id)rotation;
- (unsigned long long)type;
- (void).cxx_destruct;
@end

