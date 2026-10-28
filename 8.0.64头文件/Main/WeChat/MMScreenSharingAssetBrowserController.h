@interface MMScreenSharingAssetBrowserController : MMUIViewController <MMAssetPickerBrowserViewDelegate>
{
    NSArray * _assetInfos; // +0x70
    double _contentRatioY; // +0x78
    UIView<MMAssetPickerBrowserViewProtocol> * _assetView; // +0x80
}
- (id)initWithAssetInfos:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)assetViewWithFrame:(CGRect)arg1 assetInfo:(id)arg2;
- (void)layoutAssetViewWithFrame:(CGRect)arg1;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)onAssetBrowserViewPlayingStateChanged:(id)arg1 isPlaying:(BOOL)arg2;
- (id)assetInfos;
- (void)setAssetInfos:(id)arg1;
- (double)contentRatioY;
- (void)setContentRatioY:(double)arg1;
- (id)assetView;
- (void)setAssetView:(id)arg1;
- (void).cxx_destruct;
@end
