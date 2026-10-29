@interface GPUWorkflowImpl : NSObject
{
    unsigned int _fbo; // +0x8
    EAGLContext * _glContextOld; // +0x10
    EAGLContext * _glContextNew; // +0x18
    __CVOpenGLESTextureCache * _textureCacheRef; // +0x20
    GPUWorkflowShader * _shader; // +0x28
    NSRecursiveLock * _glLock; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)releaseGLRes;
- (void *)getCameraBufferWithPixelBuffer:(__CVBuffer * *)arg1 viewport:(CGSize)arg2 displayTransform:(mat<3, 3, float, glm::packed_highp>)arg3;
- (void *)getCameraBufferWithYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2 textureSize:(CGSize)arg3 viewport:(CGSize)arg4 displayTransform:(mat<3, 3, float, glm::packed_highp>)arg5;
- (BOOL)createTextureFromPixelBuffer:(__CVBuffer * *)arg1 yTexture:(unsigned int *)arg2 uvTexture:(unsigned int *)arg3;
- (void)setupTextureCache;
- (BOOL)renderYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2 toTexture:(unsigned int)arg3 viewport:(CGSize)arg4 displayTransform:(mat<3, 3, float, glm::packed_highp>)arg5;
- (void)ensureGLVariables;
- (BOOL)attachOffscreenFramebufferToTargetTexture:(unsigned int)arg1;
- (void)drawYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2 viewport:(CGSize)arg3 displayTransform:(mat<3, 3, float, glm::packed_highp>)arg4;
- (void)setCurrentEGLContext:(void *)arg1;
- (id)glContext;
- (void)makeArContext;
- (void)restoreContext;
- (void).cxx_destruct;
@end

