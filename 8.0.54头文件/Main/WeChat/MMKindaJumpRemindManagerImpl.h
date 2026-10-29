@interface MMKindaJumpRemindManagerImpl : NSObject <MMKindaJumpRemindManager>
{
    MMVoidBoolStringCallback * _m_interruptCb; // +0x8
    MMVoidBoolStringCallback * _m_continueCb; // +0x10
    WCPayJumpRemindControlLogic * _m_jumpRemindControlLogic; // +0x18
}
- (id)init;
- (void)jumpRemindImpl:(id)arg1 clientScene:(int)arg2 payScene:(int)arg3 interruptCb:(id)arg4 continueCb:(id)arg5;
- (void)onDestroyJumpRemindManager;
- (id)m_interruptCb;
- (void)setM_interruptCb:(id)arg1;
- (id)m_continueCb;
- (void)setM_continueCb:(id)arg1;
- (id)m_jumpRemindControlLogic;
- (void)setM_jumpRemindControlLogic:(id)arg1;
- (void).cxx_destruct;
@end

