@interface TXCI420UVSuperResolutionFilterMetal : NSObject
{
    BOOL _initialized; // +0x8
    id <MTLDevice> _device; // +0x10
    MPSImageBilinearScale * _scaleFilter; // +0x18
}
- (id)initWithDevice:(id)arg1;
- (void)dealloc;
- (BOOL)process:(id)arg1 uTexture:(id)arg2 vTexture:(id)arg3 outputUTexture:(id)arg4 outputVTexture:(id)arg5;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)scaleFilter;
- (void)setScaleFilter:(id)arg1;
- (void).cxx_destruct;
@end
