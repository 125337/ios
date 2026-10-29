@interface TAVMediaMTLContext : NSObject
{
    id <MTLDevice> _device; // +0x8
    id <MTLCommandQueue> _commandQueue; // +0x10
    __CVMetalTextureCache * _textureCache; // +0x18
    NSMutableDictionary * _libraryCache; // +0x20
}
+ (id)sharedContext;
- (id)initWithDevice:(id)arg1;
- (void)registerDefaultLibrary;
- (BOOL)registerLibrary:(id)arg1;
- (id)libraries;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (id)libraryCache;
- (void)setLibraryCache:(id)arg1;
- (void).cxx_destruct;
@end

