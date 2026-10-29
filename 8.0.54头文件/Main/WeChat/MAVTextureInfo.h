@interface MAVTextureInfo : NSObject
{
    int _texture; // +0x8
    int _width; // +0xc
    int _height; // +0x10
}
- (id)initWithTexture:(int)arg1 width:(int)arg2 height:(int)arg3;
- (int)texture;
- (void)setTexture:(int)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
@end

