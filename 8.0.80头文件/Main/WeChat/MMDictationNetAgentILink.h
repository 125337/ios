@interface MMDictationNetAgentILink : NSObject <IMMDictationNetAgent>
{
    BOOL _isClosed; // +0x8
    unsigned int _lastOriginEndSeq; // +0xc
    id <MMDictationNetAgentDelegate> delegate; // +0x10
    NSString * _streamId; // +0x18
    long long _lastResultSeq; // +0x20
    long long _endSeq; // +0x28
    NSDate * _currentStartTime; // +0x30
    NSMutableDictionary * _seqInfo; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)genILinkRequest:(id)arg1;
- (id)genCgiResponse:(id)arg1;
- (void)createStream:(id)arg1;
- (void)closeStream;
- (void)onOccurError:(int)arg1 info:(id)arg2;
- (void)onReceiveDownStreamFragment:(id)arg1;
- (unsigned int)sendRequest:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (long long)lastResultSeq;
- (void)setLastResultSeq:(long long)arg1;
- (unsigned int)lastOriginEndSeq;
- (void)setLastOriginEndSeq:(unsigned int)arg1;
- (long long)endSeq;
- (void)setEndSeq:(long long)arg1;
- (BOOL)isClosed;
- (void)setIsClosed:(BOOL)arg1;
- (id)currentStartTime;
- (void)setCurrentStartTime:(id)arg1;
- (id)seqInfo;
- (void)setSeqInfo:(id)arg1;
- (void).cxx_destruct;
@end
