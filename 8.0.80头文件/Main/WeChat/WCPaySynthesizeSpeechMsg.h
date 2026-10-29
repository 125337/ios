@interface WCPaySynthesizeSpeechMsg : MMObject
{
    WCPayExtensionInfo * m_extensionInfo; // +0x8
    NSDictionary * m_payload; // +0x10
    unsigned long long m_speechFormat; // +0x18
    NSData * m_synthesizeSpeechData; // +0x20
    unsigned long long m_messageType; // +0x28
    BOOL m_isOverTime; // +0x30
    unsigned int _voiceSynthesizeTime; // +0x34
    NSString * _m_pushIdentifier; // +0x38
    CMessageWrap * _m_messageWrap; // +0x40
}
+ (id)speechMsgWithPayload:(id)arg1;
+ (id)speechMsgWithWCPayExtensionInfo:(id)arg1;
+ (id)speechMsgWithNewXML:(id)arg1;
+ (id)speechMsgWithMsgType:(id)arg1 extensionInfo:(id)arg2 payload:(id)arg3 messageType:(unsigned long long)arg4;
- (id)init;
- (id)initWithExtensionInfo:(id)arg1 payload:(id)arg2 messageType:(unsigned long long)arg3;
- (void)setPayloadWithLocalPush:(id)arg1;
- (void)setPayload;
- (id)getLocalNotificationInfo:(BOOL)arg1;
- (id)getVoiceRequest;
- (BOOL)setVoiceResponse:(id)arg1;
- (unsigned int)getCgiCmd;
- (BOOL)isSwitchOpen;
- (id)frontPartSoundPath;
- (id)soundNameOfSwitchOpen;
- (id)soundNameOfSwitchClose;
- (void)reportIdKeyGetVoiceReq;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportKVPushSuccess;
- (void)reportKVPlaySoundFail:(unsigned int)arg1;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportCgiCostTime:(unsigned int)arg1;
- (void)reportKVScene:(unsigned int)arg1;
- (void)reportKVPlayPrefixSound;
- (void)reportKVPlaySoundFail:(unsigned int)arg1 retCode:(long long)arg2;
- (void)reportSDKComposeSuccess:(id)arg1;
- (void)reportSDKComposeFail:(unsigned int)arg1 packId:(id)arg2;
- (unsigned long long)m_speechFormat;
- (id)m_payload;
- (id)m_extensionInfo;
- (id)m_synthesizeSpeechData;
- (unsigned long long)m_messageType;
- (BOOL)m_isOverTime;
- (void)setM_isOverTime:(BOOL)arg1;
- (unsigned int)voiceSynthesizeTime;
- (void)setVoiceSynthesizeTime:(unsigned int)arg1;
- (id)m_pushIdentifier;
- (void)setM_pushIdentifier:(id)arg1;
- (id)m_messageWrap;
- (void)setM_messageWrap:(id)arg1;
- (void).cxx_destruct;
@end
