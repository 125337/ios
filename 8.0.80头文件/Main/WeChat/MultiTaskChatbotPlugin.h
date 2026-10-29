@interface MultiTaskChatbotPlugin : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, WCCommitViewResultDelegate, MMFlutterPlugin, MultiTaskApi>
{
    BOOL _isSharingToTimeline; // +0x8
    id /* block */ _onCloseChatbotBlock; // +0x10
    UIViewController * _viewController; // +0x18
    NSString * _pendingForwardTitle; // +0x20
    NSString * _pendingForwardDesc; // +0x28
    NSString * _pendingHistoryFilePath; // +0x30
    NSString * _pendingOriginalMsgContent; // +0x38
    NSString * _pendingOriginalHistoryXML; // +0x40
    MMScrollActionSheet * _shareActionSheet; // +0x48
    CContact * _pendingReportContact; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)onCloseChatbotWithError:(id *)arg1;
- (void)onCloseXiaoWeiCustasstPageWithError:(id *)arg1;
- (void)onHistoryPageChatTappedWithError:(id *)arg1;
- (void)getStarMigrationStateWithCompletion:(id /* block */)arg1;
- (void)isStarModeWithCompletion:(id /* block */)arg1;
- (void)onHistoryPageMoreTappedRequest:(id)arg1 error:(id *)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)_onChatBotAsstForwardDidFinish:(id)arg1;
- (id)_forwardSource;
- (id)_defaultForwardDesc;
- (void)_presentShareActionSheetFromViewController:(id)arg1;
- (void)_clearShareActionSheetState;
- (void)_reportShareResultWithSuccess:(BOOL)arg1 targetType:(long long)arg2 contact:(id)arg3;
- (void)_shareHistoryToContact:(id)arg1 triggerSource:(id)arg2;
- (id)_noteLikeForwardMessageWithOriginalXML:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (id)_noteRecordItemWithHistoryInfo:(id)arg1 bizTitle:(id)arg2 bizDesc:(id)arg3;
- (id)_recordItemXMLWithHistoryInfo:(id)arg1 bizTitle:(id)arg2 bizDesc:(id)arg3;
- (id)_noteLikeAppMsgXMLWithHistoryInfo:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (id)_noteLikeForwardMessageWithHistoryInfo:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (void)_presentTimelineForwardWithHistoryInfo:(id)arg1 forwardTitle:(id)arg2 forwardMessage:(id)arg3 fromViewController:(id)arg4;
- (id)_timelineTitleForForwardTitle:(id)arg1;
- (id /* block */)onCloseChatbotBlock;
- (void)setOnCloseChatbotBlock:(id /* block */)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)pendingForwardTitle;
- (void)setPendingForwardTitle:(id)arg1;
- (id)pendingForwardDesc;
- (void)setPendingForwardDesc:(id)arg1;
- (id)pendingHistoryFilePath;
- (void)setPendingHistoryFilePath:(id)arg1;
- (id)pendingOriginalMsgContent;
- (void)setPendingOriginalMsgContent:(id)arg1;
- (id)pendingOriginalHistoryXML;
- (void)setPendingOriginalHistoryXML:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (BOOL)isSharingToTimeline;
- (void)setIsSharingToTimeline:(BOOL)arg1;
- (id)pendingReportContact;
- (void)setPendingReportContact:(id)arg1;
- (void).cxx_destruct;
@end
