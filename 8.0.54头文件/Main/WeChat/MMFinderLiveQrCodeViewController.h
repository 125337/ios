@interface MMFinderLiveQrCodeViewController : MMCPUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    id /* block */ _dismissBlock; // +0x68
    id /* block */ _portraitEnsuranceDelegationBlock; // +0x70
    ForwardMessageLogicController * _forwardLogic; // +0x78
    MMScrollActionSheet * _scrollActionSheet; // +0x80
    MMLiveVerticalTextButtonViewConfig * _portraitButtonConfig; // +0x88
    MMLiveVerticalTextButtonViewConfig * _landscapeButtonConfig; // +0x90
    MMFinderLiveTaskId * _taskId; // +0x98
    UIView<MMFinderLiveQrCodeViewBase> * _containerView; // +0xa0
    MMLiveVerticalTextButtonView * _cancelButton; // +0xa8
    MMLiveVerticalTextButtonView * _savePhotoButton; // +0xb0
    MMLiveVerticalTextButtonView * _shareButton; // +0xb8
}
- (id)init;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;
- (unsigned long long)supportedInterfaceOrientations;
- (id)createQrCodeView;
- (id)backdropColor;
- (id)reporter;
- (id)liveTask;
- (BOOL)supportsLandscape;
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
- (void)layoutWithContainerViewAspectRatio:(double)arg1;
- (void)layoutInPortraitWithContainerViewAspectRatio:(double)arg1;
- (void)layoutInLandscapeWithContainerViewAspectRatio:(double)arg1;
- (void)layoutWithUndefinedContainerViewAspectRatio;
- (void)layoutInPortraitWithUndefinedContainerViewAspectRatio;
- (void)layoutInLandscapeWithUndefinedContainerViewAspectRatio;
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
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)savePhotoButton;
- (void)setSavePhotoButton:(id)arg1;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (void).cxx_destruct;
@end

