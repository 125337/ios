@interface WCFinderPreviewForwarder : MMUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    BOOL _shouldExit; // +0x70
    BOOL _hasCompletedForwarding; // +0x71
    int _commentScene; // +0x74
    UIView<WCFinderPreviewView> * _previewView; // +0x78
    UIView * _closeView; // +0x80
    WCFinderPreviewContainer * _previewViewContainer; // +0x88
    ForwardMessageLogicController * _forwardLogic; // +0x90
    WCFinderPreviewActionSheet * _actionSheet; // +0x98
    UIViewController * _sourceViewController; // +0xa0
}
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPreview:(id)arg1 commentScene:(int)arg2;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)show:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)_adjustPreviewDisplay;
- (void)dismiss:(BOOL)arg1;
- (id)getCurrentViewController;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)_onForwardToContact:(id)arg1;
- (id)createMsgURL;
- (void)_forwardToTimeline;
- (void)_saveImage;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (id)previewView;
- (id)closeView;
- (void)setCloseView:(id)arg1;
- (id)previewViewContainer;
- (void)setPreviewViewContainer:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (BOOL)shouldExit;
- (void)setShouldExit:(BOOL)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (BOOL)hasCompletedForwarding;
- (void)setHasCompletedForwarding:(BOOL)arg1;
- (void).cxx_destruct;
@end
