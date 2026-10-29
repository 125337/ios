@interface MMOnlineTranscriptionOldCGITransport : NSObject <PBMessageObserverDelegate, MMOnlineTranscriptionNetwork>
{
    BOOL _finalAudioRequestSent; // +0x8
    BOOL _pollingScheduled; // +0x9
    BOOL _pollingRequestInFlight; // +0xa
    BOOL _started; // +0xb
    BOOL _cancelled; // +0xc
    unsigned int _languageType; // +0x10
    unsigned int _encodeType; // +0x14
    unsigned int _pollingIntervalMs; // +0x18
    id <MMOnlineTranscriptionNetworkDelegate> delegate; // +0x20
    long long _scene; // +0x28
    NSString * _voiceId; // +0x30
    NSMutableDictionary * _requestKinds; // +0x38
    unsigned long long _activeAudioRequestCount; // +0x40
    unsigned long long _pollingGeneration; // +0x48
}
- (id)networkSessionId;
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2 languageType:(unsigned int)arg3 encodeType:(unsigned int)arg4;
- (void)dealloc;
- (BOOL)start;
- (BOOL)sendRequest:(id)arg1;
- (BOOL)sendRequest:(id)arg1 kind:(unsigned long long)arg2;
- (void)updateExtraData:(id)arg1;
- (void)cancel;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)completeRequestKind:(unsigned long long)arg1;
- (void)updatePollingInterval:(unsigned int)arg1;
- (void)schedulePollingIfNeeded;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (unsigned int)encodeType;
- (void)setEncodeType:(unsigned int)arg1;
- (id)requestKinds;
- (void)setRequestKinds:(id)arg1;
- (unsigned int)pollingIntervalMs;
- (void)setPollingIntervalMs:(unsigned int)arg1;
- (unsigned long long)activeAudioRequestCount;
- (void)setActiveAudioRequestCount:(unsigned long long)arg1;
- (unsigned long long)pollingGeneration;
- (void)setPollingGeneration:(unsigned long long)arg1;
- (BOOL)finalAudioRequestSent;
- (void)setFinalAudioRequestSent:(BOOL)arg1;
- (BOOL)pollingScheduled;
- (void)setPollingScheduled:(BOOL)arg1;
- (BOOL)pollingRequestInFlight;
- (void)setPollingRequestInFlight:(BOOL)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
