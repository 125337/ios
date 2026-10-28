@interface WAEJCanvasContext2DTexture : WAEJCanvasContext2D
{
    WAEJTexture * texture; // +0x8c0
}
- (void)dealloc;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (id)texture;
- (id)getTexture;
@end
