@interface MJThumbnailTileCell : UICollectionViewCell
{
    long long _taskID; // +0x8
    UIImage * _image; // +0x10
    CALayer * _imageLayer; // +0x18
    CGSize _imageSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(CGSize)arg1;
- (long long)taskID;
- (void)setTaskID:(long long)arg1;
- (CGSize)imageSize;
- (id)image;
- (id)imageLayer;
- (void)setImageLayer:(id)arg1;
- (void).cxx_destruct;
@end

