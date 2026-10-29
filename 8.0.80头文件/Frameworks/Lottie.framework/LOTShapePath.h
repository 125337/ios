@interface LOTShapePath : NSObject
{
    BOOL _closed; // +0x8
    NSString * _keyname; // +0x10
    NSNumber * _index; // +0x18
    LOTKeyframeGroup * _shapePath; // +0x20
}
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)keyname;
- (BOOL)closed;
- (id)index;
- (id)shapePath;
- (void).cxx_destruct;
@end
