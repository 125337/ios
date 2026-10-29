@interface MMLocalImageInfo : NSObject
{
    long long _imageDataType; // +0x8
    UIImage * _image; // +0x10
}
- (long long)imageDataType;
- (void)setImageDataType:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end

