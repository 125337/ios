@interface WeVisGLCompose2RGBA : NSObject
{
    WeVisGLComposeQuad * mQuadDrawer; // +0x8
    BOOL _isInitialized; // +0x10
}
- (id)initWithMaxSupportTextureCnt:(int)arg1;
- (void)setOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)composeElements:(id)arg1 transpose:(BOOL)arg2 rotation:(int)arg3;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
