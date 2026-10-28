@interface WCFinderPureImageCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedImageView * _imageContainer; // +0x8
    UIImage * _bindImage; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (CGRect)getImageContainerRect;
- (id)imageContainer;
- (void)setImageContainer:(id)arg1;
- (id)bindImage;
- (void)setBindImage:(id)arg1;
- (void).cxx_destruct;
@end
