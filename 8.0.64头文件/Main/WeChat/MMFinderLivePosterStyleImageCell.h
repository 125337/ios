@interface MMFinderLivePosterStyleImageCell : UICollectionViewCell
{
    NSString * _backgroundImageUri; // +0x8
    MMUIImageView * _imageView; // +0x10
}
+ (id)reuseId;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
