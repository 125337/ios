@interface MMDictationUploader : NSObject <MMDictationNetAgentDelegate>
{
    BOOL _isStopped; // +0x8
    unsigned int _currentSeq; // +0xc
    unsigned int _maxPacketSize; // +0x10
    unsigned int _uploadIntervalMs; // +0x14
    unsigned int _fileEncodeType; // +0x18
    long long _scene; // +0x20
    NSData * _extraData; // +0x28
    NSString * _voiceId; // +0x30
    id <MMDictationUploaderDelegate> _delegate; // +0x38
    NSMutableArray * _waitingPackets; // +0x40
    MMTimer * _dequeueTimer; // +0x48
    id <IMMDictationNetAgent> _netAgent; // +0x50
    NSData * _lastBuffer; // +0x58
    NSMutableDictionary * _requestEndFrameSeq; // +0x60
    unsigned long long _lastAudioEndFrameSeq; // +0x68
}
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2 encodeType:(unsigned int)arg3;
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2;
- (id)waitingPackets;
- (void)sendPingPacket;
- (void)addVoicePacket:(id)arg1;
- (void)addVoicePacket:(id)arg1 endFrameSeq:(unsigned long long)arg2;
- (void)stopUpload;
- (void)_stopUpload;
- (void)startTimer;
- (void)stopTimer;
- (void)_internalStop;
- (id)_buildRequest:(id)arg1 seq:(unsigned int)arg2;
- (BOOL)_isValidEncodeType:(unsigned int)arg1;
- (void)dequeuePacket;
- (void)onNetAgentSucceedWithResponse:(id)arg1 extraData:(id)arg2 originEndSeq:(unsigned int)arg3;
- (void)onNetAgentFail:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)currentSeq;
- (void)setCurrentSeq:(unsigned int)arg1;
- (void)setWaitingPackets:(id)arg1;
- (id)dequeueTimer;
- (void)setDequeueTimer:(id)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (id)netAgent;
- (void)setNetAgent:(id)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (unsigned int)uploadIntervalMs;
- (void)setUploadIntervalMs:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)fileEncodeType;
- (void)setFileEncodeType:(unsigned int)arg1;
- (id)requestEndFrameSeq;
- (void)setRequestEndFrameSeq:(id)arg1;
- (unsigned long long)lastAudioEndFrameSeq;
- (void)setLastAudioEndFrameSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
