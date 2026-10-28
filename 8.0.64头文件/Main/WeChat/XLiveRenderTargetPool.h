@interface XLiveRenderTargetPool : NSObject
{
    mutex _lock; // +0x8
    vector<xnet::ObjectRef<rfx::RfxTexture>, std::allocator<xnet::ObjectRef<rfx::RfxTexture>>> _freeList; // +0x48
}
- (void)pushTexture:(ObjectRef<rfx::RfxTexture>)arg1;
- (ObjectRef<rfx::RfxTexture>)acquireTexture;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
