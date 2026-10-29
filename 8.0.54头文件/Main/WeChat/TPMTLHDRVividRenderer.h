@interface TPMTLHDRVividRenderer : TPMTLFrameRendererBase
{
    unsigned long long rendererType; // +0x8
    __CVMetalTextureCache * _textureCache; // +0x10
    id <MTLTexture> _yTexture; // +0x18
    id <MTLTexture> _uvTexure; // +0x20
    TPHDRVividMetadataProcessor * _hdrVividProcessor; // +0x28
    TPHDRDeviceInfo _displayDeviceInfo; // +0x30
    TPHDRVividToneMappingParams _hdrVividParams; // +0x38
}
- (id)initWithMetalDevice:(id)arg1;
- (void)dealloc;
- (void)prepareTextureCache;
- (void)uploadTexture:(TPFrame *)arg1;
- (void)calcHDRVividTonemapCurve:(TPFrame *)arg1;
- (void)setFrame:(TPFrame *)arg1;
- (void)uploadResourcesToCommandEncoder:(id)arg1;
- (id)shaderSource;
- (id)vertexFunctionName;
- (id)fragmentFunctionName;
- (unsigned long long)rendererType;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (id)yTexture;
- (void)setYTexture:(id)arg1;
- (id)uvTexure;
- (void)setUvTexure:(id)arg1;
- (TPHDRVividMetadataProcessor *)hdrVividProcessor;
- (void)setHdrVividProcessor:(TPHDRVividMetadataProcessor *)arg1;
- (TPHDRVividToneMappingParams)hdrVividParams;
- (void)setHdrVividParams:(TPHDRVividToneMappingParams)arg1;
- (TPHDRDeviceInfo)displayDeviceInfo;
- (void)setDisplayDeviceInfo:(TPHDRDeviceInfo)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

