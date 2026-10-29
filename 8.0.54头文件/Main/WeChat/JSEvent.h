@interface JSEvent : NSObject
{
    NSMutableDictionary * m_params; // +0x8
    id <JSEventHandler> m_delegate; // +0x10
    NSString * m_callbackID; // +0x18
    NSString * m_funcName; // +0x20
    id /* block */ m_kvReportBlock; // +0x28
    id /* block */ _eventCompleteBlock; // +0x30
    JSEventInvokeContext * _eventInvokeContext; // +0x38
}
- (id)initWithDelegate:(id)arg1 parameters:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setCallbackID:(id)arg1;
- (void)setFuncName:(id)arg1;
- (id)getFuncName;
- (id)getParams;
- (id)getCallbackID;
- (id)webviewController;
- (void)endWithResutl:(id)arg1;
- (void)endWithError:(id)arg1;
- (void)endWithError:(id)arg1 andDescription:(id)arg2;
- (void)endWithError:(id)arg1 andDescription:(id)arg2 extraParams:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id /* block */)kvReportBlock;
- (void)setKvReportBlock:(id /* block */)arg1;
- (id /* block */)eventCompleteBlock;
- (void)setEventCompleteBlock:(id /* block */)arg1;
- (id)eventInvokeContext;
- (void)setEventInvokeContext:(id)arg1;
- (void).cxx_destruct;
@end

