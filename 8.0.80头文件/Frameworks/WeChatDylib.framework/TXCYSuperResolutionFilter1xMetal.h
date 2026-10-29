@interface TXCYSuperResolutionFilter1xMetal : NSObject <TXCYSuperResolutionFilterMetalInterface>
{
    BOOL _initialized; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLBuffer> _lutBuffer; // +0x18
    TXCComputeCommandMetal * _command; // +0x20
}
- (id)initWithDevice:(id)arg1 lutBuffer:(const void *)arg2;
- (void)dealloc;
- (BOOL)setupMetal:(const void *)arg1;
- (BOOL)setupLut:(const void *)arg1;
- (BOOL)process:(id)arg1 yTexture:(id)arg2 outputTexture:(id)arg3;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)lutBuffer;
- (void)setLutBuffer:(id)arg1;
- (id)command;
- (void)setCommand:(id)arg1;
- (void).cxx_destruct;
@end
