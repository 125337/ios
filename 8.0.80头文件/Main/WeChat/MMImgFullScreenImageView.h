@interface MMImgFullScreenImageView : UIView <ImageScrollViewDelegate, MMImgFullScreenImageView_ControlDelegate>
{
    BOOL _askXiaoWeiMenuVisible; // +0x8
    BOOL _isViewApprear; // +0x9
    BOOL _isViewDisapprear; // +0xa
    unsigned int _livePhotoClickCount; // +0xc
    MMImgDataItem * _item; // +0x10
    MMImgFullScreenViewController<MMImgFullScreenImageViewDelegate> * _viewController; // +0x18
    id /* block */ _askXiaoWeiButtonExposureHandler; // +0x20
    ImageScrollView * _imageScrollView; // +0x28
    MMImgFullScreenImageView_Control * _controlView; // +0x30
    MMImgFullScreenImageReporter * _reporter; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 item:(id)arg2 viewController:(id)arg3;
- (void)initViews;
- (void)layoutSubviews;
- (void)setControlViewAlpha:(double)arg1;
- (void)setToolViewAlpha:(double)arg1;
- (BOOL)isToolViewHidden;
- (void)setCustomBottomLeftTitle:(id)arg1 customBottomLeftAction:(id /* block */)arg2;
- (void)updateUI;
- (void)setAskXiaoWeiMenuPresented:(BOOL)arg1;
- (void)notifyAskXiaoWeiButtonExposureIfVisible;
- (void)updateDownloadingStatus:(float)arg1 bHD:(BOOL)arg2;
- (void)updateICloudLoadingStatus:(float)arg1;
- (void)updateSendingStatus:(float)arg1;
- (BOOL)canShowLivePhotoBtn;
- (void)setPageContentInset:(UIEdgeInsets)arg1;
- (void)scheduleToolViewAutoHideIfNeeded;
- (void)initImage;
- (void)asyncLoadHDImage;
- (void)doUpdateHDImage:(id)arg1 imageData:(id)arg2 imageSize:(CGSize)arg3;
- (unsigned int)status;
- (id)controlView;
- (id)imageScrollView;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (BOOL)canShowShareButton;
- (BOOL)canShowLocateButton;
- (BOOL)canShowImgFastBrowseButton;
- (void)onClickCloseButton;
- (BOOL)canShowAskXiaoWeiButton;
- (void)onClickHDImgButton;
- (void)onClickHDImgStatusButton;
- (void)onClickLivePhotoButton;
- (void)playLivePhotoWithFile;
- (void)onClickWeAppButton;
- (void)onClickOriginalArticleButton;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickLocateButton:(id)arg1;
- (void)onClickImgFastBrowseButton:(id)arg1;
- (void)onClickAskXiaoWeiButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)askXiaoWeiButtonExposureHandler;
- (void)setAskXiaoWeiButtonExposureHandler:(id /* block */)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setControlView:(id)arg1;
- (BOOL)askXiaoWeiMenuVisible;
- (void)setAskXiaoWeiMenuVisible:(BOOL)arg1;
- (BOOL)isViewApprear;
- (void)setIsViewApprear:(BOOL)arg1;
- (BOOL)isViewDisapprear;
- (void)setIsViewDisapprear:(BOOL)arg1;
- (unsigned int)livePhotoClickCount;
- (void)setLivePhotoClickCount:(unsigned int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
