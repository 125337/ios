@interface FavFullScreenImageButtonsContainerView : UIView
{
    WCC2CImageBrowseButton * _livePhotoBtn; // +0x8
    ImageBrowseButton * _shareBtn; // +0x10
    ImageBrowseButton * _downloadBtn; // +0x18
    ImageBrowseButton * _moreBtn; // +0x20
    id /* block */ _clickLivePhotoHandler; // +0x28
    id /* block */ _canShowShareButton; // +0x30
    id /* block */ _canShowDownloadButton; // +0x38
    id /* block */ _canShowMoreButton; // +0x40
    id /* block */ _clickShareButtonHandler; // +0x48
    id /* block */ _clickDownloadButtonHandler; // +0x50
    id /* block */ _clickMoreButtonHandler; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)livePhotoBtn;
- (id)shareBtn;
- (id)downloadBtn;
- (id)moreBtn;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickLivePhotoButton;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)showImageInfo:(id)arg1;
- (void)hiddenButtons;
- (void)setLivePhotoBtn:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (id /* block */)clickLivePhotoHandler;
- (void)setClickLivePhotoHandler:(id /* block */)arg1;
- (id /* block */)canShowShareButton;
- (void)setCanShowShareButton:(id /* block */)arg1;
- (id /* block */)canShowDownloadButton;
- (void)setCanShowDownloadButton:(id /* block */)arg1;
- (id /* block */)canShowMoreButton;
- (void)setCanShowMoreButton:(id /* block */)arg1;
- (id /* block */)clickShareButtonHandler;
- (void)setClickShareButtonHandler:(id /* block */)arg1;
- (id /* block */)clickDownloadButtonHandler;
- (void)setClickDownloadButtonHandler:(id /* block */)arg1;
- (id /* block */)clickMoreButtonHandler;
- (void)setClickMoreButtonHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
