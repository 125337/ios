@interface MMGifPreviewBrowserView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, IMMAssetICloudExt, MMAssetPickerBrowserViewProtocol>
{
    MMWebImageView * m_gifView; // +0x8
    UIView * m_gifViewBk; // +0x10
    UIImageView * m_icloudImageIcon; // +0x18
    UILabel * m_icloudLabel; // +0x20
    CGSize m_originImageSize; // +0x28
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x38
    BOOL requestUneditedAsset; // +0x40
    BOOL shouldPlayWithEditAttr; // +0x41
    NSData * m_originData; // +0x48
    id <MMImagePickerControlCenter> controlCenter; // +0x50
    MMAssetInfo * assetInfo; // +0x58
    id <MMAssetPickerBrowserViewDelegate> browserDelegate; // +0x60
    MMAssetPickerBrowserStateInfo * m_stateInfo; // +0x68
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)initGifView;
- (void)showIcloudViewWithText:(id)arg1 isLoading:(BOOL)arg2;
- (void)loadAsset;
- (void)onFinishLoadImage:(id)arg1 imageData:(id)arg2;
- (void)loadThumbImage:(id)arg1;
- (BOOL)updateGifViewWithData:(id)arg1 originSize:(CGSize)arg2;
- (void)updateGifViewFrameWithOriginSize:(CGSize)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onSingleTap:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (id)originData;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (BOOL)requestUneditedAsset;
- (void)setRequestUneditedAsset:(BOOL)arg1;
- (BOOL)shouldPlayWithEditAttr;
- (void)setShouldPlayWithEditAttr:(BOOL)arg1;
- (id)browserDelegate;
- (void)setBrowserDelegate:(id)arg1;
- (id)stateInfo;
- (void).cxx_destruct;
@end
