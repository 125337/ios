@interface MMTranscriptionCore : NSObject <MMTranscriptionChannelDelegate>
{
    BOOL _onlineFailed; // +0x8
    BOOL _offlineFailed; // +0x9
    BOOL _waitingOnlineFinish; // +0xa
    BOOL _waitingOfflineFinish; // +0xb
    BOOL _currentShouldCover; // +0xc
    id <MMTranscriptionCoreDelegate> _delegate; // +0x10
    NSString * _voiceId; // +0x18
    NSString * _resultText; // +0x20
    NSData * _latestExtraData; // +0x28
    MMTranscriptionConfiguration * _configuration; // +0x30
    unsigned long long _state; // +0x38
    MMTranscriptionCoreReporter * _reporter; // +0x40
    NSMutableData * _pcmCarry; // +0x48
    NSMutableData * _pendingPCMData; // +0x50
    unsigned long long _pcmFrameSeq; // +0x58
    id <MMTranscriptionChannel> _onlineChannel; // +0x60
    MMOfflineTranscriptionChannel * _offlineChannel; // +0x68
    MMDictationASRMerger * _resultMerger; // +0x70
}
- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)appendPCMData:(id)arg1;
- (void)updateExtraData:(id)arg1;
- (void)finishImmediately;
- (void)finishWaitingForFinalResultWithTimeout:(double)arg1;
- (void)cancel;
- (void)transcriptionChannel:(id)arg1 didEmitResult:(id)arg2;
- (void)transcriptionChannel:(id)arg1 didFinishWithEndFlag:(unsigned int)arg2;
- (void)transcriptionChannel:(id)arg1 didFailWithError:(long long)arg2;
- (void)processPCMData:(id)arg1;
- (void)finishImmediatelyWithEndFlag:(unsigned int)arg1;
- (void)completeWaitingFinishIfPossible;
- (void)deliverUpdatedResult;
- (id)resultWithText:(id)arg1;
- (void)failCore:(long long)arg1;
- (BOOL)shouldIgnoreEmptyOnlineText:(id)arg1 shouldCover:(BOOL)arg2;
- (BOOL)shouldCoverForExtraData:(id)arg1;
- (BOOL)isTerminalState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (id)latestExtraData;
- (void)setLatestExtraData:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)pcmCarry;
- (void)setPcmCarry:(id)arg1;
- (id)pendingPCMData;
- (void)setPendingPCMData:(id)arg1;
- (unsigned long long)pcmFrameSeq;
- (void)setPcmFrameSeq:(unsigned long long)arg1;
- (id)onlineChannel;
- (void)setOnlineChannel:(id)arg1;
- (id)offlineChannel;
- (void)setOfflineChannel:(id)arg1;
- (id)resultMerger;
- (void)setResultMerger:(id)arg1;
- (BOOL)onlineFailed;
- (void)setOnlineFailed:(BOOL)arg1;
- (BOOL)offlineFailed;
- (void)setOfflineFailed:(BOOL)arg1;
- (BOOL)waitingOnlineFinish;
- (void)setWaitingOnlineFinish:(BOOL)arg1;
- (BOOL)waitingOfflineFinish;
- (void)setWaitingOfflineFinish:(BOOL)arg1;
- (BOOL)currentShouldCover;
- (void)setCurrentShouldCover:(BOOL)arg1;
- (void).cxx_destruct;
@end
