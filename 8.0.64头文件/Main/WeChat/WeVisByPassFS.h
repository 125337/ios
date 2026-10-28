@interface WeVisByPassFS : NSObject
{
    WeVisGLDrawQuad * mQuadDrawerY; // +0x8
    BOOL _isInitialized; // +0x10
}
- (id)init;
- (void)drawQuad:(unsigned int)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
