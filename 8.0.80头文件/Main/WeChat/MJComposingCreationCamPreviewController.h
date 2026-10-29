@interface MJComposingCreationCamPreviewController : MMUIViewController <QuickReplyMsgExt, MonoServiceLogicExt, MJComposingCreationFancyTextCoordinatorDelegate, MJPlaybackViewModelDelegate, WCFinderPostViewControllerDelegate>
{
    BOOL _isRenderViewShrinked; // +0x70
    BOOL _shouldResumePlaybackWhenActive; // +0x71
    BOOL _fancyTextEntryEnabled; // +0x72
    BOOL _templateSettingEntryEnabled; // +0x73
    MJComposingCreationCamPreviewViewModel * _viewModel; // +0x78
    UIView * _effectAdjustButton; // +0x80
    UIImageView * _effectAdjustIconView; // +0x88
    UIButton * _fancyTextButton; // +0x90
    UIButton * _playbackButton; // +0x98
    UIButton * _templateSettingButton; // +0xa0
    UIButton * _publishButton; // +0xa8
    UILabel * _publishDescLabel; // +0xb0
    UIView * _publishContainerView; // +0xb8
    UIButton * _reeditButton; // +0xc0
    UIView * _bottomLinkSeparatorView; // +0xc8
    UIView * _renderViewContainer; // +0xd0
    MJComposingCreationFancyTextCoordinator * _fancyTextCoordinator; // +0xd8
}
+ (BOOL)isNetworkRelatedError:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)registerNotifications;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)onBeginQuickReplyMsg;
- (void)onFinishQuickReplyMsg;
- (void)onShowQuickReplyAtSession:(id)arg1 message:(id)arg2;
- (void)dismissForVOIPEvents;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)setupNavigationBar;
- (id)buildNavigationTitleViewWithTitle:(id)arg1;
- (BOOL)shouldShowTemplateSettingButton;
- (void)setupViews;
- (id)renderViewContainer;
- (id)effectAdjustButton;
- (id)fancyTextButton;
- (id)playbackButton;
- (id)previewControlButtonWithImageName:(id)arg1 accessibilityLabel:(id)arg2;
- (id)templateSettingButton;
- (id)effectAdjustIconView;
- (id)publishContainerView;
- (id)publishButton;
- (id)publishDescLabel;
- (id)reeditButton;
- (id)bottomLinkSeparatorView;
- (void)layoutRenderViewToFillContainer:(id)arg1;
- (BOOL)shouldApplyCompactDevicePreviewHeightLimit;
- (void)layoutRenderViewContainerDefault;
- (void)layoutRenderViewContainerShrinkWithPanelHeight:(double)arg1;
- (void)updateLayoutForEditPanelHeight:(double)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)closeButtonTouchUpInside:(id)arg1;
- (void)effectAdjustButtonTouchUpInside:(id)arg1;
- (void)fancyTextButtonTouchUpInside:(id)arg1;
- (void)playbackButtonTouchUpInside:(id)arg1;
- (void)templateSettingButtonTouchUpInside:(id)arg1;
- (void)configureFancyTextCoordinator;
- (void)updatePlaybackButtonImage;
- (void)setPlaybackButtonPlaying:(BOOL)arg1;
- (void)fancyTextCoordinator:(id)arg1 didChangeEditingState:(BOOL)arg2;
- (void)fancyTextCoordinator:(id)arg1 didChangeDraggingState:(BOOL)arg2;
- (void)setPreviewChromeHiddenForFancyTextDragging:(BOOL)arg1;
- (void)fancyTextCoordinatorDidFinalizeTimelineChange:(id)arg1;
- (void)fancyTextCoordinatorDidChangePlaybackState:(id)arg1;
- (void)playbackViewModelWillStartPlaying:(id)arg1;
- (void)playbackViewModelWillStopPlaying:(id)arg1;
- (void)showTimelineRecreatingLoading;
- (void)hideTimelineRecreatingLoading;
- (void)refreshFancyTextCoordinatorAfterTimelineRecreation;
- (void)publishButtonTouchUpInside:(id)arg1;
- (void)reeditButtonTouchUpInside:(id)arg1;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)registerYReportSdk;
- (id)reportingParamsDictionary;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setEffectAdjustButton:(id)arg1;
- (void)setEffectAdjustIconView:(id)arg1;
- (void)setFancyTextButton:(id)arg1;
- (void)setPlaybackButton:(id)arg1;
- (void)setTemplateSettingButton:(id)arg1;
- (void)setPublishButton:(id)arg1;
- (void)setPublishDescLabel:(id)arg1;
- (void)setPublishContainerView:(id)arg1;
- (void)setReeditButton:(id)arg1;
- (void)setBottomLinkSeparatorView:(id)arg1;
- (void)setRenderViewContainer:(id)arg1;
- (BOOL)isRenderViewShrinked;
- (void)setIsRenderViewShrinked:(BOOL)arg1;
- (BOOL)shouldResumePlaybackWhenActive;
- (void)setShouldResumePlaybackWhenActive:(BOOL)arg1;
- (BOOL)fancyTextEntryEnabled;
- (void)setFancyTextEntryEnabled:(BOOL)arg1;
- (BOOL)templateSettingEntryEnabled;
- (void)setTemplateSettingEntryEnabled:(BOOL)arg1;
- (id)fancyTextCoordinator;
- (void)setFancyTextCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
