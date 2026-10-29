@interface WNAITextLogic : NSObject
{
    BOOL _hasResult; // +0x8
    unsigned int _lastResultSeq; // +0xc
    id <WNAITextDelegate> _delegate; // +0x10
    NSString * _streamId; // +0x18
    NSString * _reqId; // +0x20
    NSString * _lastResultText; // +0x28
    NSString * _lastUpdateText; // +0x30
    MMTimer * _timeoutTimer; // +0x38
}
- (void)dealloc;
- (void)sendAITextCommand:(id)arg1 instruction:(id)arg2;
- (void)onReceiveDownStreamFragment:(id)arg1;
- (void)notifyTextUpdate;
- (void)notifyResultWithText:(id)arg1 retCode:(int)arg2 errMsg:(id)arg3 isFinal:(BOOL)arg4;
- (void)onStreamErrorWithCode:(int)arg1 info:(id)arg2;
- (void)cancel;
- (double)tidyNoteTimeout;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)onTimeout;
- (id)generatePollingRequest;
- (void)finishWithText:(id)arg1 retCode:(int)arg2 errMsg:(id)arg3;
- (void)releaseStream;
- (id)splitTextByCodePoints:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (BOOL)hasResult;
- (void)setHasResult:(BOOL)arg1;
- (unsigned int)lastResultSeq;
- (void)setLastResultSeq:(unsigned int)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (id)lastUpdateText;
- (void)setLastUpdateText:(id)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end
