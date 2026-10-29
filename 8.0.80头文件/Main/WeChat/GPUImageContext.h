@interface GPUImageContext : NSObject
{
    NSMutableDictionary * shaderProgramCache; // +0x8
    NSMutableArray * shaderProgramUsageHistory; // +0x10
    EAGLSharegroup * _sharegroup; // +0x18
    EAGLContext * _context; // +0x20
    GLProgram * _currentShaderProgram; // +0x28
    NSObject<OS_dispatch_queue> * _contextQueue; // +0x30
    __CVOpenGLESTextureCache * _coreVideoTextureCache; // +0x38
    GPUImageFramebufferCache * _framebufferCache; // +0x40
}
+ (void *)contextKey;
+ (id)sharedImageProcessingContext;
+ (id)sharedContextQueue;
+ (id)sharedFramebufferCache;
+ (void)useImageProcessingContext;
+ (void)setCustomContext:(id)arg1;
+ (void)checkCustomContext:(id)arg1;
+ (void)releaseCustomContext;
+ (void)setActiveShaderProgram:(id)arg1;
+ (int)maximumTextureSizeForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumVaryingVectorsForThisDevice;
+ (BOOL)deviceSupportsOpenGLESExtension:(id)arg1;
+ (BOOL)deviceSupportsRedTextures;
+ (BOOL)deviceSupportsFramebufferReads;
+ (CGSize)sizeThatFitsWithinATextureForSize:(CGSize)arg1;
+ (BOOL)supportsFastTextureUpload;
- (id)init;
- (void)dealloc;
- (void)releaseContext;
- (void)initContext;
- (void)checkContext:(id)arg1;
- (void)useCustomContext:(id)arg1;
- (void)useAsCurrentContext;
- (void)setContextShaderProgram:(id)arg1;
- (void)presentBufferForDisplay;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)useSharegroup:(id)arg1;
- (id)createContext;
- (id)context;
- (__CVOpenGLESTextureCache *)coreVideoTextureCache;
- (id)framebufferCache;
- (id)currentShaderProgram;
- (void)setCurrentShaderProgram:(id)arg1;
- (id)contextQueue;
- (void).cxx_destruct;
@end
