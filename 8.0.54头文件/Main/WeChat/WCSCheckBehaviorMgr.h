@interface WCSCheckBehaviorMgr : MMRootService <MMServiceProtocol, ClickStatSwizzleExt>
{
    NSMutableDictionary * _dicTextFieldCheck; // +0x8
    BOOL _bEnableEventMonitor; // +0x10
    shared_ptr<__WCSN::__WCSTECP> _TECInstance; // +0x18
    map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> techeckts; // +0x28
}
- (id)init;
- (BOOL)getTECEnable;
- (void)dealloc;
- (void)startTextFieldCheck:(unsigned int)arg1;
- (void)pauseTextFieldCheck:(unsigned int)arg1;
- (void)removeTextFieldCheck:(unsigned int)arg1;
- (id)getTextFieldCheckData:(unsigned int)arg1;
- (void)recordEvent:(id)arg1;
- (BOOL)startRecord:(unsigned int)arg1;
- (id)getRecord:(unsigned int)arg1;
- (void)endRecord:(unsigned int)arg1;
- (id)convertScenes:(unsigned int)arg1;
- (void)onSendEvent:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

