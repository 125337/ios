@interface QuickReplyMsgViewController : MMWindowViewController <QuickReplyMsgWindowDelegate, QuickReplyMsgNotifyViewDelegate, IStrongNotificationMgrExt>
{
    BOOL _isPreviewEnable; // +0x7c
    id <QuickReplyMsgViewControllerDelegate> _delegate; // +0x80
    QuickReplyMsgReporter * _reporter; // +0x88
    long long _notifyViewStyle; // +0x90
    QuickReplyMsgNotifyView * _msgPushNotifyView; // +0x98
    UIView * _blurBgView; // +0xa0
    MMTimer * _autoDismissTimer; // +0xa8
    double _dismissTimeout; // +0xb0
}
- (id)init;
- (void)showQuickReplyItem:(id)arg1 dismissTimeout:(double)arg2;
- (void)viewDidLoad;
- (void)dismiss;
- (void)dismissWithJumpToChat:(BOOL)arg1;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)showBlurBgView;
- (id)currNotifyItem;
- (void)viewDidLayoutSubviews;
- (void)relayoutUI;
- (void)initUI;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (long long)overrideUserInterfaceStyle;
- (void)onStrongNotificationShow;
- (BOOL)shouldHandleTouchAtPoint:(CGPoint)arg1;
- (void)onTouchAtNoneMsgArea;
- (void)onNotifyViewDismissSelf;
- (void)onNotifyViewBeginDraging;
- (void)onNotifyViewEndDraging;
- (void)onNotifyViewReadMsg:(id)arg1;
- (void)onNotifyViewJumpToChat:(id)arg1;
- (void)onNotifyViewJumpToSetting:(id)arg1;
- (void)onNotifyViewShowSettingBtn:(id)arg1;
- (void)onNotifyViewShowMoreSetting:(id)arg1 isShow:(BOOL)arg2;
- (void)onNotifyViewTemporaryClose:(id)arg1;
- (void)onNotifyViewNotifyPushClose:(id)arg1;
- (void)showFinishTipsAndDismiss:(id)arg1;
- (void)markMessageRead:(id)arg1;
- (void)resetTimer:(double)arg1;
- (BOOL)isEmptyMessage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (long long)notifyViewStyle;
- (void)setNotifyViewStyle:(long long)arg1;
- (id)msgPushNotifyView;
- (void)setMsgPushNotifyView:(id)arg1;
- (id)blurBgView;
- (void)setBlurBgView:(id)arg1;
- (id)autoDismissTimer;
- (void)setAutoDismissTimer:(id)arg1;
- (double)dismissTimeout;
- (void)setDismissTimeout:(double)arg1;
- (BOOL)isPreviewEnable;
- (void)setIsPreviewEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
