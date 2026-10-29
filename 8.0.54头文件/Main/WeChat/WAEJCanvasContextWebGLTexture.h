@interface WAEJCanvasContextWebGLTexture : WAEJCanvasContextWebGL
{
    WAEJTexture * texture; // +0x70
}
- (void)dealloc;
- (void)create;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (id)texture;
- (id)getTexture;
@end

