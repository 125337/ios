@interface MMLayer : NSObject
{
    shared_ptr<WeVisionUtil::Layer> _nativeLayer; // +0x8
    BOOL _flipX; // +0x18
    unsigned int _rgba8TextureID; // +0x1c
    unsigned int _lumaTextureID; // +0x20
    unsigned int _chromaTextureID; // +0x24
    unsigned int _zOrder; // +0x28
    CGSize _imageSize; // +0x30
    CGSize _size; // +0x40
    CGPoint _origin; // +0x50
    CGRect _frame; // +0x60
    CGRect _cropRect; // +0x80
}
+ (id)layer;
- (id)initWithNativeLayer:(void *)arg1;
- (void)setZOrder:(unsigned int)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setImageSize:(CGSize)arg1;
- (void)setSize:(CGSize)arg1;
- (void)setOrigin:(CGPoint)arg1;
- (void)setRgba8TextureID:(unsigned int)arg1;
- (void)setLumaTextureID:(unsigned int)arg1;
- (void)setChromaTextureID:(unsigned int)arg1;
- (void)setFlipX:(BOOL)arg1;
- (void)setCropRect:(CGRect)arg1;
- (void)addSubLayer:(id)arg1;
- (void)removeFromSuperLayer;
- (CGRect)frame;
- (CGSize)imageSize;
- (CGSize)size;
- (CGPoint)origin;
- (unsigned int)rgba8TextureID;
- (unsigned int)lumaTextureID;
- (unsigned int)chromaTextureID;
- (CGRect)cropRect;
- (BOOL)flipX;
- (unsigned int)zOrder;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
