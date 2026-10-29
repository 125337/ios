@interface EmoticonRecommendPrefetcher : NSObject <EmoticonRecommendBoardCgiDelegate>
{
    BOOL _lastLocalCandidateHit; // +0x8
    EmoticonRecommendPrefetchEntry * _currentEntry; // +0x10
    NSObject<OS_dispatch_queue> * _stateQueue; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
    unsigned long long _requestGeneration; // +0x28
    EmoticonRecommendLocalCandidateProvider * _candidateProvider; // +0x30
    EmoticonRecommendRequestBuilder * _requestBuilder; // +0x38
    NSString * _stickyPendingChatName; // +0x40
}
+ (id)sharedInstance;
- (id)init;
- (id)contextSignatureForChatName:(id)arg1;
- (void)prefetchForChatName:(id)arg1;
- (long long)takeResultForChatName:(id)arg1 outWraps:(id *)arg2;
- (id)reportSessionIdForChatName:(id)arg1;
- (id)guessSendStickerExposeDataForChatName:(id)arg1 displayedCount:(unsigned long long)arg2 customEmoticonList:(id)arg3;
- (unsigned long long)guessSendStickerRecommendReasonForChatName:(id)arg1 md5:(id)arg2;
- (void)startLocalCandidateCheckForEntry:(id)arg1;
- (void)recordLocalCandidateHitLocked:(BOOL)arg1;
- (void)startCgiForEntry:(id)arg1;
- (void)notifyIfReadyLocked:(id)arg1;
- (void)notifyUpdateForChatName:(id)arg1;
- (void)invalidateCurrentEntryLocked;
- (id)entryForChatNameLocked:(id)arg1;
- (id)guessEmojiListStringFromEntryLocked:(id)arg1 displayedCount:(unsigned long long)arg2 customEmoticonList:(id)arg3;
- (unsigned long long)recommendReasonForEntryLocked:(id)arg1 md5:(id)arg2;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (id)currentEntry;
- (void)setCurrentEntry:(id)arg1;
- (id)stateQueue;
- (void)setStateQueue:(id)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (unsigned long long)requestGeneration;
- (void)setRequestGeneration:(unsigned long long)arg1;
- (id)candidateProvider;
- (void)setCandidateProvider:(id)arg1;
- (id)requestBuilder;
- (void)setRequestBuilder:(id)arg1;
- (id)stickyPendingChatName;
- (void)setStickyPendingChatName:(id)arg1;
- (BOOL)lastLocalCandidateHit;
- (void)setLastLocalCandidateHit:(BOOL)arg1;
- (void).cxx_destruct;
@end
