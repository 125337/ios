@interface WCTiledImageData : NSObject
{
    BOOL _isPNGImage; // +0x8
    NSData * _imageData; // +0x10
    UIImage * _image; // +0x18
    NSCache * _tileImages; // +0x20
    NSMutableDictionary * _request; // +0x28
}
- (id)tileImages;
- (id)request;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)isPNGImage;
- (void)setIsPNGImage:(BOOL)arg1;
- (void)setTileImages:(id)arg1;
- (void)setRequest:(id)arg1;
- (void).cxx_destruct;
@end
