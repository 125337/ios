@interface MJMovieTextSuggestionProcessor : NSObject
{
    BOOL _isLastSnapshotReceivedByServer; // +0x8
    id <MJMovieTextSuggestionProcessorDelegate> _delegate; // +0x10
    MJMovieTextSuggestionSeqBuffer * _seqBuffer; // +0x18
    NSData * _lastBuffer; // +0x20
    unsigned long long _lastRequestTimeMs; // +0x28
    unsigned long long _minRequestIntervalLimitMs; // +0x30
    unsigned long long _lastRequestWordCount; // +0x38
    unsigned long long _minWordCountChangeForRequest; // +0x40
    MJMovieTextSuggestionSnapshot * _lastSnapshotInRequest; // +0x48
}
+ (id)seqBufferInResponse:(id)arg1;
- (id)init;
- (BOOL)requestSuggestionsWithContext:(id)arg1 shouldForceSendRequest:(BOOL)arg2;
- (id)generateNextSeqBuffer;
- (BOOL)isLatestResponse:(id)arg1;
- (BOOL)canSendReqeust:(id)arg1 skipWordCountDiffCheck:(BOOL)arg2;
- (void)resetStatusWithContextIfNeeded:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)seqBuffer;
- (void)setSeqBuffer:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)lastRequestTimeMs;
- (void)setLastRequestTimeMs:(unsigned long long)arg1;
- (unsigned long long)minRequestIntervalLimitMs;
- (void)setMinRequestIntervalLimitMs:(unsigned long long)arg1;
- (unsigned long long)lastRequestWordCount;
- (void)setLastRequestWordCount:(unsigned long long)arg1;
- (unsigned long long)minWordCountChangeForRequest;
- (void)setMinWordCountChangeForRequest:(unsigned long long)arg1;
- (id)lastSnapshotInRequest;
- (void)setLastSnapshotInRequest:(id)arg1;
- (BOOL)isLastSnapshotReceivedByServer;
- (void)setIsLastSnapshotReceivedByServer:(BOOL)arg1;
- (void).cxx_destruct;
@end

