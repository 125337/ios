@interface WCAdConventionalHalfScreenGridMediaView : WCAdConventionalHalfScreenMediaBaseView <UIScrollViewDelegate>
{
    BOOL _isUpdatingLayout; // +0x8
    NSArray * _mediaItems; // +0x10
    NSArray * _mediaImages; // +0x18
    MMScrollView * _scrollView; // +0x20
    UIPageControl * _pageCtrl; // +0x28
    long long _clickIndex; // +0x30
    long long _currentIndex; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 clickIndex:(long long)arg3 delegate:(id)arg4;
- (void)dealloc;
- (CGSize)fetchMediaSize;
- (CGSize)fetchMediaContentSize;
- (double)fetchMediaContentHeightWithWidth:(double)arg1;
- (double)fetchMediaContentWidthWithHeight:(double)arg1;
- (id)fetchMediaImage;
- (long long)fetchCurrentIndex;
- (id)mediaImages;
- (id)generateImageViewWithMediaItem:(id)arg1;
- (id)scrollView;
- (id)pageCtrl;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateMediaContentWithWidth:(double)arg1 height:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)mediaItems;
- (void)setMediaItems:(id)arg1;
- (void)setMediaImages:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setPageCtrl:(id)arg1;
- (long long)clickIndex;
- (void)setClickIndex:(long long)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (BOOL)isUpdatingLayout;
- (void)setIsUpdatingLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
