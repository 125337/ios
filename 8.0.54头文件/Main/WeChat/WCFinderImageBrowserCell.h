@interface WCFinderImageBrowserCell : UICollectionViewCell <UIScrollViewDelegate, WCFinderFeedImageViewProtocol, UIGestureRecognizerDelegate>
{
    BOOL _panInteracting; // +0x8
    id <WCFinderImageBrowserCellDelegate> _delegate; // +0x10
    WCFinderMediaInfo * _mediaInfo; // +0x18
    UIScrollView * _imageScrollView; // +0x20
    WCFinderFeedMediaWrap * _mediaWrap; // +0x28
    WCFinderFeedImageView * _imageContainer; // +0x30
    WCFinderFeedImageEffectView * _imageEffectView; // +0x38
    UIPanGestureRecognizer * _panGesture; // +0x40
    double _loadingTopOffset; // +0x48
    CGPoint _panStartPoint; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setupSubviews;
- (void)setupGestures;
- (void)layoutSubviews;
- (void)respondsToTapSingleGesture:(id)arg1;
- (void)respondsToTapDoubleGesture:(id)arg1;
- (void)respondsToPanGesture:(id)arg1;
- (void)updateImageLayout;
- (void)setMediaInfo:(id)arg1;
- (void)reloadImage;
- (void)setImage:(id)arg1 isThumb:(BOOL)arg2;
- (void)onFinderImageLoadSuccess:(id)arg1;
- (void)onFinderImageDownloadFail:(id)arg1;
- (void)restoreInteractionWithDuration:(double)arg1;
- (double)maxZoomScaleWithImageSize:(CGSize)arg1;
- (CGRect)getImageViewRect;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)loadingRetry;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaInfo;
- (id)imageScrollView;
- (void)setImageScrollView:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)imageContainer;
- (void)setImageContainer:(id)arg1;
- (id)imageEffectView;
- (void)setImageEffectView:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (CGPoint)panStartPoint;
- (void)setPanStartPoint:(CGPoint)arg1;
- (BOOL)panInteracting;
- (void)setPanInteracting:(BOOL)arg1;
- (double)loadingTopOffset;
- (void)setLoadingTopOffset:(double)arg1;
- (void).cxx_destruct;
@end

