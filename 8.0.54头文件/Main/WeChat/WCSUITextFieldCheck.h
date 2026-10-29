@interface WCSUITextFieldCheck : MMObject
{
    shared_ptr<__WCSN::__WCSBCP> check; // +0x8
    BOOL _tracking; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)printResult;
- (void)start;
- (void)stop;
- (void)pause;
- (id)getData;
- (void)onBeginEdit:(id)arg1;
- (void)onEndEdit:(id)arg1;
- (void)onEditChange:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

