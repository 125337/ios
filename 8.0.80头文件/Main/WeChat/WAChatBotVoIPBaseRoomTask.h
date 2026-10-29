@interface WAChatBotVoIPBaseRoomTask : NSObject
{
    BOOL _hasJoinedRoom; // +0x8
    int _openScene; // +0xc
    NSString * _appId; // +0x10
    NSString * _identifier; // +0x18
    NSString * _sessionID; // +0x20
    NSString * _businessString; // +0x28
    NSString * _assistantUsername; // +0x30
    ChatBotVoIPRoomInfo * _roomInfo; // +0x38
    ChatBotVoIPSession * _voipSession; // +0x40
    id /* block */ _joinCallback; // +0x48
    id /* block */ _inputPeakChangeCallback; // +0x50
    id /* block */ _receiveCmdMsgCallback; // +0x58
    id /* block */ _callEndCallback; // +0x60
}
- (id)init;
- (BOOL)isValid;
- (id)description;
- (void)setMuteMicrophone:(BOOL)arg1;
- (void)setMuteMicrophone:(BOOL)arg1 needFullDuplex:(BOOL)arg2 forbidSendMicStatus:(BOOL)arg3;
- (void)setMutePlayAudio:(BOOL)arg1;
- (void)onRecvToCliInfoData:(id)arg1;
- (void)onRecvVoIPAsrInfoData:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)businessString;
- (void)setBusinessString:(id)arg1;
- (id)assistantUsername;
- (void)setAssistantUsername:(id)arg1;
- (BOOL)hasJoinedRoom;
- (void)setHasJoinedRoom:(BOOL)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (id /* block */)joinCallback;
- (void)setJoinCallback:(id /* block */)arg1;
- (id /* block */)inputPeakChangeCallback;
- (void)setInputPeakChangeCallback:(id /* block */)arg1;
- (id /* block */)receiveCmdMsgCallback;
- (void)setReceiveCmdMsgCallback:(id /* block */)arg1;
- (id /* block */)callEndCallback;
- (void)setCallEndCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
