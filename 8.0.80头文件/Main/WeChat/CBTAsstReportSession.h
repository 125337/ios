@interface CBTAsstReportSession : NSObject
{
    NSString * _voipSessionID; // +0x8
    long long _enterSceneType; // +0x10
    long long _enterTimeMs; // +0x18
    long long _turnSeq; // +0x20
    NSString * _latestTraceMsgid; // +0x28
    unsigned long long _latestAnswerId; // +0x30
    NSString * _askXiaoweiSrcInfo; // +0x38
    NSString * _chatBotSessionId; // +0x40
}
- (long long)stayTimeMs;
- (void)onSessionStartWithEnterScene:(long long)arg1 voipSessionID:(id)arg2;
- (void)onUserSendQuery;
- (id)paramsForPageEvent:(id)arg1 exitType:(long long)arg2;
- (id)commonReportParams;
- (void)reportEvent:(id)arg1 specParams:(id)arg2;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (long long)enterSceneType;
- (void)setEnterSceneType:(long long)arg1;
- (long long)enterTimeMs;
- (void)setEnterTimeMs:(long long)arg1;
- (long long)turnSeq;
- (void)setTurnSeq:(long long)arg1;
- (id)latestTraceMsgid;
- (void)setLatestTraceMsgid:(id)arg1;
- (unsigned long long)latestAnswerId;
- (void)setLatestAnswerId:(unsigned long long)arg1;
- (id)askXiaoweiSrcInfo;
- (void)setAskXiaoweiSrcInfo:(id)arg1;
- (id)chatBotSessionId;
- (void)setChatBotSessionId:(id)arg1;
- (void).cxx_destruct;
@end
