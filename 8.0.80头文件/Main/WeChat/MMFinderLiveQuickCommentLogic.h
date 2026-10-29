@interface MMFinderLiveQuickCommentLogic : NSObject <WCFinderLiveExt>
{
    id <MMFinderLiveQuickCommentLogicDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    FinderLiveQuickReplyWordingInfo * _rawQuickReplyWordingInfo; // +0x18
    unsigned long long _lastUpdateASRCommentTimestamp; // +0x20
    NSString * _lastPostedHotWordQuickComment; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtensions;
- (void)dealloc;
- (void)unregisterExtensions;
- (void)onUserSelectedQuickComment:(id)arg1;
- (void)removeAndUpdateQuickCommentByFilter:(id /* block */)arg1;
- (void)updateWithQuickReplyWordingInfo:(id)arg1;
- (void)delayRemoveASRQuickCommentIfNeeded;
- (void)removeASRQuickCommentAndUpdate;
- (void)removeHotWordQuickCommentWhenDismiss:(id)arg1 content:(id)arg2;
- (void)removeHotWordQuickCommentWhenPost:(id)arg1;
- (void)onGetFinderLiveShortcutWordingInfoWithTaskId:(id)arg1 shortcutWordingInfo:(id)arg2;
- (void)onFinderLiveHotWordDismissed:(id)arg1 hotwordAppMsg:(id)arg2;
- (id)currentLiveTask;
- (unsigned long long)quickCommentMaxShowDuration;
- (unsigned long long)quickCommentMinShowDuration;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)rawQuickReplyWordingInfo;
- (void)setRawQuickReplyWordingInfo:(id)arg1;
- (unsigned long long)lastUpdateASRCommentTimestamp;
- (void)setLastUpdateASRCommentTimestamp:(unsigned long long)arg1;
- (id)lastPostedHotWordQuickComment;
- (void)setLastPostedHotWordQuickComment:(id)arg1;
- (void).cxx_destruct;
@end
