@interface MMFinderLiveFeedStreamBarrageViewModel : NSObject <MMFinderLiveFeedStreamBarrageModelExt>
{
    BOOL _barrageStarted; // +0x8
    BOOL _curHotWordInfoNeedDisplay; // +0x9
    BOOL _hasPostedPlusOneForCurHotWordBatch; // +0xa
    id <MMFinderLiveFeedStreamBarrageViewModelDelegate> _delegate; // +0x10
    MMFinderLiveFeedStreamBarrageCommentView * _barrageCommentView; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMTimer * _triggerTimer; // +0x28
    NSMutableArray * _barrageWaitingArray; // +0x30
    unsigned long long _nextAppendHistoryBarrageTime; // +0x38
    FinderLiveAppMsgCommentHotWordInfo * _curHotWordInfo; // +0x40
    MMFinderLiveFeedStreamPlusOneConfirmSheet * _plusOneConfirmSheet; // +0x48
}
+ (void)filterUnValidMsg:(id)arg1;
+ (unsigned long long)getFeedStreamBarrageCommentLengthLimit;
+ (unsigned long long)getFeedStreamBarrageCommentCacheLimit;
- (id)init;
- (void)registerExtensions;
- (void)updateWithTaskId:(id)arg1;
- (void)resetFeedStreamTaskId;
- (void)startBarrage;
- (void)stopBarrage;
- (void)onBarrageCommentViewDidSelectedItem:(id)arg1 itemframe:(CGRect)arg2;
- (void)resetBarrageData;
- (void)onPlusOneTouchDown;
- (void)onPlusOneTouchUpWithFiredCount:(unsigned long long)arg1;
- (void)onHotWordExposedWithContent:(id)arg1;
- (BOOL)willPresentPlusOneConfirmSheetOnTouchDown;
- (id)firstPlusOneMMKVKeyForRoleType:(unsigned int)arg1;
- (unsigned int)currentFeedStreamRoleType;
- (BOOL)hasConfirmedFirstPlusOneForCurrentIdentity;
- (void)markFirstPlusOneConfirmedForCurrentIdentity;
- (id)curFeedStreamTask;
- (void)onPlusOneConfirmedSend;
- (void)postPlusOneWithCurrentHotWord;
- (void)showPlusOneConfirmSheet;
- (void)showTrumpetSelectSheet;
- (void)onIdentitySwitchedInPlusOneConfirmFlow;
- (double)triggerInterval;
- (id)getBarrageCommentViewContainer;
- (void)setupMenuController:(id)arg1 menuItems:(id)arg2 targetRect:(CGRect)arg3;
- (void)flushWaitingArrayAsync;
- (void)realFlushWaitingArray;
- (void)onLikeBarrageComment;
- (void)onMoreBarrageComment;
- (void)onCopyBarrageAction:(id)arg1;
- (void)onCloseBarrageAction;
- (void)onComplaintBarrageAction:(id)arg1;
- (void)onLiveFeedStreamCommentDataItemsUpdate:(id)arg1 taskId:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (void)onLiveFeedStreamCommentHotWordInfoUpdate:(id)arg1 taskId:(id)arg2;
- (void)onMenuControllerTouchAtNoneMenuArea;
- (void)reportOnBarrageCommentClicked;
- (id)groupBarrageReportTask;
- (void)reportGroupBarrageIdentityPopSendClickWithContent:(id)arg1;
- (void)reportGroupBarrageIdentityPopCancelClickWithContent:(id)arg1;
- (void)reportGroupBarrageIdentityPopCutoverClickWithContent:(id)arg1;
- (void)reportGroupBarrageIdentityPopExposeWithContent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)barrageCommentView;
- (void)setBarrageCommentView:(id)arg1;
- (BOOL)barrageStarted;
- (void)setBarrageStarted:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)triggerTimer;
- (void)setTriggerTimer:(id)arg1;
- (id)barrageWaitingArray;
- (void)setBarrageWaitingArray:(id)arg1;
- (unsigned long long)nextAppendHistoryBarrageTime;
- (void)setNextAppendHistoryBarrageTime:(unsigned long long)arg1;
- (id)curHotWordInfo;
- (void)setCurHotWordInfo:(id)arg1;
- (BOOL)curHotWordInfoNeedDisplay;
- (void)setCurHotWordInfoNeedDisplay:(BOOL)arg1;
- (BOOL)hasPostedPlusOneForCurHotWordBatch;
- (void)setHasPostedPlusOneForCurHotWordBatch:(BOOL)arg1;
- (id)plusOneConfirmSheet;
- (void)setPlusOneConfirmSheet:(id)arg1;
- (void).cxx_destruct;
@end
