@interface WAEJImageData : NSObject
{
    int width; // +0x8
    int height; // +0xc
    NSMutableData * pixels; // +0x10
    WAEJTexture * innerTexture; // +0x18
}
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixels:(id)arg3;
- (void)dealloc;
- (id)texture;
- (int)width;
- (int)height;
- (id)pixels;
@end

