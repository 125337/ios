@interface MMOnlineTranscriptionILinkTransport : NSObject <MMOnlineTranscriptionNetwork>
{
    BOOL _cancelled; // +0x8
    unsigned int _encodeType; // +0xc
    unsigned int _lastResponseCommandSeq; // +0x10
    unsigned int _lastOriginEndSeq; // +0x14
    id <MMOnlineTranscriptionNetworkDelegate> delegate; // +0x18
    long long _scene; // +0x20
    NSString * _voiceId; // +0x28
    NSData * _extraData; // +0x30
    NSString * _streamId; // +0x38
    long long _lastResponseSeq; // +0x40
    MMOnlineTranscriptionResponse * _lastResponse; // +0x48
    double _tailWaitDuration; // +0x50
    MMTimer * _tailWaitTimer; // +0x58
}
- (id)networkSessionId;
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2 extraData:(id)arg3 encodeType:(unsigned int)arg4 tailWaitDuration:(double)arg5;
- (void)dealloc;
- (BOOL)start;
- (BOOL)sendRequest:(id)arg1;
- (void)updateExtraData:(id)arg1;
- (void)cancel;
- (id)protobufRequestWithRequest:(id)arg1;
- (void)receiveFragments:(id)arg1;
- (BOOL)isCommandResponseEnabled;
- (unsigned int)commandSeqForResponse:(id)arg1;
- (id)acceptedResponseFromFragments:(id)arg1;
- (void)startTailWaitTimer;
- (void)stopTailWaitTimer;
- (void)onTailWaitTimeout;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (unsigned int)encodeType;
- (void)setEncodeType:(unsigned int)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (long long)lastResponseSeq;
- (void)setLastResponseSeq:(long long)arg1;
- (unsigned int)lastResponseCommandSeq;
- (void)setLastResponseCommandSeq:(unsigned int)arg1;
- (unsigned int)lastOriginEndSeq;
- (void)setLastOriginEndSeq:(unsigned int)arg1;
- (id)lastResponse;
- (void)setLastResponse:(id)arg1;
- (double)tailWaitDuration;
- (void)setTailWaitDuration:(double)arg1;
- (id)tailWaitTimer;
- (void)setTailWaitTimer:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
