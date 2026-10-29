@interface MMLiveSEIConnectMicMsg : NSObject
{
    NSArray * _list; // +0x8
    double _x; // +0x10
    double _y; // +0x18
    double _w; // +0x20
    double _h; // +0x28
    unsigned long long _z; // +0x30
    unsigned long long _f; // +0x38
    unsigned long long _m; // +0x40
    double _a; // +0x48
    unsigned long long _i; // +0x50
    NSArray * _hl; // +0x58
    NSArray * _gl; // +0x60
}
- (CGRect)normalizedAnchorFrame;
- (unsigned long long)anchorUIType;
- (BOOL)hasOtherConnectMicAnchor;
- (unsigned long long)audioModeUsersCount;
- (unsigned long long)micLayoutMode;
- (BOOL)isInConnectedMicUI;
- (BOOL)emptyUserListAllowed;
- (id)list;
- (void)setList:(id)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)w;
- (void)setW:(double)arg1;
- (double)h;
- (void)setH:(double)arg1;
- (unsigned long long)z;
- (void)setZ:(unsigned long long)arg1;
- (unsigned long long)f;
- (void)setF:(unsigned long long)arg1;
- (unsigned long long)m;
- (void)setM:(unsigned long long)arg1;
- (double)a;
- (void)setA:(double)arg1;
- (unsigned long long)i;
- (void)setI:(unsigned long long)arg1;
- (id)hl;
- (void)setHl:(id)arg1;
- (id)gl;
- (void)setGl:(id)arg1;
- (void).cxx_destruct;
@end

