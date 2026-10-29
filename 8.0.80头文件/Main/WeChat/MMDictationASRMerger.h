@interface MMDictationASRMerger : NSObject
{
    BOOL _networkReachableAtStart; // +0x8
    BOOL _onlineFailed; // +0x9
    BOOL _latestShouldCover; // +0xa
    BOOL _latestOnlineIsFinal; // +0xb
    BOOL _pendingShouldCover; // +0xc
    BOOL _currentTextContainsOfflineDelta; // +0xd
    id /* block */ _outputBlock; // +0x10
    id /* block */ _statsBlock; // +0x18
    NSObject<OS_dispatch_queue> * _fusionQueue; // +0x20
    unsigned long long _onlineEndFrameSeq; // +0x28
    NSString * _onlineText; // +0x30
    NSString * _pendingOnlineText; // +0x38
    unsigned long long _pendingOnlineEndFrameSeq; // +0x40
    NSMutableArray * _finalizedSegments; // +0x48
    NSString * _inProgressText; // +0x50
    unsigned long long _inProgressStartFrameSeq; // +0x58
    unsigned long long _inProgressEndFrameSeq; // +0x60
    NSMutableArray * _inProgressSnapshots; // +0x68
    NSString * _currentText; // +0x70
}
- (id)init;
- (void)prepareForNewSessionNetworkReachable:(BOOL)arg1;
- (void)_reset;
- (void)onOnlineResult:(id)arg1 endFrameSeq:(unsigned long long)arg2 shouldCover:(BOOL)arg3 isFinal:(BOOL)arg4;
- (void)onOnlineProgress:(unsigned long long)arg1;
- (void)onOfflineInProgressResult:(id)arg1 endFrameSeq:(unsigned long long)arg2 segmentId:(id)arg3;
- (void)onOfflineSegmentFinalized:(id)arg1 startFrameSeq:(unsigned long long)arg2 endFrameSeq:(unsigned long long)arg3 segmentId:(id)arg4;
- (void)triggerMerge;
- (void)markOnlineFailed;
- (id)buildCurrentText;
- (id)buildCurrentOfflineText;
- (void)_reconcilePendingOnlineIfReady;
- (void)_foldPendingOnline;
- (unsigned long long)_offlineFrontier;
- (BOOL)_shouldUseOnlineOnly;
- (unsigned long long)_effectiveMergeThreshold;
- (void)_mergeAndCommit;
- (id)_latestSnapshot:(id)arg1 atOrBeforeFrame:(unsigned long long)arg2;
- (id)_rawTailOfSegment:(id)arg1 afterFrameSeq:(unsigned long long)arg2;
- (unsigned long long)_seamOverlap:(id)arg1 tail:(id)arg2;
- (id)_stripOfflineTrailingPunctuation:(id)arg1;
- (void)_commit:(id)arg1 offlineDeltaLength:(unsigned long long)arg2;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;
- (id /* block */)statsBlock;
- (void)setStatsBlock:(id /* block */)arg1;
- (id)fusionQueue;
- (void)setFusionQueue:(id)arg1;
- (BOOL)networkReachableAtStart;
- (void)setNetworkReachableAtStart:(BOOL)arg1;
- (BOOL)onlineFailed;
- (void)setOnlineFailed:(BOOL)arg1;
- (unsigned long long)onlineEndFrameSeq;
- (void)setOnlineEndFrameSeq:(unsigned long long)arg1;
- (id)onlineText;
- (void)setOnlineText:(id)arg1;
- (BOOL)latestShouldCover;
- (void)setLatestShouldCover:(BOOL)arg1;
- (BOOL)latestOnlineIsFinal;
- (void)setLatestOnlineIsFinal:(BOOL)arg1;
- (id)pendingOnlineText;
- (void)setPendingOnlineText:(id)arg1;
- (unsigned long long)pendingOnlineEndFrameSeq;
- (void)setPendingOnlineEndFrameSeq:(unsigned long long)arg1;
- (BOOL)pendingShouldCover;
- (void)setPendingShouldCover:(BOOL)arg1;
- (id)finalizedSegments;
- (void)setFinalizedSegments:(id)arg1;
- (id)inProgressText;
- (void)setInProgressText:(id)arg1;
- (unsigned long long)inProgressStartFrameSeq;
- (void)setInProgressStartFrameSeq:(unsigned long long)arg1;
- (unsigned long long)inProgressEndFrameSeq;
- (void)setInProgressEndFrameSeq:(unsigned long long)arg1;
- (id)inProgressSnapshots;
- (void)setInProgressSnapshots:(id)arg1;
- (id)currentText;
- (void)setCurrentText:(id)arg1;
- (BOOL)currentTextContainsOfflineDelta;
- (void)setCurrentTextContainsOfflineDelta:(BOOL)arg1;
- (void).cxx_destruct;
@end
