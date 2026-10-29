@interface MMImgFullScreenImageView_Control : UIView
{
    BOOL _askXiaoWeiDefaultLayoutDidResolve; // +0x8
    BOOL _askXiaoWeiDefaultPrimaryTitleVisible; // +0x9
    BOOL _askXiaoWeiDefaultHiddenForToolbarOverflow; // +0xa
    MMImgFullScreenImageView<MMImgFullScreenImageView_ControlDelegate> * _imageView; // +0x10
    UIView * _toolView; // +0x18
    SightIconView * _progressView; // +0x20
    UIView * _statusOverlayView; // +0x28
    SightIconView * _statusIconView; // +0x30
    UILabel * _statusTipsLabel; // +0x38
    ImageBrowseButton * _closeBtn; // +0x40
    ImageBrowseButton * _hdImgBtn; // +0x48
    ImageBrowseButton * _hdImgStatusBtn; // +0x50
    WCC2CImageBrowseButton * _livePhotoBtn; // +0x58
    WCC2CImageSourceInfoButton * _sourceInfoBtn; // +0x60
    WCC2CImageEnterWeAppButton * _enterWeAppBtn; // +0x68
    WCMomentsBizOriginalArticleButton * _originalArticleBtn; // +0x70
    ImageBrowseButton * _customLeftBtn; // +0x78
    ImageBrowseButton * _shareBtn; // +0x80
    ImageBrowseButton * _downloadBtn; // +0x88
    ImageBrowseButton * _locateBtn; // +0x90
    ImageBrowseButton * _imgFastBrowseBtn; // +0x98
    ImageBrowseButton * _askXiaoWeiBtn; // +0xa0
    ImageBrowseButton * _moreBtn; // +0xa8
    NSString * _customBottomLeftTitle; // +0xb0
    id /* block */ _customBottomLeftActioin; // +0xb8
    CommonMessageSourceInfoHandler * _sourceInfoHandler; // +0xc0
    MMImgDataItem * _item; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1 item:(id)arg2 imageView:(id)arg3;
- (void)initViews;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setToolViewAlpha:(double)arg1;
- (void)setCustomBottomLeftTitle:(id)arg1 customBottomLeftAction:(id /* block */)arg2;
- (void)updateUI;
- (void)updateDownloadingStatus:(float)arg1 bHD:(BOOL)arg2;
- (void)updateSendingStatus:(float)arg1;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)updateToolbarHDR;
- (void)updateICloudLoadingStatus:(float)arg1;
- (void)hideICloudLoading;
- (id)getLeftButtons;
- (id)getRightButtons;
- (double)calButtonsWidth:(id)arg1;
- (id)getAllLeftButtons;
- (id)getAllRightButtons;
- (void)shrinkHDImgBtn;
- (void)shrinkLivePhotoBtn;
- (void)shrinkWeAppBtn;
- (BOOL)canShowCloseButton;
- (void)updateAskXiaoWeiBtn;
- (void)fallbackAskXiaoWeiToPrimaryTitle;
- (void)shrinkAskXiaoWeiToIcon;
- (BOOL)canShowHDImgButton;
- (BOOL)canShowHDImgStatusButton;
- (void)notifyAskXiaoWeiButtonExposureIfVisible;
- (BOOL)canShowLivePhotoBtn;
- (BOOL)canShowSourceInfoButton;
- (BOOL)canShowEnterWeAppButton;
- (BOOL)canShowOriginalArticleButton;
- (BOOL)canShowCustomLeftButton;
- (BOOL)canShowShareButton;
- (BOOL)canShowDownloadButton;
- (BOOL)canShowLocateButton;
- (BOOL)canShowImgFastBrowseButton;
- (BOOL)canShowAskXiaoWeiButton;
- (BOOL)canShowMoreButton;
- (void)animateShowStatusViewWithTips:(id)arg1 iconType:(int)arg2;
- (void)updateStatusLayout;
- (id)toolView;
- (id)progressView;
- (id)statusOverlayView;
- (id)statusIconView;
- (id)statusTipsLabel;
- (id)closeBtn;
- (id)hdImgBtn;
- (id)hdImgStatusBtn;
- (id)livePhotoBtn;
- (id)sourceInfoBtn;
- (id)enterWeAppBtn;
- (id)originalArticleBtn;
- (id)customLeftBtn;
- (void)updateCustomLeftTitle;
- (id)shareBtn;
- (id)downloadBtn;
- (id)locateBtn;
- (BOOL)isChangeIconClicfgOn;
- (id)imgFastBrowseBtn;
- (id)askXiaoWeiBtn;
- (id)moreBtn;
- (void)onCloseBtnClick;
- (void)onHDImgBtnClick:(id)arg1;
- (void)onHDImgStatusBtnClick;
- (void)onLivePhotoBtnClick;
- (void)onSourceInfoBtnClick;
- (void)onWeAppBtnClick;
- (void)onOriginalArticleBtnClick;
- (void)onCustomLeftBtnClick;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onLocateBtnClick:(id)arg1;
- (void)onImgFastBrowseBtnClick:(id)arg1;
- (void)onAskXiaoWeiBtnClick:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void)setToolView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setStatusOverlayView:(id)arg1;
- (void)setStatusIconView:(id)arg1;
- (void)setStatusTipsLabel:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setHdImgBtn:(id)arg1;
- (void)setHdImgStatusBtn:(id)arg1;
- (void)setLivePhotoBtn:(id)arg1;
- (void)setSourceInfoBtn:(id)arg1;
- (void)setEnterWeAppBtn:(id)arg1;
- (void)setOriginalArticleBtn:(id)arg1;
- (void)setCustomLeftBtn:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setLocateBtn:(id)arg1;
- (void)setImgFastBrowseBtn:(id)arg1;
- (void)setAskXiaoWeiBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (id)customBottomLeftTitle;
- (void)setCustomBottomLeftTitle:(id)arg1;
- (id /* block */)customBottomLeftActioin;
- (void)setCustomBottomLeftActioin:(id /* block */)arg1;
- (id)sourceInfoHandler;
- (void)setSourceInfoHandler:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)askXiaoWeiDefaultLayoutDidResolve;
- (void)setAskXiaoWeiDefaultLayoutDidResolve:(BOOL)arg1;
- (BOOL)askXiaoWeiDefaultPrimaryTitleVisible;
- (void)setAskXiaoWeiDefaultPrimaryTitleVisible:(BOOL)arg1;
- (BOOL)askXiaoWeiDefaultHiddenForToolbarOverflow;
- (void)setAskXiaoWeiDefaultHiddenForToolbarOverflow:(BOOL)arg1;
- (void).cxx_destruct;
@end
