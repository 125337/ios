@interface FlutterDarwinContextMetalImpeller : NSObject
{
    CFRef<__CVMetalTextureCache *> _textureCache; // +0x8
    shared_ptr<impeller::ContextMTL> _context; // +0x10
}
- (id)init:(const void *)arg1;
- (id)createExternalTextureWithIdentifier:(long long)arg1 texture:(id)arg2;
- (shared_ptr<impeller::ContextMTL>)context;
- (CFRef<__CVMetalTextureCache *>)textureCache;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
