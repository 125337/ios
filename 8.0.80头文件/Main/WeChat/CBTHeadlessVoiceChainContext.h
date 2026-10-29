@interface CBTHeadlessVoiceChainContext : NSObject
{
    BOOL _longPressSuccReported; // +0x8
    BOOL _flushed; // +0x9
    BOOL _pressPending; // +0xa
    int _enterScene; // +0xc
    unsigned long long _roundId; // +0x10
    NSString * _voipSessionID; // +0x18
    NSString * _searchContactId; // +0x20
    NSString * _traceId; // +0x28
    NSString * _askXiaoweiSrcInfo; // +0x30
    unsigned long long _createdMs; // +0x38
    unsigned long long _tsCloseMic; // +0x40
    unsigned long long _tsAsr; // +0x48
    unsigned long long _lastReportEventMs; // +0x50
    NSMutableDictionary * _fcStartStacks; // +0x58
    unsigned long long _fcCount; // +0x60
}
- (id)init;
- (unsigned long long)roundId;
- (void)setRoundId:(unsigned long long)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (id)searchContactId;
- (void)setSearchContactId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)askXiaoweiSrcInfo;
- (void)setAskXiaoweiSrcInfo:(id)arg1;
- (BOOL)longPressSuccReported;
- (void)setLongPressSuccReported:(BOOL)arg1;
- (BOOL)flushed;
- (void)setFlushed:(BOOL)arg1;
- (BOOL)pressPending;
- (void)setPressPending:(BOOL)arg1;
- (unsigned long long)createdMs;
- (void)setCreatedMs:(unsigned long long)arg1;
- (unsigned long long)tsCloseMic;
- (void)setTsCloseMic:(unsigned long long)arg1;
- (unsigned long long)tsAsr;
- (void)setTsAsr:(unsigned long long)arg1;
- (unsigned long long)lastReportEventMs;
- (void)setLastReportEventMs:(unsigned long long)arg1;
- (id)fcStartStacks;
- (void)setFcStartStacks:(id)arg1;
- (unsigned long long)fcCount;
- (void)setFcCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
