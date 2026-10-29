@interface WCFinderHalfScreenEditImageViewController : WCFinderRootEditImageViewController
{
    BOOL _hiddenCropBtn; // +0x68
    double _stageFrameY; // +0x70
    WCFinderAlbumScrollViewParamModel * _previewScrollViewParamModel; // +0x78
}
- (id)initWithAssets:(id)arg1 images:(id)arg2;
- (void)viewDidLoad;
- (void)showEditImageViewOn;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (BOOL)hiddenCropBtn;
- (void)setHiddenCropBtn:(BOOL)arg1;
- (double)stageFrameY;
- (void)setStageFrameY:(double)arg1;
- (id)previewScrollViewParamModel;
- (void)setPreviewScrollViewParamModel:(id)arg1;
- (void).cxx_destruct;
@end

