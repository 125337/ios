@interface WCC2CImageScrollView : UIView
{
    BOOL _isViewApprear; // +0x8
    BOOL _isViewDisapprear; // +0x9
    BOOL _isDownadingFromCloudRoam; // +0xa
    unsigned int _livePhotoClickCount; // +0xc
    id <WCC2CImageScrollViewDelegate> _delegate; // +0x10
    HDImageExpireReporter * _imageExpireReporter; // +0x18
    double _buttonLeftPadding; // +0x20
    double _buttonRightPadding; // +0x28
    ImageScrollView * _imageScrollView; // +0x30
    WCC2CImageEnterWeAppButton * _enterWeAppBtn; // +0x38
    WCMomentsBizOriginalArticleButton * _originalArticleBtn; // +0x40
    WCC2CImageSourceInfoButton * _sourceInfoBtn; // +0x48
    ImageBrowseButton * _hdImgBtn; // +0x50
    ImageBrowseButton * _hdImgStatusButton; // +0x58
    ImageBrowseButton * _sessionResourceBtn; // +0x60
    WCC2CImageBrowseButton * _livePhotoBtn; // +0x68
    ImageBrowseButton * _cloudRoamBtn; // +0x70
    ImageBrowseButton * _shareBtn; // +0x78
    ImageBrowseButton * _downloadBtn; // +0x80
    ImageBrowseButton * _imgFastBrowseBtn; // +0x88
    ImageBrowseButton * _moreBtn; // +0x90
    CMessageWrap * _msgWrap; // +0x98
    CommonMessageSourceInfoHandler * _sourceInfoHandler; // +0xa0
    UIImage * _originImageFromPhotos; // +0xa8
    NSData * _originImageDataFromPhotos; // +0xb0
    PHAsset * _originImagePHAsset; // +0xb8
    id /* block */ _customBottomLeftAction; // +0xc0
    id /* block */ _customBottomLeftString; // +0xc8
    unsigned long long _appearTimestamp; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1 msgWrap:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 msgWrap:(id)arg2 customBottomLeftAction:(id /* block */)arg3 customBottomLeftString:(id /* block */)arg4;
- (void)initViews;
- (void)dealloc;
- (void)onViewDidAppear;
- (void)onViewDidDisappear;
- (void)layoutSubviews;
- (id)getImageScrollView;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)setM_delegate:(id)arg1;
- (id)getLeftButtons;
- (id)getRightButtons;
- (double)calButtonsWidth:(id)arg1;
- (void)shrinkHDImgBtn;
- (void)shrinkLivePhotoBtn;
- (void)shrinkWeAppBtn;
- (void)updateToolbar;
- (void)updateToolbarHDR;
- (void)animateHideHDDownloadStatus;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1;
- (void)animateHideHDDownloadFromCloudRoamStatusOnComplete:(float)arg1;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)hideDownloadStatusButton;
- (void)OnDownloadForSaveAlbumFail:(id)arg1;
- (void)setViewsHiddenOnScroll:(BOOL)arg1;
- (void)setViewsAlpha:(double)arg1;
- (id)shareBtn;
- (id)downloadBtn;
- (id)imgFastBrowseBtn;
- (id)moreBtn;
- (id)imageScrollView;
- (id)enterWeAppBtn;
- (id)originalArticleBtn;
- (id)sourceInfoBtn;
- (id)hdImgBtn;
- (id)hdImgStatusButton;
- (id)sessionResourceBtn;
- (id)livePhotoBtn;
- (id)cloudRoamBtn;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onImgFastBrowseBtnClick:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)onShowSessionResource;
- (void)onWeAppBtnClick;
- (void)onClickImgSourceButton:(id)arg1;
- (void)onClickSourceInfoButton:(id)arg1;
- (void)onViewHDImage:(id)arg1;
- (void)_onViewHDImage:(id)arg1;
- (void)onCancelCurrentDownload;
- (void)onClickPreviewHDImgButton;
- (void)showImageControllerWithImage:(id)arg1 Data:(id)arg2;
- (void)onClickLivePhotoButton;
- (void)playLivePhotoWithAsset;
- (void)playLivePhotoWithFile;
- (id)getExistLiveVideoPath;
- (BOOL)canShowShareButton;
- (BOOL)canShowDownloadButton;
- (BOOL)canShowImgFastBrowseButton;
- (BOOL)canShowMoreButton;
- (BOOL)canShowEnterWeAppButton;
- (BOOL)canShowOriginalArticleButton;
- (BOOL)canShowSourceInfoButton;
- (BOOL)canShowHDImgButton;
- (BOOL)canShowHDImgStatusButton;
- (BOOL)canShowSessionResourceBtn;
- (BOOL)canShowLivePhotoBtn;
- (BOOL)canShowCloudRoamBtn;
- (void)showToolView;
- (void)hideToolView;
- (void)setToolViewsHidden:(BOOL)arg1;
- (void)onRoamBackupPackageServiceDownloadFromCloudRoamStart;
- (void)OnDownloadImageOk:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageExpireReporter;
- (void)setImageExpireReporter:(id)arg1;
- (double)buttonLeftPadding;
- (void)setButtonLeftPadding:(double)arg1;
- (double)buttonRightPadding;
- (void)setButtonRightPadding:(double)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setEnterWeAppBtn:(id)arg1;
- (void)setOriginalArticleBtn:(id)arg1;
- (void)setSourceInfoBtn:(id)arg1;
- (void)setHdImgBtn:(id)arg1;
- (void)setHdImgStatusButton:(id)arg1;
- (void)setSessionResourceBtn:(id)arg1;
- (void)setLivePhotoBtn:(id)arg1;
- (void)setCloudRoamBtn:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setImgFastBrowseBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)sourceInfoHandler;
- (void)setSourceInfoHandler:(id)arg1;
- (id)originImageFromPhotos;
- (void)setOriginImageFromPhotos:(id)arg1;
- (id)originImageDataFromPhotos;
- (void)setOriginImageDataFromPhotos:(id)arg1;
- (id)originImagePHAsset;
- (void)setOriginImagePHAsset:(id)arg1;
- (id /* block */)customBottomLeftAction;
- (void)setCustomBottomLeftAction:(id /* block */)arg1;
- (id /* block */)customBottomLeftString;
- (void)setCustomBottomLeftString:(id /* block */)arg1;
- (BOOL)isViewApprear;
- (void)setIsViewApprear:(BOOL)arg1;
- (BOOL)isViewDisapprear;
- (void)setIsViewDisapprear:(BOOL)arg1;
- (unsigned long long)appearTimestamp;
- (void)setAppearTimestamp:(unsigned long long)arg1;
- (unsigned int)livePhotoClickCount;
- (void)setLivePhotoClickCount:(unsigned int)arg1;
- (BOOL)isDownadingFromCloudRoam;
- (void)setIsDownadingFromCloudRoam:(BOOL)arg1;
- (void).cxx_destruct;
@end
