@interface MMLiveRoundButtonsPosterViewController : MMCPUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    id /* block */ _dismissBlock; // +0x70
    id /* block */ _portraitEnsuranceDelegationBlock; // +0x78
    ForwardMessageLogicController * _forwardLogic; // +0x80
    MMScrollActionSheet * _scrollActionSheet; // +0x88
    MMLiveVerticalTextButtonViewConfig * _portraitButtonConfig; // +0x90
    MMLiveVerticalTextButtonViewConfig * _landscapeButtonConfig; // +0x98
    NSArray * _posterViews; // +0xa0
    MMLivePostersFlipView * _containerView; // +0xa8
    MMFinderLiveTaskId * _taskId; // +0xb0
    MMLiveVerticalTextButtonView * _cancelButton; // +0xb8
    MMLiveVerticalTextButtonView * _savePhotoButton; // +0xc0
    MMLiveVerticalTextButtonView * _shareButton; // +0xc8
}
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)createPosterViews;
- (id)backdropColor;
- (BOOL)enableFavoriting;
- (id)reporter;
- (id)liveTask;
- (BOOL)supportsLandscape;
- (id)currentPoster;
- (void)onShareButtonClicked;
- (void)onSaveImageButtonClicked;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (BOOL)shouldHideNavigationBar;
- (void)tapToClose:(id)arg1;
- (void)shareToChat:(id)arg1;
- (void)shareToMoments;
- (void)addToFavorites;
- (void)layoutWithContainerViewAspectRatio:(double)arg1;
- (void)layoutInPortraitWithContainerViewAspectRatio:(double)arg1;
- (void)layoutInLandscapeWithContainerViewAspectRatio:(double)arg1;
- (void)layoutWithUndefinedContainerViewAspectRatio;
- (void)layoutInPortraitWithUndefinedContainerViewAspectRatio;
- (void)layoutInLandscapeWithUndefinedContainerViewAspectRatio;
- (void)layoutForMultiplePosters;
- (void)updateButtonConfigForCurrentOrientation;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id /* block */)portraitEnsuranceDelegationBlock;
- (void)setPortraitEnsuranceDelegationBlock:(id /* block */)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)portraitButtonConfig;
- (void)setPortraitButtonConfig:(id)arg1;
- (id)landscapeButtonConfig;
- (void)setLandscapeButtonConfig:(id)arg1;
- (id)posterViews;
- (void)setPosterViews:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)savePhotoButton;
- (void)setSavePhotoButton:(id)arg1;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (void).cxx_destruct;
@end
