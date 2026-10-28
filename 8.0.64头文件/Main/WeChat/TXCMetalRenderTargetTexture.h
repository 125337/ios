@interface TXCMetalRenderTargetTexture : NSObject <TXCMetalRenderTarget>
{
    MTLRenderPassDescriptor * _renderPassDesc; // +0x8
}
- (id)initWithTexture:(id)arg1;
- (unsigned long long)type;
- (id)renderPassDescriptor;
- (void).cxx_destruct;
@end
