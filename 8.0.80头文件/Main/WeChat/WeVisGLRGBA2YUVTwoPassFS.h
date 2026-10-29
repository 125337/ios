@interface WeVisGLRGBA2YUVTwoPassFS : NSObject
{
    WeVisGLDrawQuad * mQuadDrawerY; // +0x8
    WeVisGLDrawQuad * mQuadDrawerUV; // +0x10
    BOOL _isInitialized; // +0x18
}
- (id)initWith_ITU_R_BT_601_FullRange;
- (void)drawYFromRGBA:(unsigned int)arg1 transpose:(BOOL)arg2 flipX:(BOOL)arg3;
- (void)drawUVFromRGBA:(unsigned int)arg1 transpose:(BOOL)arg2 flipX:(BOOL)arg3;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
