@interface MMLockstepHandle : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    void * _lockstepMgr; // +0x10
    LockStepScriptState * _lockstepScriptState; // +0x18
    LockstepNativeTask * lockstepTask; // +0x20
    LockStepCallback * m_pCallback; // +0x28
    id <MMLockstepHandleReportDelegate> _reportDelegate; // +0x30
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (void)setConfig:(map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>)arg1;
- (void)setLogDelegate:(id)arg1;
- (void)setReportDelegate:(id)arg1;
- (void)releaseContext;
- (void)dealloc;
- (id)reportDelegate;
- (void).cxx_destruct;
@end

