@interface FavFullScreenImageButtonsContainerView : UIView
{
    BOOL _toolsVisible; // +0x8
    BOOL _autoHideToolsEnabled; // +0x9
    BOOL _askXiaoWeiMenuPresented; // +0xa
    WCC2CImageBrowseButton * _livePhotoBtn; // +0x10
    ImageBrowseButton * _shareBtn; // +0x18
    SightIconView * _saveLoadingIconView; // +0x20
    ImageBrowseButton * _downloadBtn; // +0x28
    ImageBrowseButton * _moreBtn; // +0x30
    ImageBrowseButton * _previewRawBtn; // +0x38
    ImageBrowseButton * _previewRawStatusButton; // +0x40
    ImageBrowseButton * _askXiaoWeiBtn; // +0x48
    id /* block */ _clickLivePhotoHandler; // +0x50
    id /* block */ _canShowShareButton; // +0x58
    id /* block */ _canShowDownloadButton; // +0x60
    id /* block */ _canShowMoreButton; // +0x68
    id /* block */ _canShowPreviewRawButton; // +0x70
    id /* block */ _canShowPreviewRawStatusButton; // +0x78
    id /* block */ _canShowAskXiaoWeiButton; // +0x80
    id /* block */ _previewRawBtnAttributedTitle; // +0x88
    id /* block */ _clickShareButtonHandler; // +0x90
    id /* block */ _clickDownloadButtonHandler; // +0x98
    id /* block */ _clickMoreButtonHandler; // +0xa0
    id /* block */ _clickPreviewRawButtonHandler; // +0xa8
    id /* block */ _clickCancelRawDownloadButtonHandler; // +0xb0
    id /* block */ _clickAskXiaoWeiButtonHandler; // +0xb8
    id /* block */ _askXiaoWeiButtonExposureHandler; // +0xc0
    id /* block */ _imageDidShowHandler; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)askXiaoWeiBtn;
- (id)previewRawBtn;
- (id)previewRawStatusButton;
- (id)livePhotoBtn;
- (id)shareBtn;
- (id)saveLoadingIconView;
- (id)downloadBtn;
- (id)moreBtn;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateAskXiaoWeiButtonWithPrimaryTitleVisible:(BOOL)arg1;
- (void)notifyAskXiaoWeiButtonExposureIfVisible;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickLivePhotoButton;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onPreviewRawBtnClick:(id)arg1;
- (void)onCancelRawDownload:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)onAskXiaoWeiBtnClick:(id)arg1;
- (void)showImageInfo:(id)arg1;
- (void)hiddenButtons;
- (void)updateAskXiaoWeiMenuPresented:(BOOL)arg1;
- (void)updatePreviewRawBtn;
- (void)updateRawDownloadPercent:(unsigned int)arg1;
- (void)updateVideoDownloadPercent:(unsigned int)arg1;
- (void)updateDownloadBtnDownloadStatus:(unsigned int)arg1;
- (void)setLivePhotoBtn:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setSaveLoadingIconView:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (void)setPreviewRawBtn:(id)arg1;
- (void)setPreviewRawStatusButton:(id)arg1;
- (void)setAskXiaoWeiBtn:(id)arg1;
- (id /* block */)clickLivePhotoHandler;
- (void)setClickLivePhotoHandler:(id /* block */)arg1;
- (id /* block */)canShowShareButton;
- (void)setCanShowShareButton:(id /* block */)arg1;
- (id /* block */)canShowDownloadButton;
- (void)setCanShowDownloadButton:(id /* block */)arg1;
- (id /* block */)canShowMoreButton;
- (void)setCanShowMoreButton:(id /* block */)arg1;
- (id /* block */)canShowPreviewRawButton;
- (void)setCanShowPreviewRawButton:(id /* block */)arg1;
- (id /* block */)canShowPreviewRawStatusButton;
- (void)setCanShowPreviewRawStatusButton:(id /* block */)arg1;
- (id /* block */)canShowAskXiaoWeiButton;
- (void)setCanShowAskXiaoWeiButton:(id /* block */)arg1;
- (id /* block */)previewRawBtnAttributedTitle;
- (void)setPreviewRawBtnAttributedTitle:(id /* block */)arg1;
- (id /* block */)clickShareButtonHandler;
- (void)setClickShareButtonHandler:(id /* block */)arg1;
- (id /* block */)clickDownloadButtonHandler;
- (void)setClickDownloadButtonHandler:(id /* block */)arg1;
- (id /* block */)clickMoreButtonHandler;
- (void)setClickMoreButtonHandler:(id /* block */)arg1;
- (id /* block */)clickPreviewRawButtonHandler;
- (void)setClickPreviewRawButtonHandler:(id /* block */)arg1;
- (id /* block */)clickCancelRawDownloadButtonHandler;
- (void)setClickCancelRawDownloadButtonHandler:(id /* block */)arg1;
- (id /* block */)clickAskXiaoWeiButtonHandler;
- (void)setClickAskXiaoWeiButtonHandler:(id /* block */)arg1;
- (id /* block */)askXiaoWeiButtonExposureHandler;
- (void)setAskXiaoWeiButtonExposureHandler:(id /* block */)arg1;
- (id /* block */)imageDidShowHandler;
- (void)setImageDidShowHandler:(id /* block */)arg1;
- (BOOL)toolsVisible;
- (void)setToolsVisible:(BOOL)arg1;
- (BOOL)autoHideToolsEnabled;
- (void)setAutoHideToolsEnabled:(BOOL)arg1;
- (BOOL)askXiaoWeiMenuPresented;
- (void)setAskXiaoWeiMenuPresented:(BOOL)arg1;
- (void).cxx_destruct;
@end
