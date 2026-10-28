@interface WCSNSNodeVideoView : MMUIControl <WCPlayerConfigViewControllerDelegate, WCActionSheetDelegate, WCPlayerConfigDelegate, RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate, WAWxMaterialRefreshExt, WCPlayerEventExt, WCMomentsPlayerSourceControllerDataSource, WCMomentsPlayerSourceControllerDelegate, MJTemplateFullScreenViewControllerExt, MJTemplateFullScreenViewControllerDelegate, WCFacadeExt, UIActionSheetDelegate, WCFacadeExt, MMDragDelegate, WCMomentsFullScreenTransitionProtocol>
{
    BOOL _isImageReady; // +0x8
    BOOL _bIgnoreLongPress; // +0x9
    BOOL _isVodeoPlayContinueInFullScreen; // +0xa
    BOOL _haveMaterialButton; // +0xb
    BOOL _isBufferingViewLoading; // +0xc
    BOOL _hasPendingVideoComposition; // +0xd
    unsigned int _switchingVideoCompositionSeed; // +0x10
    id <WCSNSNodeVideoViewDelegate> _delegate; // +0x18
    WCDataItem * _dataItem; // +0x20
    WCMediaItem * _mediaData; // +0x28
    NSString * _sightPath; // +0x30
    NSString * _cpKey; // +0x38
    unsigned long long _scene; // +0x40
    SightIconView * _playIconView; // +0x48
    WCPlayerView * _playerView; // +0x50
    WCPlayerConfigFullScreenViewController * _videoPlayerVC; // +0x58
    UIImage * _thumbImage; // +0x60
    UIImageView * _thumbImageView; // +0x68
    MMDragManager * _dragManager; // +0x70
    UIImageView * _tmp_liftingImgView; // +0x78
    UIDragInteraction * _dragInteraction; // +0x80
    WCMomentsPlayerSourceController * _playerSourceController; // +0x88
    WCPlayerConfigControlView * _playerConfigControlView; // +0x90
    NSString * _materialFileExt; // +0x98
    UITapGestureRecognizer * _singleGestureRecognizer; // +0xa0
    UILongPressGestureRecognizer * _longGestureRecognizer; // +0xa8
    WCMomentsScrollActionSheet * _actionSheet; // +0xb0
    SessionForwardRecordLogic * _forwardRecordLogic; // +0xb8
    id /* block */ _videoCompositionConfigurationHandler; // +0xc0
    id /* block */ _videoCompositionCompletionHandler; // +0xc8
}
- (void)switchVideoCompositionWithConfigurationHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)resetVideoComposition;
- (void)switchPendingVideoCompositionIfNeeded;
- (void)clearPendingVideoComposition;
- (void)_switchVideoCompositionWithConfigurationHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_resetVideoComposition;
- (void)WCPlayer_onPlayerCreated;
- (BOOL)isSightVideoExist;
- (id)getImage;
- (void)reloadSightPreviewImage;
- (id)forwardRecordLogic;
- (long long)browseScene;
- (void)hideViewWhenShowFullScreenAnimationEnd;
- (void)showViewWhenCloseFullScreenAnimationEnd;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)liftingImageNeedRemove;
- (void)initDataItem:(id)arg1 mediaItem:(id)arg2;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2 withFrame:(CGRect)arg3;
- (void)updateDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)configReportEcsVideoViewOrReset;
- (id)genVideoReportDict;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setBIgnoreLongPress:(BOOL)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)asyncRecordMicroMerchantInteractionIfNeeded;
- (void)updateThumbImage:(id)arg1;
- (id)getPlayerInfoWithMuted:(BOOL)arg1 isFullScreen:(BOOL)arg2 dataItem:(id)arg3 mediaItem:(id)arg4;
- (id)genPlayerConfigControlView;
- (id)generateConfig;
- (BOOL)_isDownloadArgsMatched:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)LongPressEvents:(id)arg1;
- (void)silencePlay;
- (void)currentAutoPlayVideoWillChange;
- (void)silencePlayAtCurrentScreen;
- (void)silenceStopAtCurrentScreen;
- (void)clearPlayerResource;
- (void)onVoiceOverClick;
- (void)silencePauseAtCurrentScreen;
- (void)playInFullScreen:(BOOL)arg1;
- (void)switchPlayerSourceToHDIfNeeded;
- (void)vc:(id)arg1 continuePlayVideo:(id)arg2 silencePlay:(BOOL)arg3;
- (void)vc:(id)arg1 playNewVideo:(id)arg2 silencePlay:(BOOL)arg3;
- (void)onPlayerCreated;
- (void)onWillResumePlay:(id)arg1;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)setupActionSheet;
- (void)setupActionSheetItem;
- (id)createRecentForwardView;
- (void)updateActionSheetIfNeeded;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (id)generateForwardUserInfoWithMediaWrap:(id)arg1;
- (void)onForwardCancle:(id)arg1;
- (void)handleForwardCancel:(id)arg1;
- (void)onForwardSuccess:(id)arg1;
- (void)handleForwardSuccess:(id)arg1;
- (void)onCloseFullScreenPlay:(id)arg1;
- (void)handleWillCloseFullScreen;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onExistPlayAnimationFinish;
- (void)onTapAttachButton:(id)arg1;
- (id)currentPlayerViewForPlayerSourceController:(id)arg1;
- (void)playerSourceController:(id)arg1 didChangeSourceStatus:(long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (BOOL)disableShareAndProgress;
- (BOOL)canShareForMiaoJianApp;
- (id)generateShareInfo;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)openTemplateFullScreenWithTask:(id)arg1 isMuted:(BOOL)arg2 fromViewController:(id)arg3;
- (void)templateFullScreenViewController:(id)arg1 closeFullScreenComplete:(id)arg2;
- (void)handleCloseFullScreenComplete;
- (void)templateFullScreenViewController:(id)arg1 didCancelForward:(id)arg2;
- (void)templateFullScreenViewController:(id)arg1 forwardSuccess:(id)arg2;
- (void)templateFullScreenViewControllerWillClose:(id)arg1;
- (void)templateFullScreenViewControllerDidClose:(id)arg1;
- (void)updateDebugInfoIfNeeded;
- (void)updateDebugInfoInPlayerView:(id)arg1;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(BOOL)arg1;
- (BOOL)addWAOpenWxMaterialButton:(id)arg1;
- (void)handleClickWeAppListOpenMaterial;
- (void)handleClickWeAppOpenMaterial:(id)arg1;
- (id)delegate;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (BOOL)isImageReady;
- (void)setIsImageReady:(BOOL)arg1;
- (id)sightPath;
- (void)setSightPath:(id)arg1;
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (BOOL)bIgnoreLongPress;
- (unsigned long long)scene;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)playerView;
- (id)videoPlayerVC;
- (void)setVideoPlayerVC:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)dragManager;
- (void)setDragManager:(id)arg1;
- (id)tmp_liftingImgView;
- (void)setTmp_liftingImgView:(id)arg1;
- (id)dragInteraction;
- (void)setDragInteraction:(id)arg1;
- (id)playerSourceController;
- (void)setPlayerSourceController:(id)arg1;
- (BOOL)isVodeoPlayContinueInFullScreen;
- (void)setIsVodeoPlayContinueInFullScreen:(BOOL)arg1;
- (id)playerConfigControlView;
- (void)setPlayerConfigControlView:(id)arg1;
- (BOOL)haveMaterialButton;
- (void)setHaveMaterialButton:(BOOL)arg1;
- (id)materialFileExt;
- (void)setMaterialFileExt:(id)arg1;
- (id)singleGestureRecognizer;
- (void)setSingleGestureRecognizer:(id)arg1;
- (id)longGestureRecognizer;
- (void)setLongGestureRecognizer:(id)arg1;
- (BOOL)isBufferingViewLoading;
- (void)setIsBufferingViewLoading:(BOOL)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void)setForwardRecordLogic:(id)arg1;
- (BOOL)hasPendingVideoComposition;
- (void)setHasPendingVideoComposition:(BOOL)arg1;
- (id /* block */)videoCompositionConfigurationHandler;
- (void)setVideoCompositionConfigurationHandler:(id /* block */)arg1;
- (id /* block */)videoCompositionCompletionHandler;
- (void)setVideoCompositionCompletionHandler:(id /* block */)arg1;
- (unsigned int)switchingVideoCompositionSeed;
- (void)setSwitchingVideoCompositionSeed:(unsigned int)arg1;
- (void).cxx_destruct;
@end
