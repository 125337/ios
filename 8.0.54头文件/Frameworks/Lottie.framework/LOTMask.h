@interface LOTMask : NSObject
{
    BOOL _closed; // +0x8
    BOOL _inverted; // +0x9
    unsigned long long _maskMode; // +0x10
    LOTKeyframeGroup * _maskPath; // +0x18
    LOTKeyframeGroup * _opacity; // +0x20
    LOTKeyframeGroup * _expansion; // +0x28
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (BOOL)closed;
- (BOOL)inverted;
- (unsigned long long)maskMode;
- (id)maskPath;
- (id)opacity;
- (id)expansion;
- (void).cxx_destruct;
@end

