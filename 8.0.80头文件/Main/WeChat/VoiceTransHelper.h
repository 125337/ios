@interface VoiceTransHelper : MMObject <MessageVoiceILinkASRHelperDelegate, IVoiceTransExt, PBMessageObserverDelegate>
{
    unsigned int m_uNotifyId; // +0x8
    unsigned int m_iCurVoiceResultSeq; // +0xc
    WebviewLocalResItem * m_webViewItem; // +0x10
    unsigned int m_uiScene; // +0x18
    NSString * m_nsVoicePath; // +0x20
    NSString * m_nsVoiceTransPath; // +0x28
    unsigned int m_uNetGetInterval; // +0x30
    BOOL m_bNeedGetResult; // +0x34
    BOOL m_bIsGetting; // +0x35
    unsigned int m_uTotalLen; // +0x38
    unsigned int m_uStartPos; // +0x3c
    unsigned int m_uDataLen; // +0x40
    unsigned int m_uUploadFailTimes; // +0x44
    unsigned int m_uSampleRateForSilk; // +0x48
    MMTimer * m_getTimer; // +0x50
    long long m_webViewItemFormat; // +0x58
    BOOL _isDialect; // +0x60
    id <VoiceTransDelegate> m_delegate; // +0x68
    CMessageWrap * m_msgWrap; // +0x70
    NSString * m_nsVoiceID; // +0x78
    long long _translateScene; // +0x80
    MessageVoiceILinkASRHelper * _ilinkASRHelper; // +0x88
    MessageVoiceTransTimings * _messageTransTimings; // +0x90
}
- (void)dealloc;
- (id)initWithVoiceMsg:(id)arg1 VoiceID:(id)arg2;
- (id)initWithWebviewLocalResItem:(id)arg1 VoiceID:(id)arg2;
- (void)startWebviewVoiceTrans;
- (void)startWebviewVoiceTransWithFormat:(long long)arg1;
- (void)startVoiceTrans;
- (void)stopTimer;
- (void)stopVoiceTrans;
- (void)doCheckVoice;
- (void)ilinkChannelCheck;
- (void)oldChannelCheckVoice;
- (void)handleNewChannelCheckVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)setupILinkASRHelperIfNeeded;
- (void)onMessageVoiceASRBegin:(id)arg1;
- (void)onMessageVoiceASRVoiceID:(id)arg1 transResult:(id)arg2;
- (void)onMessageVoiceASREnd:(id)arg1 fromCache:(BOOL)arg2;
- (void)onMessageVoiceASRFail:(id)arg1 baseResponse:(id)arg2;
- (void)onMessageVoiceASRNoTextRecognized:(id)arg1;
- (void)HandleCheckVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadVoice;
- (void)HandleUploadVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)startGetTimer;
- (void)TimeToGetVoieceTrans;
- (void)GetVoiceTrans;
- (void)HandleGetVoiceTransResp:(id)arg1 Event:(unsigned int)arg2;
- (void)reportVoiceID:(id)arg1 result:(int)arg2;
- (void)saveVoiceTrans:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnVoiceTransNotify:(unsigned int)arg1 Sequence:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (id)m_nsVoiceID;
- (void)setM_nsVoiceID:(id)arg1;
- (long long)translateScene;
- (void)setTranslateScene:(long long)arg1;
- (BOOL)isDialect;
- (void)setIsDialect:(BOOL)arg1;
- (id)ilinkASRHelper;
- (void)setIlinkASRHelper:(id)arg1;
- (id)messageTransTimings;
- (void)setMessageTransTimings:(id)arg1;
- (void).cxx_destruct;
@end
