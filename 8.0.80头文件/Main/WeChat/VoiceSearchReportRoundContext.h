@interface VoiceSearchReportRoundContext : NSObject
{
    BOOL _actionAttributionInvalidated; // +0x8
    BOOL _inputReportFinished; // +0x9
    BOOL _highConfidence; // +0xa
    NSString * _roundID; // +0x10
    unsigned long long _screenStatus; // +0x18
    unsigned long long _createdAtMilliseconds; // +0x20
    NSString * _voipSessionID; // +0x28
    NSString * _traceID; // +0x30
    NSString * _inputEndEventID; // +0x38
    NSString * _contactRouteEventID; // +0x40
    NSMutableSet * _reportedEventIDs; // +0x48
    unsigned long long _inputBeganMilliseconds; // +0x50
    unsigned long long _microphoneReadyMilliseconds; // +0x58
    unsigned long long _inputReleaseMilliseconds; // +0x60
    unsigned long long _resultReceivedMilliseconds; // +0x68
    NSString * _resultVoipSessionID; // +0x70
    unsigned long long _actionType; // +0x78
    unsigned long long _halfSheetReason; // +0x80
    NSObject * _reportingScope; // +0x88
}
- (id)roundID;
- (void)setRoundID:(id)arg1;
- (unsigned long long)screenStatus;
- (void)setScreenStatus:(unsigned long long)arg1;
- (unsigned long long)createdAtMilliseconds;
- (void)setCreatedAtMilliseconds:(unsigned long long)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)traceID;
- (void)setTraceID:(id)arg1;
- (id)inputEndEventID;
- (void)setInputEndEventID:(id)arg1;
- (id)contactRouteEventID;
- (void)setContactRouteEventID:(id)arg1;
- (BOOL)actionAttributionInvalidated;
- (void)setActionAttributionInvalidated:(BOOL)arg1;
- (id)reportedEventIDs;
- (void)setReportedEventIDs:(id)arg1;
- (unsigned long long)inputBeganMilliseconds;
- (void)setInputBeganMilliseconds:(unsigned long long)arg1;
- (unsigned long long)microphoneReadyMilliseconds;
- (void)setMicrophoneReadyMilliseconds:(unsigned long long)arg1;
- (unsigned long long)inputReleaseMilliseconds;
- (void)setInputReleaseMilliseconds:(unsigned long long)arg1;
- (unsigned long long)resultReceivedMilliseconds;
- (void)setResultReceivedMilliseconds:(unsigned long long)arg1;
- (BOOL)inputReportFinished;
- (void)setInputReportFinished:(BOOL)arg1;
- (id)resultVoipSessionID;
- (void)setResultVoipSessionID:(id)arg1;
- (BOOL)highConfidence;
- (void)setHighConfidence:(BOOL)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)halfSheetReason;
- (void)setHalfSheetReason:(unsigned long long)arg1;
- (id)reportingScope;
- (void)setReportingScope:(id)arg1;
- (void).cxx_destruct;
@end
