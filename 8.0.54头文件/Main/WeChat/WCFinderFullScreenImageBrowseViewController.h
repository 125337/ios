@interface WCFinderFullScreenImageBrowseViewController : MMUIViewController <UIScrollViewDelegate, FullScreenGestureDelegate>
{
    UIImage * _originImage; // +0x68
    NSString * _imageURL; // +0x70
    UIImageView * _imageView; // +0x78
    UIScrollView * _scrollView; // +0x80
    id /* block */ _dismissblock; // +0x88
    WXFullScreenGestureRecognizer * _fullScreenGestrure; // +0x90
    id /* block */ _dismissBlock; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    WCFinderFullScreenImageBrowseTransition * _transition; // +0xa8
}
+ (void)showInViewController:(id)arg1 imageURL:(id)arg2 dismissBlock:(id /* block */)arg3;
- (id)initWithStartFrame:(CGRect)arg1;
- (void)viewDidLoad;
- (void)setUpUI;
- (void)setOriginImage:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (id)loadingView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (id)originImage;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id /* block */)dismissblock;
- (void)setDismissblock:(id /* block */)arg1;
- (id)fullScreenGestrure;
- (void)setFullScreenGestrure:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (void)setLoadingView:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (void).cxx_destruct;
@end

