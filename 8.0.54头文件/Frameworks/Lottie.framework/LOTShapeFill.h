@interface LOTShapeFill : NSObject
{
    BOOL _fillEnabled; // +0x8
    BOOL _evenOddFillRule; // +0x9
    NSString * _keyname; // +0x10
    LOTKeyframeGroup * _color; // +0x18
    LOTKeyframeGroup * _opacity; // +0x20
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (BOOL)fillEnabled;
- (id)color;
- (id)opacity;
- (BOOL)evenOddFillRule;
- (void).cxx_destruct;
@end

