@interface WCContentItemViewTemplateGrid : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, WCAdCommonInteractionLogicDelegate, WCImageViewDelegate, WCImageFullScreeViewMgrExt, WCFacadeExt>
{
    MMAdaptiveLabel * _descriptionView; // +0x38
    MMImageGridView * _imageGridView; // +0x40
    UIButton * _moreButton; // +0x48
    UIButton * _moreImageButton; // +0x50
    WCMediaItem * m_currentMediaItem; // +0x58
    NSMutableArray * m_arrMediaItem; // +0x60
    NSMutableSet * _setViewMediaIndex; // +0x68
    unsigned long long _viewInitIndex; // +0x70
    NSMutableSet * _setScaleOutMediaIndex; // +0x78
    NSMutableSet * _setScaleInMediaIndex; // +0x80
    unsigned int _loadedStartTime; // +0x88
    unsigned int _loadedEndTime; // +0x8c
    NSMutableDictionary * _dicMediaStartTime; // +0x90
    NSMutableDictionary * _dicMediaEndTime; // +0x98
    NSMutableArray * _arrNeedLogMediaID; // +0xa0
    NSMutableArray * _arrPreloadMediaID; // +0xa8
    NSMutableArray * _arrDownloadMediaID; // +0xb0
    SightIconView * _playIconView; // +0xb8
    WCAdCommonInteractionLogic * _commonInteractionLogic; // +0xc0
    WCAdLiveDisplayView * _liveDisplayView; // +0xc8
    unsigned long long _currentFullScreenDisplayMediaIndex; // +0xd0
}
+ (CGSize)fetchImageSizeForAdWithPlayIcon:(id)arg1;
+ (double)heightForDataItem:(id)arg1 showDetail:(BOOL)arg2;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onFavoriteAdd:(id)arg1;
- (void)addFavorite;
- (void)onShareToOpenSDK:(id)arg1;
- (void)shareToOpenSDK;
- (void)onExposeFromImage:(id)arg1;
- (BOOL)canEditImage;
- (void)onEditImage:(id)arg1;
- (void)startEditImage;
- (void)onCircleToSearch;
- (void)onImageWebSearch;
- (void)onSilencePlayLivePhoto;
- (void)startSilencePlayLivePhoto;
- (void)recordDetailPageBrowseMediaWithIndexIfNeeded:(unsigned int)arg1;
- (void)recordDetailPageBrowseMediaIfNeeded:(id)arg1;
- (id)behaviourInfoSession;
- (void)updateImageViewFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)imageViewOfIndex:(unsigned long long)arg1;
- (void)showAllImageViews;
- (BOOL)isFullScreenShowImageView:(id)arg1;
- (void)recoverImageViewsHiddenState:(id)arg1;
- (BOOL)shouldAdAddLiveDisplayView:(id)arg1;
- (void)updateLiveStatus:(int)arg1;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDecelerating;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)tryToReportAdImageDownload:(id)arg1 isSuccess:(BOOL)arg2 isCancel:(BOOL)arg3;
- (void)onClickWCImage:(id)arg1;
- (void)onClickWCImageFrom3DTouch:(id)arg1;
- (void)onClickWCImage:(id)arg1 needEdit:(BOOL)arg2 From3DTouch:(BOOL)arg3 silencePlay:(BOOL)arg4;
- (id)currentViewController;
- (void)asyncRecordMicroMerchantInteractionIfNeeded:(unsigned long long)arg1 bNeedEdit:(BOOL)arg2;
- (void)onClickWCAdImage:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)hideMenu;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)tryLogThumbImageLoadedEffiency:(BOOL)arg1;
- (void)tryLogClickBigImage;
- (id)genLogStrWithIndexSet:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(long long)arg2;
- (id)commonInteractionLogic;
- (id)interactionView;
- (void)initInteractionViewWithDataItem:(id)arg1;
- (id)onAdCommonInteractionLogicFetchDataItem;
- (unsigned long long)onAdCommonInteractionLogicFetchScene;
- (void)onAdCommonInteractionLogicShakeActionFired;
- (void)onCloseCanvasPageView;
- (BOOL)accessibilityActivate;
- (void)restoreAccessibilityFocusIfNeeded;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (void)setCommonInteractionLogic:(id)arg1;
- (id)liveDisplayView;
- (void)setLiveDisplayView:(id)arg1;
- (unsigned long long)currentFullScreenDisplayMediaIndex;
- (void)setCurrentFullScreenDisplayMediaIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

