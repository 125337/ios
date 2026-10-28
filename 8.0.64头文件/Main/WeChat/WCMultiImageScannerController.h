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
    SightDraft * _sightDraft; // +0xd8
    WCMomentsPageContext * _pageContext; // +0xe0
    MJTemplatePlayerView * _templatePlayerView; // +0xe8
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
- (id)initWithSight:(id)arg1 originalCell:(id)arg2;
- (void)initSightPlayViewWithCompositeTask:(id)arg1;
- (void)initTemplatePlayerViewWithCompositeTask:(id)arg1;
- (void)dealloc;
- (void)onAssetImageUpdate:(id)arg1 forKey:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)willEnterBackground;
- (void)didEnterForeground;
- (BOOL)hidesStatusBar;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)showFullScreenAnimated:(BOOL)arg1;
- (void)onSingleClicked;
- (void)onChangedWithCurrentIndex:(long long)arg1;
- (void)onFullScreenItemDidDragToRect:(CGRect)arg1;
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
- (void).cxx_destruct;
@end
