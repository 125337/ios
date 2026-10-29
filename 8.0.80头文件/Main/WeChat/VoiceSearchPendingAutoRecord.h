@interface VoiceSearchPendingAutoRecord : NSObject
{
    unsigned int _localID; // +0x8
    NSString * _recordID; // +0x10
    NSString * _roundID; // +0x18
    unsigned long long _screenStatus; // +0x20
    NSString * _voipSessionID; // +0x28
    NSString * _traceID; // +0x30
    NSString * _chatName; // +0x38
    unsigned long long _sendAtMilliseconds; // +0x40
    unsigned long long _deadlineMilliseconds; // +0x48
}
+ (id)recordWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)recordID;
- (void)setRecordID:(id)arg1;
- (id)roundID;
- (void)setRoundID:(id)arg1;
- (unsigned long long)screenStatus;
- (void)setScreenStatus:(unsigned long long)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)traceID;
- (void)setTraceID:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (unsigned long long)sendAtMilliseconds;
- (void)setSendAtMilliseconds:(unsigned long long)arg1;
- (unsigned long long)deadlineMilliseconds;
- (void)setDeadlineMilliseconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
