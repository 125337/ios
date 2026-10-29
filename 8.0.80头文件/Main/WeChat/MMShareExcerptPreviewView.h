@interface MMShareExcerptPreviewView : UIScrollView
{
    UIImageView * _imageView; // +0x8
    double _bottomInset; // +0x10
}
- (id)initWithImage:(id)arg1;
- (void)setupUIWithImage:(id)arg1;
- (void)setupImageView:(id)arg1;
- (void)setBottomInset:(double)arg1;
- (void)safeAreaInsetsDidChange;
- (void)showInView:(id)arg1;
- (void)playShowAnimation;
- (void)playDismissAnimation;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (double)bottomInset;
- (void).cxx_destruct;
@end
