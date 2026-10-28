@interface WCPayPayMoneyFromBrandContactJSApiLogicV2 : WCPayControlLogic <WCBaseControlMgrExt, MMUseCaseCallback>
{
    JSEvent * m_jsEvent; // +0x38
    NSString * m_stepInURL; // +0x40
    NSString * m_stepAppUserName; // +0x48
    int _chatType; // +0x50
    int _chatSenderType; // +0x54
    int _qrcodeSessionType; // +0x58
    int _codeScene; // +0x5c
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate; // +0x60
    WAJSEventHandler_BaseEvent * _tinyAppEvent; // +0x68
    KindaJSEvent * _kindaJSEvent; // +0x70
    NSString * _qrcodeSessionName; // +0x78
    NSString * _qrcodeTimelineObjId; // +0x80
    NSString * _qrcodeSenderMsgId; // +0x88
    NSString * _qrcodeSenderName; // +0x90
}
- (id)initWithJSEvent:(id)arg1 tinyAppEvent:(id)arg2 URL:(id)arg3 BrandUserName:(id)arg4;
- (void)setExtraInfo:(id)arg1;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)call:(id)arg1;
- (id)paramDelegate;
- (void)setParamDelegate:(id)arg1;
- (id)tinyAppEvent;
- (void)setTinyAppEvent:(id)arg1;
- (id)kindaJSEvent;
- (void)setKindaJSEvent:(id)arg1;
- (int)chatType;
- (void)setChatType:(int)arg1;
- (int)chatSenderType;
- (void)setChatSenderType:(int)arg1;
- (int)qrcodeSessionType;
- (void)setQrcodeSessionType:(int)arg1;
- (id)qrcodeSessionName;
- (void)setQrcodeSessionName:(id)arg1;
- (id)qrcodeTimelineObjId;
- (void)setQrcodeTimelineObjId:(id)arg1;
- (int)codeScene;
- (void)setCodeScene:(int)arg1;
- (id)qrcodeSenderMsgId;
- (void)setQrcodeSenderMsgId:(id)arg1;
- (id)qrcodeSenderName;
- (void)setQrcodeSenderName:(id)arg1;
- (void).cxx_destruct;
@end
