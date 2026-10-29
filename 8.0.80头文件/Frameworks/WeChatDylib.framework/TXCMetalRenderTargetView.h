@interface TXCMetalRenderTargetView : NSObject <TXCMetalRenderTarget>
{
    MTLRenderPassDescriptor * _renderPassDescriptor; // +0x8
}
- (void)updateRenderPassDescriptor:(id)arg1;
- (unsigned long long)type;
- (id)renderPassDescriptor;
- (void).cxx_destruct;
@end
