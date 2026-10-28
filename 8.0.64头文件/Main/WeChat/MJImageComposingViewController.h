@interface MJImageComposingViewController : MMUIViewController <MMBGMSelectHalfScreenViewControllerDelegate, MJMusicCapsuleViewDelegate, MJImageMusicViewModelDelegate, OMJPlaybackOverlayViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, MJImageBottomBarDelegate, MJImageComposingThumbnailViewDelegate, MJImageTemplatePanelDelegate, MJImageAddTextPanelDelegate, MJImageEditTextPanelDelegate, MJImageDecoPanelDelegate, MJWhenWhereEditPanelDelegate, MJAutoPlayInterceptViewDelegate>
{
    BOOL _isSlidingRenderCollectionView; // +0x70
    BOOL _isAutoPlayEnabled; // +0x71
    BOOL _isPanelShowing; // +0x72
    BOOL _wasLivePhotoAutoDisabled; // +0x73
    id <MJImageComposingViewControllerDelegate> _delegate; // +0x78
    MJImageComposingViewModel * _viewModel; // +0x80
    MMUIButton * _confirmButton; // +0x88
    MJLivePhotoButton * _livePhotoButton; // +0x90
    MJPassthroughView * _panelContainer; // +0x98
    NSMutableArray * _panelStack; // +0xa0
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0xa8
    UIView * _renderView; // +0xb0
    UIView * _renderViewContainer; // +0xb8
    UICollectionView * _renderCollectionView; // +0xc0
    UICollectionViewFlowLayout * _renderCollectionLayout; // +0xc8
    MJRenderGestureView * _renderGestureView; // +0xd0
    MMUIButton * _exitButton; // +0xd8
    NSTimer * _autoPlayTimer; // +0xe0
    MJAutoPlayInterceptView * _autoPlayInterceptView; // +0xe8
    MJMusicCapsuleView * _musicCapsuleView; // +0xf0
    MJImageMusicViewModel * _musicViewModel; // +0xf8
    MMBGMSelectHalfScreenViewController * _musicPanelVC; // +0x100
    MJImagePanelContainer * _topPanel; // +0x108
    MJImageComposingThumbnailView * _thumbnailView; // +0x110
    MJImageBottomBar * _bottomBar; // +0x118
    WCProgressMaskView * _progressMaskView; // +0x120
}
- (void)setupMusicCapsuleView;
- (void)switchMusicEntryViewToMusicSelectedStateWithSongName:(id)arg1;
- (void)switchMusicCapsuleViewToMusicUnSelectedState;
- (void)openMusicPanelWithCompletionHandler:(id /* block */)arg1;
- (void)musicCapsuleViewDidClick:(id)arg1;
- (void)disableMusicInCapsuleView:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)bgmSelectedViewControllerWillStartPlayingVideo:(id)arg1;
- (void)bgmSelectedViewControllerWillStopPlayingVideo:(id)arg1;
- (void)handleMusicSelectResult:(id)arg1;
- (void)anchorMusicSegmentInternal:(id)arg1;
- (void)updateMusicEntranceViewWithResultMusic:(id)arg1;
- (void)removeMusicIfNeeded;
- (void)pauseMusicIfNeeded;
- (void)resumeMusicIfNeeded;
- (void)imageMusicViewModelDidFetchFirstRecMusicData:(id)arg1;
- (void)reportMusicData:(id)arg1;
- (void)bindHandleBox;
- (void)_onHandleBoxContextChanged:(id)arg1;
- (void)_showHandleBoxWithContext:(id)arg1;
- (void)_removeHandleBox;
- (void)_onHandleBoxSettingsChanged:(id)arg1;
- (void)overlayView:(id)arg1 didTapCanvasAtPoint:(CGPoint)arg2;
- (void)handleRenderSingleTapWithLayerID:(id)arg1;
- (id)handleBoxLayerVM;
- (void)overlayView:(id)arg1 didUpdatePosition:(CGPoint)arg2;
- (void)overlayViewDidEndUpdatingPosition:(id)arg1;
- (void)overlayView:(id)arg1 didUpdateRotation:(double)arg2;
- (void)overlayViewDidEndUpdatingRotation:(id)arg1;
- (void)overlayView:(id)arg1 didUpdateScale:(double)arg2;
- (void)overlayViewDidEndUpdatingScale:(id)arg1;
- (void)performHandleBoxAction:(unsigned long long)arg1 withContext:(id)arg2;
- (void)pushEditPanelWithLayer:(id)arg1;
- (void)exportAndPublish;
- (void)didFinishExportWithResult:(id)arg1;
- (void)didFinishExportWithError:(id)arg1;
- (void)_showExportProgressView;
- (void)_removeExportProgressView;
- (void)savePhotoToAlbumWithImagePath:(id)arg1;
- (void)saveLivePhotoToAlbumWithImagePath:(id)arg1 videoPath:(id)arg2;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)checkMemoryLeakOnExit;
- (void)viewDidLoad;
- (void)_setupViews;
- (void)_layoutViews;
- (void)_bindNotifications;
- (void)_unbindNotifications;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)confirmButtonTouchUpInside:(id)arg1;
- (void)renderViewDidTap:(id)arg1;
- (void)renderCollectionViewDidTap:(id)arg1;
- (void)updateRenderInteraction;
- (void)livePhotoButtonTouchUpInside:(id)arg1;
- (void)_updateLivePhotoButton;
- (void)_updateLivePhotoButtonOnStartScrolling;
- (void)_updateLivePhotoButtonOnEndScrolling;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)onBeginQuickReplyMsg;
- (void)onFinishQuickReplyMsg;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)handleInterruption;
- (void)handleResume;
- (void)dismissForVOIPEvents;
- (void)imageBottomBar:(id)arg1 didTapButton:(unsigned long long)arg2;
- (void)disableLivePhotoAutomatically;
- (void)enableLivePhotoAutomatically;
- (void)_shrinkRenderViewAnimated:(BOOL)arg1 panelHeight:(double)arg2 completion:(id /* block */)arg3;
- (void)_expandRenderViewAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_layoutRenderView;
- (void)thumbnailViewDidSelectAddScene:(id)arg1;
- (void)thumbnailViewWillShowDeleteSceneButton:(id)arg1;
- (void)thumbnailViewWillHideDeleteSceneButton:(id)arg1;
- (void)thumbnailViewDidShowDeletingButton:(id)arg1;
- (void)thumbnailViewDidHideDeletingButton:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_renderCollectionViewWillStart;
- (void)_renderCollectionViewDidStop;
- (void)_handleSnapshotDidUpdate:(id)arg1 forScene:(id)arg2;
- (void)_switchToPreviousScene;
- (void)_switchToNextScene;
- (void)_switchToSceneAtIndex:(unsigned long long)arg1;
- (void)_postProcessOnDidStartup;
- (void)_handleSceneDidAdd;
- (void)_handleSceneDidRemove;
- (void)_handleSceneDidMoveFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_handleSceneDidSwitch;
- (void)_showAddingPicker;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)_handleImagePickingWithAssetInfos:(id)arg1;
- (id)topPanel;
- (void)_removePanelsUntil:(id)arg1;
- (void)_ensurePanelsEmpty;
- (void)_pushPanel:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)popPanel;
- (void)_popPanelAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_popPanelUntil:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)imagePanelRequireStartLoading:(id)arg1 text:(id)arg2 disableInteraction:(BOOL)arg3;
- (void)imagePanelRequireStopLoading:(id)arg1;
- (void)imagePanelRequireStopLoading:(id)arg1 text:(id)arg2 success:(BOOL)arg3;
- (void)_pushTemplatePanel;
- (void)imageTemplatePanelDidFinish:(id)arg1;
- (void)imageTemplatePanelDidFail:(id)arg1;
- (void)_pushAddTextPanel;
- (void)pushEditTextPanel;
- (void)imageAddTextPanel:(id)arg1 didAddTextLayer:(id)arg2;
- (void)editTextPanelDidFinish:(id)arg1;
- (void)_pushDecoPanel;
- (void)imageDecoPanel:(id)arg1 didAddWhenWhereLayer:(id)arg2;
- (void)pushEditWhenWherePanel;
- (void)whenWhereEditPanelDidFinish:(id)arg1;
- (void)whenWhereEditPanelDidSelectUpdateWhere:(id)arg1;
- (void)_presentLocationPickerWithCompletion:(id /* block */)arg1;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (void)autoPlayTimerFired:(id)arg1;
- (void)autoPlayInterceptViewDidReceiveTouch:(id)arg1;
- (id)feedbackGenerator;
- (long long)preferredStatusBarStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (id)panelContainer;
- (void)setPanelContainer:(id)arg1;
- (id)panelStack;
- (void)setPanelStack:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (id)renderView;
- (id)renderViewContainer;
- (id)renderCollectionView;
- (id)renderCollectionLayout;
- (id)renderGestureView;
- (BOOL)isSlidingRenderCollectionView;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)autoPlayTimer;
- (void)setAutoPlayTimer:(id)arg1;
- (BOOL)isAutoPlayEnabled;
- (void)setIsAutoPlayEnabled:(BOOL)arg1;
- (id)autoPlayInterceptView;
- (void)setAutoPlayInterceptView:(id)arg1;
- (BOOL)isPanelShowing;
- (void)setIsPanelShowing:(BOOL)arg1;
- (BOOL)wasLivePhotoAutoDisabled;
- (void)setWasLivePhotoAutoDisabled:(BOOL)arg1;
- (id)musicCapsuleView;
- (void)setMusicCapsuleView:(id)arg1;
- (id)musicViewModel;
- (void)setMusicViewModel:(id)arg1;
- (id)musicPanelVC;
- (void)setMusicPanelVC:(id)arg1;
- (void)setTopPanel:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)progressMaskView;
- (void)setProgressMaskView:(id)arg1;
- (void).cxx_destruct;
@end
