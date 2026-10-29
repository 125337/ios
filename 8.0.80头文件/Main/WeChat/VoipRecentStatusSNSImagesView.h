@interface VoipRecentStatusSNSImagesView : UIView <WCFacadeExt, VoipRecentStatusProperties>
{
    BOOL _shouldPlaySound; // +0x8
    BOOL _isSoundBtnHidden; // +0x9
    BOOL _isVisable; // +0xa
    id /* block */ _didSlideImagesCallback; // +0x10
    NSArray * _mediaItems; // +0x18
    VoipRecentStatusImagesView * _imagesView; // +0x20
    NSMutableArray * _dotViews; // +0x28
    UIPageControl * _pageControl; // +0x30
}
- (id)initWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (BOOL)shouldPlaySound;
- (void)setShouldPlaySound:(BOOL)arg1;
- (BOOL)isSoundBtnHidden;
- (void)setIsSoundBtnHidden:(BOOL)arg1;
- (BOOL)isVisable;
- (void)setIsVisable:(BOOL)arg1;
- (id /* block */)didSlideImagesCallback;
- (void)setDidSlideImagesCallback:(id /* block */)arg1;
- (id)mediaItems;
- (void)setMediaItems:(id)arg1;
- (id)imagesView;
- (void)setImagesView:(id)arg1;
- (id)dotViews;
- (void)setDotViews:(id)arg1;
- (id)pageControl;
- (void)setPageControl:(id)arg1;
- (void).cxx_destruct;
@end
