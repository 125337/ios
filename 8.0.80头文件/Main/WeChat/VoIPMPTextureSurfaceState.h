@interface VoIPMPTextureSurfaceState : NSObject
{
    BOOL _isLandscapeMode; // +0x8
    int _width; // +0xc
    int _height; // +0x10
    int _orient; // +0x14
    int _rotate; // +0x18
}
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (int)orient;
- (void)setOrient:(int)arg1;
- (int)rotate;
- (void)setRotate:(int)arg1;
- (BOOL)isLandscapeMode;
- (void)setIsLandscapeMode:(BOOL)arg1;
@end
