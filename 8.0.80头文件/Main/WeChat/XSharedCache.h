@interface XSharedCache : NSObject
{
    ObjectRef<rfx::RfxShaderLibrary> _shaderLibrary; // +0x8
    ObjectRef<rfx::RfxPipelineStateCache> _pipelineStateCache; // +0x10
    ObjectRef<rfx::RfxAssetManager> _assetManager; // +0x18
    ObjectRef<xnet::rci::RciRenderDevice> _device; // +0x20
    shared_ptr<rfx::RfxThreadPool> _threadPool; // +0x28
}
+ (id)sharedCache;
- (void *)shaderLibrary;
- (void *)pipelineStateCache;
- (void *)assetManager;
- (shared_ptr<rfx::RfxThreadPool>)threadPool;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
