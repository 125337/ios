@interface LOTShapeTransform : NSObject
{
    NSString * _keyname; // +0x8
    LOTKeyframeGroup * _position; // +0x10
    LOTKeyframeGroup * _anchor; // +0x18
    LOTKeyframeGroup * _scale; // +0x20
    LOTKeyframeGroup * _rotation; // +0x28
    LOTKeyframeGroup * _opacity; // +0x30
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)description;
- (id)keyname;
- (id)position;
- (id)anchor;
- (id)scale;
- (id)rotation;
- (id)opacity;
- (void).cxx_destruct;
@end
