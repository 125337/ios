@interface FlutterDarwinContextMetalSkia : NSObject
{
    id <MTLDevice> _device; // +0x8
    id <MTLCommandQueue> _commandQueue; // +0x10
    sk_sp<GrDirectContext> _mainContext; // +0x18
    sk_sp<GrDirectContext> _resourceContext; // +0x20
    __CVMetalTextureCache * _textureCache; // +0x28
}
+ (sk_sp<GrDirectContext>)createGrContext:(id)arg1 commandQueue:(id)arg2;
- (id)initWithDefaultMTLDevice;
- (id)initWithMTLDevice:(id)arg1 commandQueue:(id)arg2;
- (sk_sp<GrDirectContext>)createGrContext;
- (void)dealloc;
- (id)createExternalTextureWithIdentifier:(long long)arg1 texture:(id)arg2;
- (id)device;
- (id)commandQueue;
- (sk_sp<GrDirectContext>)mainContext;
- (sk_sp<GrDirectContext>)resourceContext;
- (__CVMetalTextureCache *)textureCache;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
