@interface LOTShapeTrimPath : NSObject
{
    NSString * _keyname; // +0x8
    LOTKeyframeGroup * _start; // +0x10
    LOTKeyframeGroup * _end; // +0x18
    LOTKeyframeGroup * _offset; // +0x20
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (id)start;
- (id)end;
- (id)offset;
- (void).cxx_destruct;
@end

