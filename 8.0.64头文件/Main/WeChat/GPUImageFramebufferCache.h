@interface GPUImageFramebufferCache : NSObject
{
    NSMutableDictionary * framebufferCache; // +0x8
    NSMutableDictionary * framebufferTypeCounts; // +0x10
    NSMutableArray * activeImageCaptureList; // +0x18
    id memoryWarningObserver; // +0x20
    NSObject<OS_dispatch_queue> * framebufferCacheQueue; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)hashForSize:(CGSize)arg1 textureOptions:(GPUTextureOptions)arg2 onlyTexture:(BOOL)arg3;
- (id)fetchFramebufferForSize:(CGSize)arg1 textureOptions:(GPUTextureOptions)arg2 onlyTexture:(BOOL)arg3;
- (id)fetchFramebufferForSize:(CGSize)arg1 textureOptions:(GPUTextureOptions)arg2 onlyTexture:(BOOL)arg3 useRGB2YUV420:(BOOL)arg4;
- (id)fetchFramebufferForSize:(CGSize)arg1 onlyTexture:(BOOL)arg2;
- (void)returnFramebufferToCache:(id)arg1;
- (void)purgeAllUnassignedFramebuffers;
- (void)addFramebufferToActiveImageCaptureList:(id)arg1;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg1;
- (void).cxx_destruct;
@end
