@interface WCFinderLiveEditImageViewController : WCFinderRootEditImageViewController
{
    BOOL _showPreviewButton; // +0x70
    BOOL _currentNavBarHidden; // +0x71
    id /* block */ _editImageBackCompletion; // +0x78
    NSString * _previewBulletinTitle; // +0x80
    UIView * _topBlurView; // +0x88
    MMFinderLiveEditImagePreviewPageSheet * _previewPageSheet; // +0x90
    MMUIButton * _backButton; // +0x98
    MMUIButton * _previewButton; // +0xa0
    CGSize _cropImageRatio; // +0xa8
}
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initPreviewPageSheet;
- (BOOL)useTransparentNavibar;
- (void)onClickEditImagePreview;
- (double)getEditAreaTopMargin;
- (void)showEditImageViewOn;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (CGSize)cropImageRatio;
- (void)onEnterEditImageProcess;
- (void)onExitEditImageProcess;
- (id /* block */)editImageBackCompletion;
- (void)setEditImageBackCompletion:(id /* block */)arg1;
- (void)setCropImageRatio:(CGSize)arg1;
- (BOOL)showPreviewButton;
- (void)setShowPreviewButton:(BOOL)arg1;
- (id)previewBulletinTitle;
- (void)setPreviewBulletinTitle:(id)arg1;
- (BOOL)currentNavBarHidden;
- (void)setCurrentNavBarHidden:(BOOL)arg1;
- (id)topBlurView;
- (void)setTopBlurView:(id)arg1;
- (id)previewPageSheet;
- (void)setPreviewPageSheet:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)previewButton;
- (void)setPreviewButton:(id)arg1;
- (void).cxx_destruct;
@end
