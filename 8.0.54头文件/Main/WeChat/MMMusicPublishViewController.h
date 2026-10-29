@interface MMMusicPublishViewController : MMUIViewController <MMSightCameraViewControllerDelegate, MMImagePickerManagerDelegate, ICdnComMgrExt, MMImageLoaderObserver>
{
    MMWebImageView * m_headImageView; // +0x68
    MMUILabel * m_nickLabel; // +0x70
    MMMusicBlurCardView * _blurCardView; // +0x78
    MMUIButton * _editCoverBtn; // +0x80
    MMMusicMVModel * _mvModel; // +0x88
    unsigned long long _fromScene; // +0x90
    UIImage * _customCoverImage; // +0x98
}
- (id)initWithMvModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)reload:(id)arg1;
- (void)reloadCardDisplay;
- (void)onTapEditCoverBtn;
- (void)editCoverOpenCamera;
- (void)editCoverOpenAlbum;
- (void)OnReturn;
- (void)handleKeepDraftOrCancelFinish;
- (void)OnDone;
- (void)showImage:(id)arg1;
- (void)onCardClicked;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)customCoverImage;
- (void)setCustomCoverImage:(id)arg1;
- (void).cxx_destruct;
@end

