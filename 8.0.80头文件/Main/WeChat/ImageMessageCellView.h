@interface ImageMessageCellView : CommonMessageCellView <IDownloadImageExt, IMessageWrapImgExt, IMMAssetICloudExt, MMDragDelegate, MsgImgFullScreenTransitionObject>
{
    YYAsyncImageView * m_imageView; // +0xb8
    UIImageView * m_imageDownloadFailView; // +0xc0
    UIImageView * m_imageLoadingBackgroundView; // +0xc8
    SightIconView * m_imageLoadingView; // +0xd0
    BOOL m_bhasDownloadComplete; // +0xd8
    UIImageView * m_icloudBackground; // +0xe0
    MMAssetICloudLoadingView * m_icloudLoadingView; // +0xe8
    MMDragManager * dragManager; // +0xf0
    UIImageView * tmp_liftingImgView; // +0xf8
    UIDragInteraction * dragInteraction; // +0x100
    UIView * m_imageMaskView; // +0x108
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)updateDragAndDrop;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (double)combinedProgressForCell;
- (void)updateStatus;
- (id)displayViewForImageBrowser;
- (CGRect)showRectForMenuController;
- (void)initImageView;
- (id)getCoverImage;
- (void)addDownloadFailView;
- (void)startLoading;
- (void)startLoadingWithUseProgress:(BOOL)arg1;
- (void)stopLoading;
- (void)showICloudLoading:(BOOL)arg1;
- (void)removeICloudIcon;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowFavoriteMenuItem;
- (BOOL)canShowEditMenuItem;
- (BOOL)canShowSearchMenuItem;
- (id)operationMenuItems;
- (void)doFavorite;
- (void)onForward:(id)arg1;
- (void)showImage;
- (void)showImageNeedEdit:(BOOL)arg1;
- (void)onEdit:(id)arg1;
- (void)onChatImageSearch;
- (void)onCircleToSearch;
- (void)onImageForwardToFinder:(id)arg1;
- (void)onTouchEnded;
- (void)onSendFailButtonClicked:(id)arg1;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)liftingImageNeedRemove;
- (void)onThumbImageSave:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (BOOL)canPeek;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onClickAsRefer;
- (id)accessibilityLabel;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void).cxx_destruct;
@end
