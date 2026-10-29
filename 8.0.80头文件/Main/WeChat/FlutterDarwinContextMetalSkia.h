@interface FlutterDarwinContextMetalSkia : NSObject
{
    CFRef<__CVMetalTextureCache *> _textureCache; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLCommandQueue> _commandQueue; // +0x18
    sk_sp<GrDirectContext> _mainContext; // +0x20
    sk_sp<GrDirectContext> _resourceContext; // +0x28
}
+ (sk_sp<GrDirectContext>)createGrContext:(id)arg1 commandQueue:(id)arg2;
- (id)initWithDefaultMTLDevice;
- (id)initWithMTLDevice:(id)arg1 commandQueue:(id)arg2;
- (sk_sp<GrDirectContext>)createGrContext;
- (id)createExternalTextureWithIdentifier:(long long)arg1 texture:(id)arg2;
- (__CVMetalTextureCache *)textureCache;
- (id)device;
- (id)commandQueue;
- (sk_sp<GrDirectContext>)mainContext;
- (sk_sp<GrDirectContext>)resourceContext;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
