@interface BraceletWorkoutImagePreviewViewController : MMUIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, MMWebImageViewDelegate>
{
    BOOL _hasSourceFrame; // +0x70
    BOOL _didPerformPresentAnimation; // +0x71
    BOOL _isDismissing; // +0x72
    NSString * _imageURL; // +0x78
    UIImage * _originImage; // +0x80
    NSArray * _imageURLs; // +0x88
    NSArray * _originImages; // +0x90
    NSArray * _imageTitles; // +0x98
    unsigned long long _initialIndex; // +0xa0
    unsigned long long _currentIndex; // +0xa8
    UIView * _sourceView; // +0xb0
    UIScrollView * _scrollView; // +0xb8
    UIImageView * _imageView; // +0xc0
    UILabel * _captionLabel; // +0xc8
    UIView * _pageControlView; // +0xd0
    NSMutableArray * _pageDotViews; // +0xd8
    NSMutableArray * _pageScrollViews; // +0xe0
    NSMutableArray * _pageImageViews; // +0xe8
    CGPoint _imageViewPanStartCenter; // +0xf0
    CGRect _sourceFrameInWindow; // +0x100
}
+ (void)presentFromViewController:(id)arg1 imageURL:(id)arg2 image:(id)arg3 sourceView:(id)arg4;
+ (void)presentFromViewController:(id)arg1 imageURLs:(id)arg2 images:(id)arg3 initialIndex:(unsigned long long)arg4 sourceView:(id)arg5;
+ (void)presentFromViewController:(id)arg1 imageURLs:(id)arg2 images:(id)arg3 initialIndex:(unsigned long long)arg4 sourceView:(id)arg5 imageTitles:(id)arg6;
- (id)initWithImageURL:(id)arg1 image:(id)arg2 sourceView:(id)arg3;
- (id)initWithImageURLs:(id)arg1 images:(id)arg2 initialIndex:(unsigned long long)arg3 sourceView:(id)arg4;
- (id)initWithImageURLs:(id)arg1 images:(id)arg2 initialIndex:(unsigned long long)arg3 sourceView:(id)arg4 imageTitles:(id)arg5;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)onLoadImageOK:(id)arg1;
- (unsigned long long)p_imageItemCount;
- (void)p_setupPagedImageViews;
- (void)p_setupPageControlView;
- (void)p_updatePageControlView;
- (void)p_layoutPageControlView;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onPan:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)p_updateCurrentIndexForPagingScrollView:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)p_performPresentAnimation;
- (void)p_dismissWithCurrentState;
- (void)p_setupCaptionLabel;
- (void)p_updateCaptionLabel;
- (void)p_layoutCaptionLabel;
- (id)p_currentImageTitle;
- (void)p_layoutImageView;
- (void)p_layoutPagedImageViews;
- (void)p_centerImageViewInScrollView:(id)arg1;
- (CGRect)p_aspectFitFrameForImage:(id)arg1 inBounds:(CGRect)arg2;
- (BOOL)p_captureSourceFrameIfNeeded:(id)arg1;
- (CGRect)p_sourceFrameInView;
- (id)p_currentZoomScrollView;
- (id)p_imageAtIndex:(unsigned long long)arg1 imageView:(id)arg2;
- (CGRect)p_currentImageFrameInView;
- (id)p_currentImage;
- (id)p_imageFromSourceView;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)imageURLs;
- (void)setImageURLs:(id)arg1;
- (id)originImages;
- (void)setOriginImages:(id)arg1;
- (id)imageTitles;
- (void)setImageTitles:(id)arg1;
- (unsigned long long)initialIndex;
- (void)setInitialIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (CGRect)sourceFrameInWindow;
- (void)setSourceFrameInWindow:(CGRect)arg1;
- (BOOL)hasSourceFrame;
- (void)setHasSourceFrame:(BOOL)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)captionLabel;
- (void)setCaptionLabel:(id)arg1;
- (id)pageControlView;
- (void)setPageControlView:(id)arg1;
- (id)pageDotViews;
- (void)setPageDotViews:(id)arg1;
- (id)pageScrollViews;
- (void)setPageScrollViews:(id)arg1;
- (id)pageImageViews;
- (void)setPageImageViews:(id)arg1;
- (BOOL)didPerformPresentAnimation;
- (void)setDidPerformPresentAnimation:(BOOL)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (CGPoint)imageViewPanStartCenter;
- (void)setImageViewPanStartCenter:(CGPoint)arg1;
- (void).cxx_destruct;
@end
