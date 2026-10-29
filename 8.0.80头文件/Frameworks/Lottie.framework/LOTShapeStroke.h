@interface LOTShapeStroke : NSObject
{
    BOOL _fillEnabled; // +0x8
    NSString * _keyname; // +0x10
    LOTKeyframeGroup * _color; // +0x18
    LOTKeyframeGroup * _opacity; // +0x20
    LOTKeyframeGroup * _width; // +0x28
    LOTKeyframeGroup * _dashOffset; // +0x30
    unsigned long long _capType; // +0x38
    unsigned long long _joinType; // +0x40
    NSArray * _lineDashPattern; // +0x48
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (BOOL)fillEnabled;
- (id)color;
- (id)opacity;
- (id)width;
- (id)dashOffset;
- (unsigned long long)capType;
- (unsigned long long)joinType;
- (id)lineDashPattern;
- (void).cxx_destruct;
@end
