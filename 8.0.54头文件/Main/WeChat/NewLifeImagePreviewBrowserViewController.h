@interface NewLifeImagePreviewBrowserViewController : FullScreenViewController <MultiImageScrollViewDelegate, MMImageLoaderObserver>
{
    BOOL _isZoomingFromText; // +0x69
    long long _previewIndex; // +0x70
    NSMutableArray * _pictureInfos; // +0x78
    id /* block */ _previewPhotoDetailCompletion; // +0x80
    UIPageControl * _pageControl; // +0x88
    MultiImageScrollView * _imageScrollView; // +0x90
    UIImageView * _animationImageView; // +0x98
    NSMutableSet * _urlDownloadSet; // +0xa0
}
- (id)init;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)initLayout;
- (id)imageScrollView;
- (id)pageControl;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)onChangePage;
- (id)getImagePaths;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imageAtPage:(unsigned int)arg1 isMainThread:(BOOL)arg2;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragToClose;
- (BOOL)ignorePageIndexTitle;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)loadImageWith:(id)arg1 token:(id)arg2 path:(id)arg3 isMainThread:(BOOL)arg4;
- (id)animationImageView;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (BOOL)isZoomingFromText;
- (void)setIsZoomingFromText:(BOOL)arg1;
- (long long)previewIndex;
- (void)setPreviewIndex:(long long)arg1;
- (id)pictureInfos;
- (void)setPictureInfos:(id)arg1;
- (id /* block */)previewPhotoDetailCompletion;
- (void)setPreviewPhotoDetailCompletion:(id /* block */)arg1;
- (void)setPageControl:(id)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setAnimationImageView:(id)arg1;
- (id)urlDownloadSet;
- (void)setUrlDownloadSet:(id)arg1;
- (void).cxx_destruct;
@end

