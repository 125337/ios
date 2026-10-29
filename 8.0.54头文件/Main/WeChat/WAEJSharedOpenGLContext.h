@interface WAEJSharedOpenGLContext : NSObject
{
    WAEJGLProgram2D * programFlat; // +0x8
    WAEJGLProgram2D * programTexture; // +0x10
    WAEJGLProgram2D * programAlphaTexture; // +0x18
    WAEJGLProgram2D * programPattern; // +0x20
    WAEJGLProgram2DRadialGradient * programRadialGradient; // +0x28
    EAGLContext * glContext2D; // +0x30
    EAGLSharegroup * glSharegroup; // +0x38
    sk_sp<GrDirectContext> skContext; // +0x40
    NSMutableData * vertexBuffer; // +0x48
    BOOL isEnterBackground; // +0x50
    BOOL _forceReleaseInBg; // +0x51
}
- (id)init;
- (void)dealloc;
- (id)vertexBuffer;
- (id)programFlat;
- (id)programTexture;
- (id)programAlphaTexture;
- (id)programPattern;
- (id)programRadialGradient;
- (id)glContext2D;
- (sk_sp<GrDirectContext>)skContext;
- (id)glSharegroup;
- (BOOL)isEnterBackground;
- (void)setIsEnterBackground:(BOOL)arg1;
- (BOOL)forceReleaseInBg;
- (void)setForceReleaseInBg:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

