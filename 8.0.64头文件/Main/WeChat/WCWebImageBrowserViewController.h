@interface WCWebImageBrowserViewController : PhotoViewController
{
    NSCache * _watermarkImageCache; // +0x88
    WCImageSearchEntity * _searchEntity; // +0x90
    MMWebViewMpInfoModel * _mpInfoModel; // +0x98
    WCWebImageButtonsContainerView * _bottomBarContainerView; // +0xa0
    ImageBrowseButton * _moreBtn; // +0xa8
    ImageBrowseButton * _downloadImageBtn; // +0xb0
    ImageBrowseButton * _searchBtn; // +0xb8
    ImageBrowseButton * _circleToSearchBtn; // +0xc0
    WCWebImageSourceInfoButton * _imageSourceBtn; // +0xc8
    WCWebImageBrowserConfig * _config; // +0xd0
}
- (id)initWithConfig:(id)arg1;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 appScene:(unsigned long long)arg4 referer:(id)arg5;
- (id)circleToSearchBtn;
- (void)initBottomBar;
- (void)initBottomBarForCircleToSearch;
- (void)relayoutBottomBar;
- (void)showBottomBarContainerInAnimation;
- (void)hideBottomBarContainerInAnimation;
- (void)reportSearchBtnExposed;
- (void)reportCircleToSearchBtnExposed;
- (void)tryReportSimilarImgOperation:(unsigned long long)arg1;
- (BOOL)shouldAddWatermark;
- (id)getWatermarkImage:(id)arg1 data:(id)arg2;
- (id)getColorL1;
- (void)onClickMoreBtn;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickImageSourceBtn;
- (void)onClickCircleToSearchBtn;
- (void)updateCurrentImageSourceButton;
- (void)updateCurrentImageSearchButton;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)onFullScreenItemDragCancel;
- (id)searchEntity;
- (void)setSearchEntity:(id)arg1;
- (id)mpInfoModel;
- (void)setMpInfoModel:(id)arg1;
- (id)bottomBarContainerView;
- (void)setBottomBarContainerView:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)downloadImageBtn;
- (void)setDownloadImageBtn:(id)arg1;
- (id)searchBtn;
- (void)setSearchBtn:(id)arg1;
- (void)setCircleToSearchBtn:(id)arg1;
- (id)imageSourceBtn;
- (void)setImageSourceBtn:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
