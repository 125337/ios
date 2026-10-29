@interface MsgImgLoaderInfo : NSObject
{
    MsgImgLoaderConfig * _config; // +0x8
    NSMutableArray * _completeBlocks; // +0x10
    UIImage * _image; // +0x18
    NSData * _imageData; // +0x20
    CGSize _imageSize; // +0x28
}
- (id)init;
- (id)description;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)completeBlocks;
- (void)setCompleteBlocks:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (CGSize)imageSize;
- (void)setImageSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
