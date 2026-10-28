@interface WCFinderEditVideoProgressCollectionViewCell : UICollectionViewCell
{
    UIImageView * _imageView; // +0x8
    WCFinderAnimationLoadingView * _loadingView; // +0x10
}
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithImage:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
