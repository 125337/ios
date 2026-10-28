@interface MMScreenSharingImageBrowserController : MMUIViewController
{
    NSArray * _imageURLs; // +0x70
    double _contentRatioY; // +0x78
    ImageScrollView * _imageView; // +0x80
}
- (id)initWithImageURLs:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutImageViewWithFrame:(CGRect)arg1;
- (id)imageURLs;
- (void)setImageURLs:(id)arg1;
- (double)contentRatioY;
- (void)setContentRatioY:(double)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
