@interface WeVisGLYUV2RGBA : NSObject
{
    WeVisGLDrawQuad * mQuadDrawer; // +0x8
    float coorOffsetX; // +0x10
    float coorOffsetY; // +0x14
    float coorScaleX; // +0x18
    float coorScaleY; // +0x1c
    BOOL _isInitialized; // +0x20
}
- (id)initWith_ITU_R_BT_601_FullRange;
- (void)setInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)liveSetInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)drawFromY:(unsigned int)arg1 UV:(unsigned int)arg2 transpose:(BOOL)arg3 rotation:(int)arg4;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
