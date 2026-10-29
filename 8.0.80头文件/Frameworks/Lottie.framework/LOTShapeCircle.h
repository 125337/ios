@interface LOTShapeCircle : NSObject
{
    BOOL _reversed; // +0x8
    NSString * _keyname; // +0x10
    LOTKeyframeGroup * _position; // +0x18
    LOTKeyframeGroup * _size; // +0x20
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (id)position;
- (id)size;
- (BOOL)reversed;
- (void).cxx_destruct;
@end
