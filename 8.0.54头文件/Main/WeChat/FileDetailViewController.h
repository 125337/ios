@interface FileDetailViewController : MMUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, FileDetailLogicDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WKNavigationDelegate, MMCircleProgressViewDelegate, MinimizationTransitionControllerDelegate, WAWxMaterialRefreshExt, FullScreenGestureDelegate>
{
    FileDetailLogicController * m_logicController; // +0x68
    BOOL m_bDownloading; // +0x70
    BOOL m_bIsDelayingDownload; // +0x71
    BOOL m_bFailDownload; // +0x72
    UIScrollView * m_containerView; // +0x78
    NSMutableArray * m_viewArray; // +0x80
    NSMutableArray * m_defaultYArray; // +0x88
    NSMutableSet * m_viewSet; // +0x90
    UIButton * m_btnDownload; // +0x98
    MMUILabel * m_labCannotOpen; // +0xa0
    UIButton * m_btnViewDetail; // +0xa8
    UIButton * m_btnOpenByApp; // +0xb0
    UIButton * m_btnOpenByWeApp; // +0xb8
    UIImageView * m_fileTypeImage; // +0xc0
    MMUILabel * m_labelFileName; // +0xc8
    MMUILabel * m_sizeLabel; // +0xd0
    MMUILabel * m_infoLabel; // +0xd8
    MMUILabel * m_warningLabel; // +0xe0
    MMUILabel * m_stateLabel; // +0xe8
    UIButton * m_cancelBtn; // +0xf0
    UIImageView * m_downloadTriggerView; // +0xf8
    MMCircleProgressView * m_circleProgressView; // +0x100
    BOOL m_bPreview; // +0x108
    unsigned int m_uiPreviewType; // +0x10c
    BOOL m_vcDidAppear; // +0x110
    BOOL m_bOpenMode; // +0x111
    ShareDataToOpenSDKController * m_shareOpenSDKController; // +0x118
    WKWebView * m_webView; // +0x120
    UIViewController<FileDetailCustomizedPreviewController> * m_customizedPreviewController; // +0x128
    BOOL _bIsNaviBarHide; // +0x130
    UITapGestureRecognizer * _singleTapRec; // +0x138
    BOOL _bIsDisableTapRec; // +0x140
    CGPoint m_lastContentOffset; // +0x148
    UIButton * m_shareToFriendBtn; // +0x158
    unsigned long long _startDownloadTime; // +0x160
    unsigned long long _enterTime; // +0x168
    unsigned long long _quitTime; // +0x170
    unsigned long long _finishDownloadTime; // +0x178
    NSURL * m_tmpLinkDestURL; // +0x180
    WXFullScreenGestureRecognizer * m_gesture; // +0x188
    ImageBrowseButton * _sessionSourceBtn; // +0x190
    MMUIButton * _sessionContainerBtn; // +0x198
    BOOL m_showInfoOnly; // +0x1a0
    BOOL _navigationBarVisibleInteractionEnabled; // +0x1a1
    BOOL _b_forceEnableJS; // +0x1a2
    BOOL _isPlayingAudio; // +0x1a3
    BOOL _viewDidScrollWhenTapping; // +0x1a4
    BOOL _hasAddHistory; // +0x1a5
    id /* block */ _downloadStartReportBlock; // +0x1a8
    id /* block */ _downloadSuccessReportBlock; // +0x1b0
    id <FileDetailViewControllerDelegate> _delegate; // +0x1b8
    unsigned long long _minimizeGenerateType; // +0x1c0
    double _yOffsetAdjustFactor; // +0x1c8
    ImageScrollView * _imgPreview; // +0x1d0
    MMLoadingIndicatorView * _loadingIndicatorView; // +0x1d8
    MiniRecTransitionController * _minimizationTransitionController; // +0x1e0
    MMScrollActionSheet * _scrollActionSheet; // +0x1e8
}
- (id)init;
- (void)setLogicController:(id)arg1;
- (id)logicController;
- (void)pushSelfInNav:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isAudioPlaying;
- (void)dealloc;
- (id)GetFileDisplayName;
- (void)SetProgressHide:(BOOL)arg1;
- (void)SetDownloadHide:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)didBecomeActive;
- (void)updateNavBarItems;
- (void)initInfoLabel;
- (void)initWaringLabel;
- (void)updateWaringLabel:(id)arg1;
- (void)initStateLable;
- (void)updateStateLabel:(id)arg1;
- (void)initCancelButton;
- (void)onCancelButtonClicked;
- (void)initSessionResourceButton;
- (void)onSessionSourceBtnClick;
- (id)generateExpiredText;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)layoutMyViews;
- (void)recordView:(id)arg1;
- (void)updateViewsInBottomTopEdge:(double)arg1;
- (id)webView;
- (void)updateWebScrollViewInset;
- (void)InitPreview;
- (void)didInitPreview;
- (void)didLoadWebView;
- (void)InitInfoiew;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)updateOpenWeAppButton;
- (void)initOpenWeAppButton;
- (void)initSizeLabel;
- (void)initCannotOpenLabelIfNeeded;
- (void)InitCircleProgressView;
- (void)InitLoadingIndicatorView;
- (void)OnLookDetail;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)InitDownload;
- (void)InitDownload:(BOOL)arg1;
- (BOOL)checkContinueDownloadForAppMsg;
- (void)OnOperate:(id)arg1;
- (void)addActionSheetItem:(id)arg1 icon:(id)arg2 toArray:(id)arg3;
- (void)OnReturn;
- (void)onRevokedReturn;
- (void)onSwitchScene:(id)arg1;
- (BOOL)isExceptionFileName:(id)arg1;
- (void)StartDownload:(id)arg1;
- (void)StopDownload;
- (void)StopDownloadAndUpdateView;
- (void)ShowDownloadBtn;
- (void)ShowDownloadBtn:(id)arg1;
- (void)ShowProgressView;
- (void)ShowIndicatorViewWithRealtimeUploading:(BOOL)arg1;
- (void)showRealtimeUploadingStatus;
- (void)HiddenIndicatorView;
- (void)SetProgressPartLen:(unsigned long long)arg1 TotalLen:(unsigned long long)arg2;
- (id)minimizeKey;
- (BOOL)isOnMinimizeState;
- (BOOL)isPreviewTypeAudio;
- (id)getRightBarButtonItem;
- (BOOL)isPreviewTypeVideo;
- (BOOL)isVideoCanPlay;
- (id)getFavoritesItemData;
- (unsigned int)currentPreviewType;
- (id)currentCustomizedPreviewController;
- (id)customizedPreviewControllerForPreviewType:(unsigned int)arg1;
- (void)removeCustomizedPreviewControllerIfNeeded;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setNaviBarHide:(BOOL)arg1 animation:(BOOL)arg2;
- (BOOL)hasPdfView;
- (void)resetPdfViewFrame;
- (void)restorePdfContentOffset;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setNavigationBarVisibleInteractionEnabled:(BOOL)arg1;
- (void)onSingleTap:(id)arg1;
- (void)initShareToFriendBtn;
- (void)onDownloadFileFailWithHint:(id)arg1;
- (void)setFileFailText:(id)arg1;
- (void)onDownloadFileSuccess;
- (void)onRealtimeUploadStatusChanged:(int)arg1;
- (void)onDownloadFilePartLen:(unsigned long long)arg1 TotalLen:(unsigned long long)arg2;
- (void)onRevoked;
- (void)onCanShareToFriendByButton;
- (id)getCurrentViewController;
- (void)setImageScrollView:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)circleProgressViewDidTapped:(id)arg1;
- (BOOL)tryAddToMinimize;
- (void)addToMinimize;
- (void)updateToMinimize;
- (void)reloadWhenMaximize;
- (BOOL)isMinimizeEnable;
- (void)addToTaskHistory;
- (void)removeTaskHistory;
- (void)installMinimizationTransitionController;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)minimizationTransitionController;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (id)minimizationTaskData;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (void)onFullScreenSingleTap;
- (void)reloadPDFContent;
- (void)relayoutImageContent;
- (void)tryUpdateTaskSnapShot;
- (void)genCurrentContentSnapshot:(id /* block */)arg1;
- (void)updateAppMsgState:(id)arg1 andState:(unsigned int)arg2;
- (void)didMoveToNewScene:(id)arg1;
- (BOOL)m_showInfoOnly;
- (void)setM_showInfoOnly:(BOOL)arg1;
- (BOOL)m_bOpenMode;
- (void)setM_bOpenMode:(BOOL)arg1;
- (BOOL)navigationBarVisibleInteractionEnabled;
- (BOOL)b_forceEnableJS;
- (void)setB_forceEnableJS:(BOOL)arg1;
- (id /* block */)downloadStartReportBlock;
- (void)setDownloadStartReportBlock:(id /* block */)arg1;
- (id /* block */)downloadSuccessReportBlock;
- (void)setDownloadSuccessReportBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)minimizeGenerateType;
- (void)setMinimizeGenerateType:(unsigned long long)arg1;
- (BOOL)isPlayingAudio;
- (void)setIsPlayingAudio:(BOOL)arg1;
- (BOOL)viewDidScrollWhenTapping;
- (void)setViewDidScrollWhenTapping:(BOOL)arg1;
- (double)yOffsetAdjustFactor;
- (void)setYOffsetAdjustFactor:(double)arg1;
- (id)imgPreview;
- (void)setImgPreview:(id)arg1;
- (BOOL)hasAddHistory;
- (void)setHasAddHistory:(BOOL)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (void).cxx_destruct;
@end

