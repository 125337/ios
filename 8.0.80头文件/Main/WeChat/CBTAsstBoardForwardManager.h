@interface CBTAsstBoardForwardManager : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, WCCommitViewResultDelegate>
{
    BOOL _isHalfScreenMode; // +0x8
    BOOL _shouldExitMultiSelectAfterForward; // +0x9
    BOOL _isSharingToTimeline; // +0xa
    id /* block */ _shareResultCompletion; // +0x10
    id /* block */ _hostViewControllerProvider; // +0x18
    id /* block */ _exitMultiSelectBlock; // +0x20
    MMScrollActionSheet * _multiForwardActionSheet; // +0x28
    NSArray * _pendingForwardMessages; // +0x30
    NSArray * _pendingForwardViewModels; // +0x38
    MMLoadingView * _summaryLoadingView; // +0x40
    NSArray * _pendingReportViewModels; // +0x48
    CContact * _pendingReportContact; // +0x50
}
- (id)initWithHostViewControllerProvider:(id /* block */)arg1 exitMultiSelectBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)forwardViewModel:(id)arg1;
- (void)forwardViewModels:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)_onChatBotAsstForwardDidFinish:(id)arg1;
- (id)_hostViewController;
- (id)_buildForwardMessagesForViewModels:(id)arg1;
- (id)_normalizedForwardViewModels:(id)arg1;
- (id)_buildForwardHistoryCardWrapsForViewModels:(id)arg1;
- (id)_serializedForwardHistoryDataForCardWraps:(id)arg1;
- (id)_historyPreviewTextForViewModels:(id)arg1;
- (id)_forwardTitleForViewModels:(id)arg1;
- (id)_forwardTitleForSingleViewModel:(id)arg1;
- (id)_forwardDescriptionTextForViewModels:(id)arg1;
- (void)_exitMultiSelectIfNeeded;
- (void)_presentMultiForwardActionSheetFromViewController:(id)arg1;
- (void)_configRecentForwardScrollView:(id)arg1 withMessages:(id)arg2;
- (void)_forwardPendingMessagesToFriend;
- (void)_sharePendingMessagesToTimeline;
- (id)_noteRecordItemWithHistoryInfo:(id)arg1 bizTitle:(id)arg2 bizDesc:(id)arg3 messages:(id)arg4;
- (id)_recordItemXMLWithHistoryInfo:(id)arg1 bizTitle:(id)arg2 bizDesc:(id)arg3 messages:(id)arg4;
- (id)_noteLikeAppMsgXMLWithHistoryInfo:(id)arg1 title:(id)arg2 desc:(id)arg3 messages:(id)arg4;
- (id)_noteLikeForwardMessageWithHistoryInfo:(id)arg1 title:(id)arg2 desc:(id)arg3 messages:(id)arg4;
- (void)_forwardHistoryForViewModels:(id)arg1 referenceMessages:(id)arg2 selectedContact:(id)arg3 triggerSource:(id)arg4;
- (void)_fetchSummaryForHistoryInfo:(id)arg1 desc:(id)arg2 completion:(id /* block */)arg3;
- (void)presentTimelineForwardWithHistoryInfo:(id)arg1 forwardTitle:(id)arg2 forwardMessage:(id)arg3 fromViewController:(id)arg4;
- (id)_timelineTitleForForwardTitle:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (id)_customMergedXMLForMessages:(id)arg1;
- (id)_messageXMLForWrap:(id)arg1;
- (void)_dumpCustomMergedXMLForMessages:(id)arg1 selectedContact:(id)arg2 triggerSource:(id)arg3;
- (void)_reportShareResultWithSuccess:(BOOL)arg1 targetType:(long long)arg2 contact:(id)arg3 snsPublishId:(id)arg4;
- (id)_fwdQueryBubbleListJSONFromViewModels:(id)arg1;
- (void)dismissMultiForwardActionSheetIfNeeded;
- (void)_clearMultiForwardActionSheetState;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (id /* block */)shareResultCompletion;
- (void)setShareResultCompletion:(id /* block */)arg1;
- (id /* block */)hostViewControllerProvider;
- (void)setHostViewControllerProvider:(id /* block */)arg1;
- (id /* block */)exitMultiSelectBlock;
- (void)setExitMultiSelectBlock:(id /* block */)arg1;
- (id)multiForwardActionSheet;
- (void)setMultiForwardActionSheet:(id)arg1;
- (id)pendingForwardMessages;
- (void)setPendingForwardMessages:(id)arg1;
- (id)pendingForwardViewModels;
- (void)setPendingForwardViewModels:(id)arg1;
- (BOOL)shouldExitMultiSelectAfterForward;
- (void)setShouldExitMultiSelectAfterForward:(BOOL)arg1;
- (BOOL)isSharingToTimeline;
- (void)setIsSharingToTimeline:(BOOL)arg1;
- (id)summaryLoadingView;
- (void)setSummaryLoadingView:(id)arg1;
- (id)pendingReportViewModels;
- (void)setPendingReportViewModels:(id)arg1;
- (id)pendingReportContact;
- (void)setPendingReportContact:(id)arg1;
- (void).cxx_destruct;
@end
