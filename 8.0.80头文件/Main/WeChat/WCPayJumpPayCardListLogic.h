@interface WCPayJumpPayCardListLogic : WCPayControlLogic <WCPayCardListViewControllerDelegate, MMUseCaseCallback>
{
    JSEvent * _m_jsEvent; // +0x38
    id <WCPayJumpPayCardListLogicDelegate> _m_delegate; // +0x40
    NSDictionary * _m_param; // +0x48
}
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 delegate:(id)arg2 param:(id)arg3;
- (void)stopLogic;
- (void)startLogic;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)liteAppCreateStore:(id)arg1;
- (void)call:(id)arg1;
- (void)onWCPayCardListViewControllerBack;
- (void)onWCPayCardListViewControllerWillBack;
- (id)m_jsEvent;
- (void)setM_jsEvent:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_param;
- (void)setM_param:(id)arg1;
- (void).cxx_destruct;
@end
