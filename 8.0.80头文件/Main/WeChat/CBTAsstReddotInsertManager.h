@interface CBTAsstReddotInsertManager : NSObject <CBTReddotObserverBase, ICBTAsstBoardDataControllerExt>
{
    BOOL _isForeground; // +0x8
    BOOL _shouldSkipNextRecomMsg; // +0x9
    BOOL _isFetchInFlight; // +0xa
    BOOL _isAttached; // +0xb
    BOOL _userSentAfterPending; // +0xc
    NSMutableArray * _backgroundInsertedAnswerIds; // +0x10
    CBTAsstTalkingView * _talkingView; // +0x18
    id /* block */ _displayBlock; // +0x20
    NSMutableArray * _pendingItems; // +0x28
    NSMutableArray * _pendingConsumeReddotIds; // +0x30
    NSMutableSet * _processedReddotIds; // +0x38
    CBTReddotObserver * _reddotObserver; // +0x40
}
- (id)initWithTalkingView:(id)arg1 displayBlock:(id /* block */)arg2;
- (void)attachToForeground;
- (void)detachFromForeground;
- (void)checkAndInsertIfNeeded;
- (void)fetchAndTryInsert;
- (void)flushPendingConsumeReddotIds;
- (void)clearBackgroundInsertedAnswerIds;
- (void)enqueueConsumeReddotId:(long long)arg1;
- (void)addBackgroundInsertedAnswerId:(long long)arg1;
- (void)teardown;
- (void)tryInsertOrEnqueue:(id)arg1;
- (void)flushPendingItems;
- (void)flushItems:(id)arg1;
- (void)onReddotChanged:(id)arg1;
- (void)onReddotItemConsumed:(long long)arg1;
- (void)onAsstTurnCompleteWithViewModel:(id)arg1;
- (void)onDialogueTerminated;
- (void)onSendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3;
- (void)onMicOpenWillTerminate;
- (BOOL)shouldSkipIncomingRecomMsg;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
- (id)backgroundInsertedAnswerIds;
- (void)setBackgroundInsertedAnswerIds:(id)arg1;
- (id)talkingView;
- (void)setTalkingView:(id)arg1;
- (id /* block */)displayBlock;
- (void)setDisplayBlock:(id /* block */)arg1;
- (id)pendingItems;
- (void)setPendingItems:(id)arg1;
- (id)pendingConsumeReddotIds;
- (void)setPendingConsumeReddotIds:(id)arg1;
- (id)processedReddotIds;
- (void)setProcessedReddotIds:(id)arg1;
- (BOOL)shouldSkipNextRecomMsg;
- (void)setShouldSkipNextRecomMsg:(BOOL)arg1;
- (BOOL)isFetchInFlight;
- (void)setIsFetchInFlight:(BOOL)arg1;
- (BOOL)isAttached;
- (void)setIsAttached:(BOOL)arg1;
- (BOOL)userSentAfterPending;
- (void)setUserSentAfterPending:(BOOL)arg1;
- (id)reddotObserver;
- (void)setReddotObserver:(id)arg1;
- (void).cxx_destruct;
@end
