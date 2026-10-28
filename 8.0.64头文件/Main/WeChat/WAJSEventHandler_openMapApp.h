@interface WAJSEventHandler_openMapApp : WAJSEventHandler_BaseEvent <WANavigateLogicControllerDelegate>
{
    WANavigateLogicController * _navLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onClickMapApp:(unsigned long long)arg1;
- (void)onCancelMenu;
- (id)navLogic;
- (void)setNavLogic:(id)arg1;
- (void).cxx_destruct;
@end
