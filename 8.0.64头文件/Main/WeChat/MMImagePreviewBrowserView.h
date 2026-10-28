@interface MMImagePreviewBrowserView : ImageScrollView <IMMAssetICloudExt, MMAssetPickerBrowserViewProtocol>
{
    BOOL requestUneditedAsset; // +0x22
    BOOL shouldPlayWithEditAttr; // +0x23
    BOOL _isLivePhotoSelected; // +0x24
    int _pickerScene; // +0x28
    id <MMImagePickerControlCenter> controlCenter; // +0x30
    MMAssetInfo * assetInfo; // +0x38
    id <MMAssetPickerBrowserViewDelegate> browserDelegate; // +0x40
    MMAssetPickerBrowserStateInfo * m_stateInfo; // +0x48
    ColorGradientView * _iCloudBgView; // +0x50
    MMAssetICloudLoadingView * _iCloudLoadingView; // +0x58
    WCLivePhotoButton * _livePhotoButton; // +0x60
    MMUIButton * _livePhotoNewButton; // +0x68
    UIImageView * _livePhotoSelectImageView; // +0x70
    WCLivePhotoBrowseReport * _livePhotoBrowseReport; // +0x78
    CGPoint _livePhotoPhotoPosition; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initLivePhotoBrowseReport;
- (void)initICloudLoadingView;
- (void)loadAsset;
- (void)onOriginSelectChanged;
- (void)loadHDRImage:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)updateLivePhotoButtonPosition:(CGPoint)arg1;
- (void)layoutLivePhotoButton;
- (void)setupLivePhotoButtonStyle:(unsigned long long)arg1;
- (void)setLivePhotoButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)initLivePhotoButton;
- (void)updateLivePhotoViewWithAssetInfo:(id)arg1 isSelected:(BOOL)arg2;
- (void)showLivePhotoViewWithAssetInfo:(id)arg1 isSelected:(BOOL)arg2 isValidate:(BOOL)arg3;
- (BOOL)isSnsScene;
- (void)configLivePhotoDataReport;
- (id)genLivePhotoReportDict;
- (void)reportLivePhotoExposeData;
- (void)reportLivePhotoPlayData:(long long)arg1;
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
- (int)pickerScene;
- (void)setPickerScene:(int)arg1;
- (id)iCloudBgView;
- (void)setICloudBgView:(id)arg1;
- (id)iCloudLoadingView;
- (void)setICloudLoadingView:(id)arg1;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (id)livePhotoNewButton;
- (void)setLivePhotoNewButton:(id)arg1;
- (id)livePhotoSelectImageView;
- (void)setLivePhotoSelectImageView:(id)arg1;
- (CGPoint)livePhotoPhotoPosition;
- (void)setLivePhotoPhotoPosition:(CGPoint)arg1;
- (BOOL)isLivePhotoSelected;
- (void)setIsLivePhotoSelected:(BOOL)arg1;
- (id)livePhotoBrowseReport;
- (void)setLivePhotoBrowseReport:(id)arg1;
- (void).cxx_destruct;
@end
