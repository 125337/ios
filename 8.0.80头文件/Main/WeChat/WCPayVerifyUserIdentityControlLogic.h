@interface WCPayVerifyUserIdentityControlLogic : WCPayControlLogic <WCBaseControlMgrExt, MMUseCaseCallback>
{
    JSEvent * m_jsEvent; // +0x38
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate; // +0x40
    WAJSEventHandler_BaseEvent * _tinyAppEvent; // +0x48
    KindaJSEvent * _kindaJSEvent; // +0x50
    NSDictionary * _paramDict; // +0x58
}
- (id)initWithJSEvent:(id)arg1 tinyAppEvent:(id)arg2 params:(id)arg3;
- (void)dealloc;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)call:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (id)paramDelegate;
- (void)setParamDelegate:(id)arg1;
- (id)tinyAppEvent;
- (void)setTinyAppEvent:(id)arg1;
- (id)kindaJSEvent;
- (void)setKindaJSEvent:(id)arg1;
- (id)paramDict;
- (void)setParamDict:(id)arg1;
- (void).cxx_destruct;
@end
