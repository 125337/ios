@interface MMTranscriptionConfiguration : NSObject <NSCopying>
{
    unsigned int _languageType; // +0x8
    long long _scene; // +0x10
    unsigned long long _channelPolicy; // +0x18
    unsigned long long _onlineTransport; // +0x20
    unsigned long long _audioCodec; // +0x28
    double _onlineTailWaitDuration; // +0x30
    NSString * _sessionId; // +0x38
    NSData * _extraData; // +0x40
    id <MMTranscriptionReporter> _reporter; // +0x48
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)channelPolicy;
- (void)setChannelPolicy:(unsigned long long)arg1;
- (unsigned long long)onlineTransport;
- (void)setOnlineTransport:(unsigned long long)arg1;
- (unsigned long long)audioCodec;
- (void)setAudioCodec:(unsigned long long)arg1;
- (double)onlineTailWaitDuration;
- (void)setOnlineTailWaitDuration:(double)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
