@interface WCContentItemViewTemplateHotImage : WCContentItemBaseView <WCImageViewDelegate, UIGestureRecognizerDelegate, WCImageFullScreeViewMgrExt, WCFacadeExt, WCCanvasPageViewControllerDelegate>
{
    WCDataItem * m_oDataItem; // +0x38
    WCMediaItem * m_oMediaItem; // +0x40
    WCImageView * m_oWCCoverImage; // +0x48
    NSMutableArray * m_arrMediaItem; // +0x50
    NSMutableArray * m_arrImageView; // +0x58
    NSMutableSet * _setViewMediaIndex; // +0x60
    unsigned long long _viewInitIndex; // +0x68
    NSMutableSet * _setScaleOutMediaIndex; // +0x70
    NSMutableSet * _setScaleInMediaIndex; // +0x78
    unsigned int _loadedStartTime; // +0x80
    unsigned int _loadedEndTime; // +0x84
    NSMutableDictionary * _dicMediaStartTime; // +0x88
    NSMutableDictionary * _dicMediaEndTime; // +0x90
    NSMutableArray * _arrNeedLogMediaID; // +0x98
    NSMutableArray * _arrPreloadMediaID; // +0xa0
    NSMutableArray * _arrDownloadMediaID; // +0xa8
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onLongPressedWCImage:(id)arg1;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onClickWCImageFrom3DTouch:(id)arg1;
- (void)onClickWCImage:(id)arg1 needEdit:(BOOL)arg2 From3DTouch:(BOOL)arg3;
- (id)currentViewController;
- (void)onClickWCCanvasImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1;
- (void)hideMenu;
- (void)tryLogThumbImageLoadedEffiency:(BOOL)arg1;
- (void)tryLogClickBigImage;
- (id)genLogStrWithIndexSet:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(long long)arg2;
- (void)onCloseCanvasPageView;
- (void)initFullScreenData;
- (void)deleteFullScreenData;
- (void)initFullScreeImageViews;
- (void)deleteFullScreeImageViews;
- (void).cxx_destruct;
@end

