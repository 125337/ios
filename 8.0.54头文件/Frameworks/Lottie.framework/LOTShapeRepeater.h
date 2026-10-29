@interface LOTShapeRepeater : NSObject
{
    NSString * _keyname; // +0x8
    LOTKeyframeGroup * _copies; // +0x10
    LOTKeyframeGroup * _offset; // +0x18
    LOTKeyframeGroup * _anchorPoint; // +0x20
    LOTKeyframeGroup * _scale; // +0x28
    LOTKeyframeGroup * _position; // +0x30
    LOTKeyframeGroup * _rotation; // +0x38
    LOTKeyframeGroup * _startOpacity; // +0x40
    LOTKeyframeGroup * _endOpacity; // +0x48
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (id)copies;
- (id)offset;
- (id)anchorPoint;
- (id)scale;
- (id)position;
- (id)rotation;
- (id)startOpacity;
- (id)endOpacity;
- (void).cxx_destruct;
@end

