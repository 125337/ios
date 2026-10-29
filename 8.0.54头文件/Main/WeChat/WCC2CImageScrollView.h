@interface WCC2CImageScrollView : UIView
{
    BOOL _didClickSaveButton; // +0x8
    id <WCC2CImageScrollViewDelegate> _delegate; // +0x10
    double _buttonLeftPadding; // +0x18
    double _buttonRightPadding; // +0x20
    ImageScrollView * _imageScrollView; // +0x28
    ImageBrowseButton * _hdImgBtn; // +0x30
    ImageBrowseButton * _hdImgStatusButton; // +0x38
    WCC2CShadowLabel * _hdImgExpireLabel; // +0x40
    ImageBrowseButton * _saveBtn; // +0x48
    ImageBrowseButton * _previewHDImgBtn; // +0x50
    ImageBrowseButton * _sessionResourceBtn; // +0x58
    CMessageWrap * _msgWrap; // +0x60
    UIImage * _originImageFromPhotos; // +0x68
    NSData * _originImageDataFromPhotos; // +0x70
    id /* block */ _customBottomLeftAction; // +0x78
    id /* block */ _customBottomLeftString; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 msgWrap:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 msgWrap:(id)arg2 customBottomLeftAction:(id /* block */)arg3 customBottomLeftString:(id /* block */)arg4;
- (void)initViews;
- (void)dealloc;
- (void)layoutSubviews;
- (id)getImageScrollView;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)setM_delegate:(id)arg1;
- (double)getLeftButtonWidth;
- (void)updateButtonLeftPadding:(double)arg1 buttonRightPadding:(double)arg2;
- (void)updateToolbar;
- (void)animateHideHDDownloadStatus;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)hideDownloadStatusButton;
- (void)OnDownloadForSaveAlbumFail:(id)arg1;
- (void)setViewsHiddenOnScroll:(BOOL)arg1;
- (void)setViewsAlpha:(double)arg1;
- (id)imageScrollView;
- (id)hdImgExpireLabel;
- (id)hdImgBtn;
- (id)hdImgStatusButton;
- (id)saveBtn;
- (id)previewHDImgBtn;
- (id)sessionResourceBtn;
- (void)onShowSessionResource;
- (void)onViewHDImage:(id)arg1;
- (BOOL)showExpireSheetView;
- (void)_onViewHDImage:(id)arg1;
- (void)onCancelCurrentDownload;
- (void)onClickSaveHDImageAlbumButton;
- (void)onClickPreviewHDImgButton;
- (void)showImageControllerWithImage:(id)arg1 Data:(id)arg2;
- (BOOL)canShowLeftButton;
- (BOOL)canShowExpireLabel;
- (BOOL)canShowHDImgButton;
- (BOOL)canShowHDImgStatusButton;
- (BOOL)canShowSaveButton;
- (BOOL)canShowPreviewHDImgButton;
- (BOOL)canShowSessionResourceBtn;
- (void)showToolView;
- (void)hideToolView;
- (void)setToolViewsHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)buttonLeftPadding;
- (void)setButtonLeftPadding:(double)arg1;
- (double)buttonRightPadding;
- (void)setButtonRightPadding:(double)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setHdImgBtn:(id)arg1;
- (void)setHdImgStatusButton:(id)arg1;
- (void)setHdImgExpireLabel:(id)arg1;
- (void)setSaveBtn:(id)arg1;
- (void)setPreviewHDImgBtn:(id)arg1;
- (void)setSessionResourceBtn:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)didClickSaveButton;
- (void)setDidClickSaveButton:(BOOL)arg1;
- (id)originImageFromPhotos;
- (void)setOriginImageFromPhotos:(id)arg1;
- (id)originImageDataFromPhotos;
- (void)setOriginImageDataFromPhotos:(id)arg1;
- (id /* block */)customBottomLeftAction;
- (void)setCustomBottomLeftAction:(id /* block */)arg1;
- (id /* block */)customBottomLeftString;
- (void)setCustomBottomLeftString:(id /* block */)arg1;
- (void).cxx_destruct;
@end

