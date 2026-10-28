@interface WeVisGLFrameBuffer : NSObject
{
    unsigned int _fboId; // +0x8
}
- (id)initWithColorTexture2D0:(unsigned int)arg1;
- (void)bind;
- (void)dealloc;
- (unsigned int)fboId;
- (void)setFboId:(unsigned int)arg1;
@end
