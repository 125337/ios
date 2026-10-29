@interface TXCFramebufferDrawer : NSObject
{
    id <TXIGlContext> _context; // +0x8
    TXCVideoFrameCoords * _coords; // +0x10
    TXCGLDrawer * _drawer; // +0x18
}
- (id)initWithContext:(id)arg1 coords:(id)arg2 pixelFormat:(unsigned long long)arg3;
- (unsigned long long)getDrawerTypeWithFormat:(unsigned long long)arg1;
- (void)updateDrawerWithFormatIfNeed:(unsigned long long)arg1;
- (CGSize)imageSize;
- (BOOL)drawPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (void)redrawCurrentFrame;
- (id)context;
- (id)coords;
- (id)drawer;
- (void)setDrawer:(id)arg1;
- (void).cxx_destruct;
@end

