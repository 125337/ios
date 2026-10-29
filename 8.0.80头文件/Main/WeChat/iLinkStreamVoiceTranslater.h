@interface iLinkStreamVoiceTranslater : NSObject
{
    BOOL _hasRecvAggressiveResult; // +0x8
    BOOL _hasNotifiedFirstPartEnqueue; // +0x9
    BOOL _hasNotifiedFirstSend; // +0xa
    BOOL _hasNotifiedFirstResponse; // +0xb
    BOOL _hasNotifiedFirstTextResponse; // +0xc
    unsigned int _fileEncodeType; // +0x10
    int _instanceId; // +0x14
    unsigned int _seq; // +0x18
    unsigned int _maxPacketSize; // +0x1c
    unsigned int _cliEndFlag; // +0x20
    unsigned int _lastResultSeq; // +0x24
    unsigned int _lastResultCommandSeq; // +0x28
    NSData * _extraData; // +0x30
    NSData * _respExtraData; // +0x38
    id /* block */ _resultChangeBlock; // +0x40
    id /* block */ _svrEndBlock; // +0x48
    id /* block */ _errorBlock; // +0x50
    id /* block */ _firstPartEnqueuedBlock; // +0x58
    id /* block */ _firstPacketSentBlock; // +0x60
    id /* block */ _lastPacketSentBlock; // +0x68
    id /* block */ _firstResponseBlock; // +0x70
    id /* block */ _firstTextResponseBlock; // +0x78
    id /* block */ _respInfoBlock; // +0x80
    NSString * _voiceId; // +0x88
    NSString * _streamId; // +0x90
    long long _scene; // +0x98
    MMTimer * _timer; // +0xa0
    double _interval; // +0xa8
    NSMutableArray * _arrRecognizeReq; // +0xb0
    NSString * _lastResultText; // +0xb8
    unsigned long long _sendLastPacketTime; // +0xc0
    MMTimer * _tailWaitTimer; // +0xc8
}
- (id)initWithScene:(long long)arg1 voiceID:(id)arg2;
- (id)initWithScene:(long long)arg1 voiceID:(id)arg2 fileEncodeType:(unsigned int)arg3;
- (void)dealloc;
- (void)createiLinkStream;
- (void)releaseResource;
- (id)generateDefaultRequest;
- (void)startTimer;
- (void)updateTimerInterval:(double)arg1;
- (void)onTimerScheduled;
- (void)startTailWaitTimer;
- (void)onTailWaitAggressiveTimeout;
- (void)onTailWaitEndFlagTimeout;
- (void)forceFinishTailWait;
- (BOOL)addStreamVoiceData:(id)arg1 endFlag:(int)arg2;
- (void)sendPollingPacket;
- (void)markLastPacketEndFlag;
- (void)onOccurError:(int)arg1 info:(id)arg2;
- (void)onReceiveDownStreamFragment:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)respExtraData;
- (void)setRespExtraData:(id)arg1;
- (unsigned int)fileEncodeType;
- (void)setFileEncodeType:(unsigned int)arg1;
- (id /* block */)resultChangeBlock;
- (void)setResultChangeBlock:(id /* block */)arg1;
- (id /* block */)svrEndBlock;
- (void)setSvrEndBlock:(id /* block */)arg1;
- (id /* block */)errorBlock;
- (void)setErrorBlock:(id /* block */)arg1;
- (id /* block */)firstPartEnqueuedBlock;
- (void)setFirstPartEnqueuedBlock:(id /* block */)arg1;
- (id /* block */)firstPacketSentBlock;
- (void)setFirstPacketSentBlock:(id /* block */)arg1;
- (id /* block */)lastPacketSentBlock;
- (void)setLastPacketSentBlock:(id /* block */)arg1;
- (id /* block */)firstResponseBlock;
- (void)setFirstResponseBlock:(id /* block */)arg1;
- (id /* block */)firstTextResponseBlock;
- (void)setFirstTextResponseBlock:(id /* block */)arg1;
- (id /* block */)respInfoBlock;
- (void)setRespInfoBlock:(id /* block */)arg1;
- (int)instanceId;
- (void)setInstanceId:(int)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (double)interval;
- (void)setInterval:(double)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (id)arrRecognizeReq;
- (void)setArrRecognizeReq:(id)arg1;
- (unsigned int)cliEndFlag;
- (void)setCliEndFlag:(unsigned int)arg1;
- (unsigned int)lastResultSeq;
- (void)setLastResultSeq:(unsigned int)arg1;
- (unsigned int)lastResultCommandSeq;
- (void)setLastResultCommandSeq:(unsigned int)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (unsigned long long)sendLastPacketTime;
- (void)setSendLastPacketTime:(unsigned long long)arg1;
- (id)tailWaitTimer;
- (void)setTailWaitTimer:(id)arg1;
- (BOOL)hasRecvAggressiveResult;
- (void)setHasRecvAggressiveResult:(BOOL)arg1;
- (BOOL)hasNotifiedFirstPartEnqueue;
- (void)setHasNotifiedFirstPartEnqueue:(BOOL)arg1;
- (BOOL)hasNotifiedFirstSend;
- (void)setHasNotifiedFirstSend:(BOOL)arg1;
- (BOOL)hasNotifiedFirstResponse;
- (void)setHasNotifiedFirstResponse:(BOOL)arg1;
- (BOOL)hasNotifiedFirstTextResponse;
- (void)setHasNotifiedFirstTextResponse:(BOOL)arg1;
- (void).cxx_destruct;
@end
