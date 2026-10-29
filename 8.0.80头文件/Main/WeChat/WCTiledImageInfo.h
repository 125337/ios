@interface WCTiledImageInfo : NSObject
{
    int _row; // +0x8
    int _col; // +0xc
    UIImageView * _imageView; // +0x10
    CGRect _imageRect; // +0x18
}
- (id)imageView;
- (void)setImageView:(id)arg1;
- (CGRect)imageRect;
- (void)setImageRect:(CGRect)arg1;
- (int)row;
- (void)setRow:(int)arg1;
- (int)col;
- (void)setCol:(int)arg1;
- (void).cxx_destruct;
@end
