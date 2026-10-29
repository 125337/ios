@interface WAEJTexture : NSObject <NSCopying>
{
    BOOL cached; // +0x8
    BOOL drawFlippedY; // +0x9
    BOOL isCompressed; // +0xa
    BOOL lazyLoaded; // +0xb
    BOOL dimensionsKnown; // +0xc
    short width; // +0xe
    short height; // +0x10
    NSString * fullPath; // +0x18
    WAEJTextureStorage * textureStorage; // +0x20
    unsigned int format; // +0x28
    unsigned int fbo; // +0x2c
    NSMutableDictionary * params; // +0x30
    NSBlockOperation * loadCallback; // +0x38
    WAEJSharedTextureCache * textureCache; // +0x40
    BOOL readOnly; // +0x48
    BOOL originPixel; // +0x49
    CGSize resize; // +0x50
    double rescale; // +0x60
    WAEJFileSystem * fileSystem; // +0x68
    BOOL _isExternalTexture; // +0x70
    BOOL _loadFailedForBackground; // +0x71
    sk_sp<SkImage> _skImage; // +0x78
}
+ (id)cachedTextureWithPathDeprecated:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 cache:(id)arg4 fileSystem:(id)arg5 glContext:(id)arg6;
+ (id)cachedTextureWithPath:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 cache:(id)arg4 fileSystem:(id)arg5 glContext:(id)arg6;
+ (id)imageWithPixels:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)imageWithPixelsAndScale:(id)arg1 width:(int)arg2 height:(int)arg3 scale:(float)arg4;
+ (void)premultiplyPixels:(const char *)arg1 to:(char *)arg2 byteLength:(int)arg3 format:(unsigned int)arg4 scriptView:(id)arg5;
+ (void)unPremultiplyPixels:(const char *)arg1 to:(char *)arg2 byteLength:(int)arg3 format:(unsigned int)arg4 scriptView:(id)arg5;
+ (void)flipPixelsY:(char *)arg1 bytesPerRow:(int)arg2 rows:(int)arg3;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPathDeprecated:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 fileSystem:(id)arg4 glContext:(id)arg5;
- (id)initWithPath:(id)arg1 loadOnQueue:(id)arg2 callback:(id)arg3 fileSystem:(id)arg4 glContext:(id)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 format:(unsigned int)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixels:(id)arg3;
- (id)initAsRenderTargetWithWidth:(int)arg1 height:(int)arg2 fbo:(unsigned int)arg3;
- (id)initWithUIImage:(id)arg1;
- (id)initWithSkImage:(sk_sp<SkImage>)arg1;
- (void)dealloc;
- (void)maybeReleaseStorage;
- (void)ensureMutableKeepPixels:(BOOL)arg1 forTarget:(unsigned int)arg2;
- (double)lastUsed;
- (unsigned int)textureId;
- (BOOL)isDynamic;
- (short)width;
- (short)height;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)createWithTexture:(id)arg1;
- (void)onCallback:(id)arg1;
- (void)createWhenCallbackLoaded:(id)arg1;
- (void)createWithPixels:(id)arg1 format:(unsigned int)arg2;
- (void)createWithPixels:(id)arg1 format:(unsigned int)arg2 target:(unsigned int)arg3;
- (void)uploadCompressedPixels:(id)arg1 target:(unsigned int)arg2;
- (void)updateWithPixels:(id)arg1 atX:(int)arg2 y:(int)arg3 width:(int)arg4 height:(int)arg5;
- (id)pixels;
- (id)loadOriginPixel:(id)arg1 data:(id)arg2;
- (id)loadPixelsFromPath:(id)arg1;
- (id)loadPixelsFromUIImage:(id)arg1;
- (id)getParam:(unsigned int)arg1;
- (void)setParam:(unsigned int)arg1 param:(id)arg2;
- (void)bindWithFilter:(unsigned int)arg1;
- (void)bindToTarget:(unsigned int)arg1;
- (void)changeGLTexture:(unsigned int)arg1 target:(unsigned int)arg2;
- (id)image;
- (unsigned int)format;
- (BOOL)drawFlippedY;
- (void)setDrawFlippedY:(BOOL)arg1;
- (BOOL)lazyLoaded;
- (id)textureCache;
- (void)setTextureCache:(id)arg1;
- (BOOL)readOnly;
- (BOOL)originPixel;
- (void)setOriginPixel:(BOOL)arg1;
- (CGSize)resize;
- (void)setResize:(CGSize)arg1;
- (double)rescale;
- (void)setRescale:(double)arg1;
- (BOOL)isExternalTexture;
- (BOOL)loadFailedForBackground;
- (void)setLoadFailedForBackground:(BOOL)arg1;
- (sk_sp<SkImage>)skImage;
- (void)setSkImage:(sk_sp<SkImage>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

