@interface WCFinderFullScreenAvatarView : UIView <UIScrollViewDelegate, FullScreenGestureDelegate>
{
    BOOL _loading; // +0x8
    UIImage * _originImage; // +0x10
    WCFinderFullScreenAvatarConfig * _config; // +0x18
    UIImageView * _imageView; // +0x20
    UIScrollView * _scrollView; // +0x28
    WXFullScreenGestureRecognizer * _fullScreenGestrure; // +0x30
    id /* block */ _dismissBlock; // +0x38
    CGRect _originRect; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)setOriginImage:(id)arg1;
- (void)setOriginRect:(CGRect)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)showInViewController:(id)arg1 dismissBlock:(id /* block */)arg2;
- (BOOL)displayWithContact:(id)arg1 placeholder:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenLongPressBegin;
- (void)showMoreActionIfNeed;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (CGRect)originRect;
- (id)originImage;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)fullScreenGestrure;
- (void)setFullScreenGestrure:(id)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
