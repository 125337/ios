@interface WCMultiImageScannerController : FullScreenViewController <IMMAssetExt, SightAssetPreviewViewDelegate, WCAudioModuleDelegate, UIScrollViewDelegate, PageScrollViewDelegate, PageScrollViewDataSource, WCActionSheetDelegate>
{
    PageScrollView * _pageScrollView; // +0x78
    UIButton * _deleteButton; // +0x80
    NSMutableArray * _arrViewItem; // +0x88
    unsigned long long _currentIndex; // +0x90
    BOOL _isComeFromRotate; // +0x98
    BOOL m_bAnimating; // +0x99
    SightAssetPreviewView * _sightPlayView; // +0xa0
    id <WCMultiImageScannerDelegate> _scannerDelegate; // +0xa8
    NSMutableSet * _setPreviewItem; // +0xb0
    BOOL _hasDeleteItem; // +0xb8
    NSMutableArray * _originalFrameArr; // +0xc0
    BOOL _isNeedResumeWXMusic; // +0xc8
    BOOL _isNeedResumeFinderMinimize; // +0xc9
    BOOL _isAssetMuted; // +0xca
    NSString * _audioModuleIdentifier; // +0xd0
    BOOL _nativePreviewClosing; // +0xd8
    BOOL _ignoresNativeDragUntilEnd; // +0xd9
    BOOL _nativePreviewChromeHidden; // +0xda
    BOOL _nativePreviewHasAppeared; // +0xdb
    SightDraft * _sightDraft; // +0xe0
    WCMomentsPageContext * _pageContext; // +0xe8
    MJTemplatePlayerView * _templatePlayerView; // +0xf0
    UIViewController * _nativeSourceViewController; // +0xf8
    WCNativeAlbumTransition * _nativePreviewTransition; // +0x100
    NSMapTable * _nativePreviewChromeViewAlphas; // +0x108
    CGSize _originalWindowSize; // +0x110
    CGSize _nativePreviewContainerSize; // +0x120
}
- (void)initNavigationBar;
- (void)initScrollView;
- (void)updateTitle;
- (void)deleteCurrentItem;
- (void)showAlert:(id)arg1;
- (id)alertTitle;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)showFullScreen;
- (void)hideFullScreen;
- (void)hideVCAnimation;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)handleSingleTap;
- (CGRect)frameForPageScrollView;
- (CGRect)frameForPageAtItem:(unsigned long long)arg1;
- (CGSize)contentSizeForPageScrollView;
- (CGPoint)contentOffsetForPageScrollView;
- (void)onMainWindowFrameChanged;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (void)_tryToUpdatePlayerToMute:(BOOL)arg1;
- (id)initWithViewItems:(id)arg1 currentIndex:(unsigned long long)arg2 originalCell:(id)arg3;
- (id)initWithViewItems:(id)arg1 currentIndex:(unsigned long long)arg2 originalCell:(id)arg3 sourceViewController:(id)arg4;
- (id)initWithSight:(id)arg1 originalCell:(id)arg2;
- (id)initWithSight:(id)arg1 originalCell:(id)arg2 sourceViewController:(id)arg3;
- (void)initSightPlayViewWithCompositeTask:(id)arg1;
- (void)initTemplatePlayerViewWithCompositeTask:(id)arg1;
- (void)dealloc;
- (void)onAssetImageUpdate:(id)arg1 forKey:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)usesExpandedPhonePreviewLayout;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)willEnterBackground;
- (void)didEnterForeground;
- (BOOL)hidesStatusBar;
- (BOOL)prefersStatusBarHidden;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)showFullScreenAnimated:(BOOL)arg1;
- (void)onSingleClicked;
- (void)onChangedWithCurrentIndex:(long long)arg1;
- (void)onFullScreenItemDidDragToRect:(CGRect)arg1;
- (void)setNativePreviewChromeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNativePreviewNavigationItemsEnabled:(BOOL)arg1;
- (void)layoutNativePreviewNavigationBackground;
- (id)nativePreviewThumbnail;
- (id)makeNativePreviewTransition;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)updateNativePreviewDragSize;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragEnd;
- (unsigned long long)currentIndex:(id)arg1;
- (unsigned long long)numberOfItems:(id)arg1;
- (id)pageScrollView:(id)arg1 viewForItem:(unsigned long long)arg2;
- (id)generateLivePhotoBrowseReportWithMMImage:(id)arg1;
- (id)imageViewModelForPageScrollView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)resumeVideoIfNeeded;
- (void)pauseVideoIfNeeded;
- (void)autoPlayLivePhotoIfReady:(unsigned long long)arg1;
- (void)startPlayingWithPageIndex:(unsigned long long)arg1;
- (void)pausePlayingWithPageIndex:(unsigned long long)arg1;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (id)pageScrollView;
- (void)setPageScrollView:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)arrViewItem;
- (void)setArrViewItem:(id)arg1;
- (id)scannerDelegate;
- (void)setScannerDelegate:(id)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)templatePlayerView;
- (void)setTemplatePlayerView:(id)arg1;
- (CGSize)originalWindowSize;
- (void)setOriginalWindowSize:(CGSize)arg1;
- (id)nativeSourceViewController;
- (void)setNativeSourceViewController:(id)arg1;
- (id)nativePreviewTransition;
- (void)setNativePreviewTransition:(id)arg1;
- (BOOL)nativePreviewClosing;
- (void)setNativePreviewClosing:(BOOL)arg1;
- (BOOL)ignoresNativeDragUntilEnd;
- (void)setIgnoresNativeDragUntilEnd:(BOOL)arg1;
- (CGSize)nativePreviewContainerSize;
- (void)setNativePreviewContainerSize:(CGSize)arg1;
- (BOOL)nativePreviewChromeHidden;
- (void)setNativePreviewChromeHidden:(BOOL)arg1;
- (BOOL)nativePreviewHasAppeared;
- (void)setNativePreviewHasAppeared:(BOOL)arg1;
- (id)nativePreviewChromeViewAlphas;
- (void)setNativePreviewChromeViewAlphas:(id)arg1;
- (void).cxx_destruct;
@end
