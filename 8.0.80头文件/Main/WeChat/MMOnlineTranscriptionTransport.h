@interface MMOnlineTranscriptionTransport : NSObject <MMOnlineTranscriptionNetworkDelegate>
{
    BOOL _started; // +0x8
    BOOL _finishing; // +0x9
    BOOL _finalRequestSent; // +0xa
    BOOL _terminal; // +0xb
    unsigned int _encodeType; // +0xc
    unsigned int _currentSeq; // +0x10
    unsigned int _nextEncodedOffset; // +0x14
    unsigned int _maxPacketSize; // +0x18
    unsigned int _uploadIntervalMs; // +0x1c
    id <MMOnlineTranscriptionTransportDelegate> _delegate; // +0x20
    id <MMOnlineTranscriptionNetwork> _network; // +0x28
    NSString * _voiceId; // +0x30
    long long _scene; // +0x38
    unsigned long long _transportType; // +0x40
    NSMutableArray * _waitingRequests; // +0x48
    NSMutableDictionary * _requestEndFrameSeq; // +0x50
    MMTimer * _uploadTimer; // +0x58
    unsigned long long _lastAudioEndFrameSeq; // +0x60
    MMTranscriptionCoreReporter * _reporter; // +0x68
}
+ (id)transportWithScene:(long long)arg1 voiceId:(id)arg2 extraData:(id)arg3 encodeType:(unsigned int)arg4 languageType:(unsigned int)arg5 transportType:(unsigned long long)arg6 tailWaitDuration:(double)arg7 reporter:(id)arg8;
+ (BOOL)shouldUseNewCGIForScene:(long long)arg1;
- (void)dealloc;
- (void)start;
- (void)appendEncodedData:(id)arg1 endFrameSeq:(unsigned long long)arg2;
- (void)updateExtraData:(id)arg1;
- (void)finish;
- (void)cancel;
- (void)startUploadTimerIfNeeded;
- (void)restartUploadTimer;
- (void)stopUploadTimer;
- (void)onUploadTimer;
- (void)sendNextRequestIfPossible;
- (void)onlineTranscriptionNetwork:(id)arg1 didReceiveResponse:(id)arg2;
- (void)onlineTranscriptionNetwork:(id)arg1 didFailWithError:(long long)arg2;
- (void)updateMaxPacketSize:(unsigned int)arg1 uploadIntervalMs:(unsigned int)arg2;
- (unsigned long long)endFrameSeqForOriginSeq:(unsigned int)arg1;
- (void)completeWithEndFlag:(unsigned int)arg1;
- (void)failWithError:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)network;
- (void)setNetwork:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)transportType;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned int)encodeType;
- (void)setEncodeType:(unsigned int)arg1;
- (id)waitingRequests;
- (void)setWaitingRequests:(id)arg1;
- (id)requestEndFrameSeq;
- (void)setRequestEndFrameSeq:(id)arg1;
- (id)uploadTimer;
- (void)setUploadTimer:(id)arg1;
- (unsigned int)currentSeq;
- (void)setCurrentSeq:(unsigned int)arg1;
- (unsigned int)nextEncodedOffset;
- (void)setNextEncodedOffset:(unsigned int)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (unsigned int)uploadIntervalMs;
- (void)setUploadIntervalMs:(unsigned int)arg1;
- (unsigned long long)lastAudioEndFrameSeq;
- (void)setLastAudioEndFrameSeq:(unsigned long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)finishing;
- (void)setFinishing:(BOOL)arg1;
- (BOOL)finalRequestSent;
- (void)setFinalRequestSent:(BOOL)arg1;
- (BOOL)terminal;
- (void)setTerminal:(BOOL)arg1;
- (void).cxx_destruct;
@end
