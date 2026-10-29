@interface MMLiveSEIConnectMicUserInfo : NSObject
{
    unsigned int _us; // +0x8
    NSString * _uId; // +0x10
    double _x; // +0x18
    double _y; // +0x20
    double _w; // +0x28
    double _h; // +0x30
    unsigned long long _z; // +0x38
    unsigned long long _f; // +0x40
    unsigned long long _i; // +0x48
}
- (void)updateWithMicUserInfo:(id)arg1;
- (BOOL)isTalking;
- (BOOL)isAudioMode;
- (BOOL)isOtherAnchor;
- (BOOL)isInOtherRoom;
- (BOOL)isMicMutedByAnchor;
- (CGRect)normalizedUserFrame;
- (unsigned long long)uiType;
- (id)uId;
- (void)setUId:(id)arg1;
- (unsigned int)us;
- (void)setUs:(unsigned int)arg1;
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
- (unsigned long long)i;
- (void)setI:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
