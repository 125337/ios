@interface MMOnlineTranscriptionChannel : NSObject <MMOnlineTranscriptionTransportDelegate, MMTranscriptionChannel>
{
    BOOL _useOpusEncoder; // +0x8
    BOOL _started; // +0x9
    BOOL _cancelled; // +0xa
    unsigned int _languageType; // +0xc
    id <MMTranscriptionChannelDelegate> delegate; // +0x10
    long long _scene; // +0x18
    NSString * _voiceId; // +0x20
    NSData * _extraData; // +0x28
    MMOnlineTranscriptionTransport * _transport; // +0x30
    OpusAudioCodec * _opusCodec; // +0x38
    SilkAudioEncoder * _silkEncoder; // +0x40
    unsigned long long _transportType; // +0x48
    unsigned long long _audioCodec; // +0x50
    double _tailWaitDuration; // +0x58
    MMTranscriptionCoreReporter * _reporter; // +0x60
}
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2 extraData:(id)arg3 languageType:(unsigned int)arg4 transportType:(unsigned long long)arg5 audioCodec:(unsigned long long)arg6 tailWaitDuration:(double)arg7 reporter:(id)arg8;
- (void)dealloc;
- (void)start;
- (void)appendPCMData:(id)arg1 endFrameSeq:(unsigned long long)arg2;
- (void)updateExtraData:(id)arg1;
- (void)finish;
- (void)cancel;
- (void)onlineTranscriptionTransport:(id)arg1 didReceiveResult:(id)arg2;
- (void)onlineTranscriptionTransport:(id)arg1 didFinishWithEndFlag:(unsigned int)arg2;
- (void)onlineTranscriptionTransport:(id)arg1 didFailWithError:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (id)transport;
- (void)setTransport:(id)arg1;
- (id)opusCodec;
- (void)setOpusCodec:(id)arg1;
- (id)silkEncoder;
- (void)setSilkEncoder:(id)arg1;
- (BOOL)useOpusEncoder;
- (void)setUseOpusEncoder:(BOOL)arg1;
- (unsigned long long)transportType;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)audioCodec;
- (void)setAudioCodec:(unsigned long long)arg1;
- (double)tailWaitDuration;
- (void)setTailWaitDuration:(double)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
