@interface WCFinderLiveEditImageViewController : WCFinderRootEditImageViewController <MMFinderLiveCoverEnhanceTaskDelegate>
{
    BOOL _showPreviewButton; // +0x70
    BOOL _currentNavBarHidden; // +0x71
    NSString * _previewBulletinTitle; // +0x78
    id /* block */ _createCoverEnhanceTaskBlock; // +0x80
    UIView * _topBlurView; // +0x88
    MMFinderLiveEditImagePreviewPageSheet * _previewPageSheet; // +0x90
    UIImage * _originalImage; // +0x98
    UIImage * _enhancedImage; // +0xa0
    NSString * _originImgUrl; // +0xa8
    MMFinderLiveCoverEnhanceTask * _enhanceTask; // +0xb0
    unsigned long long _startLoadingTimeInMs; // +0xb8
    CGSize _cropImageRatio; // +0xc0
}
- (id)initWithImage:(id)arg1 editImageAttr:(id)arg2 originImgUrl:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)showEditImageViewOn;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (void)startEnhanceImgIfNeeded;
- (void)endEnhanceImgWithResult:(id)arg1;
- (void)uploadImg:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldSaveUnCropImages;
- (unsigned long long)getCurrentCoverEnhanceLoadingTime;
- (id)getLoadingTimeStr;
- (void)showCoverEnhanceGuideIfNeeded;
- (BOOL)forceShowGuide;
- (void)reportCoverEnhanceActionJsonDict:(id)arg1;
- (void)onLiveEditImageLayoutViewClickEditImagePreview:(id)arg1;
- (void)onLiveEditImageLayoutViewClickEnhanceImage:(id)arg1 enhanceImgSelected:(BOOL)arg2;
- (void)initPreviewPageSheet;
- (void)onLiveCoverEnhanceTaskSucceed:(id)arg1;
- (void)onLiveCoverEnhanceTaskFailed:(id)arg1;
- (CGSize)cropImageRatio;
- (void)setCropImageRatio:(CGSize)arg1;
- (BOOL)showPreviewButton;
- (void)setShowPreviewButton:(BOOL)arg1;
- (id)previewBulletinTitle;
- (void)setPreviewBulletinTitle:(id)arg1;
- (id /* block */)createCoverEnhanceTaskBlock;
- (void)setCreateCoverEnhanceTaskBlock:(id /* block */)arg1;
- (BOOL)currentNavBarHidden;
- (void)setCurrentNavBarHidden:(BOOL)arg1;
- (id)topBlurView;
- (void)setTopBlurView:(id)arg1;
- (id)previewPageSheet;
- (void)setPreviewPageSheet:(id)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (id)enhancedImage;
- (void)setEnhancedImage:(id)arg1;
- (id)originImgUrl;
- (void)setOriginImgUrl:(id)arg1;
- (id)enhanceTask;
- (void)setEnhanceTask:(id)arg1;
- (unsigned long long)startLoadingTimeInMs;
- (void)setStartLoadingTimeInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
