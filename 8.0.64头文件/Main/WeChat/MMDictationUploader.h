@interface MMDictationUploader : NSObject <PBMessageObserverDelegate>
{
    BOOL _isStopped; // +0x8
    unsigned int _currentSeq; // +0xc
    unsigned int _maxPacketSize; // +0x10
    unsigned int _uploadIntervalMs; // +0x14
    unsigned int _cgiTotalTimeOut; // +0x18
    unsigned int _cgiRetryCount; // +0x1c
    long long _scene; // +0x20
    NSData * _extraData; // +0x28
    NSString * _voiceId; // +0x30
    id <MMDictationUploaderDelegate> _delegate; // +0x38
    OrderedDictionary * _waitingPackets; // +0x40
    OrderedDictionary * _uploadingPackets; // +0x48
    MMTimer * _dequeueTimer; // +0x50
    NSData * _lastBuffer; // +0x58
}
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2;
- (id)waitingPackets;
- (id)uploadingPackets;
- (id)lastWaitingPacket;
- (id)firstWaitingPacket;
- (void)sendPingPacket;
- (void)addVoicePacket:(id)arg1;
- (void)stopUpload;
- (void)_stopUpload;
- (void)startTimer;
- (void)stopTimer;
- (void)_internalStop;
- (void)dequeuePacket;
- (void)removePacketFromUploadingQueue:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onFail:(long long)arg1 ret:(long long)arg2 isResposeEmpty:(BOOL)arg3;
- (void)onSucceedResponse:(id)arg1 seq:(int)arg2;
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
- (void)setUploadingPackets:(id)arg1;
- (id)dequeueTimer;
- (void)setDequeueTimer:(id)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (unsigned int)uploadIntervalMs;
- (void)setUploadIntervalMs:(unsigned int)arg1;
- (unsigned int)cgiTotalTimeOut;
- (void)setCgiTotalTimeOut:(unsigned int)arg1;
- (unsigned int)cgiRetryCount;
- (void)setCgiRetryCount:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
