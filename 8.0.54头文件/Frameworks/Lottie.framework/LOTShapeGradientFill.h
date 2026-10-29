@interface LOTShapeGradientFill : NSObject
{
    BOOL _evenOddFillRule; // +0x8
    NSString * _keyname; // +0x10
    NSNumber * _numberOfColors; // +0x18
    LOTKeyframeGroup * _startPoint; // +0x20
    LOTKeyframeGroup * _endPoint; // +0x28
    LOTKeyframeGroup * _gradient; // +0x30
    LOTKeyframeGroup * _opacity; // +0x38
    unsigned long long _type; // +0x40
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (id)numberOfColors;
- (id)startPoint;
- (id)endPoint;
- (id)gradient;
- (id)opacity;
- (BOOL)evenOddFillRule;
- (unsigned long long)type;
- (void).cxx_destruct;
@end

