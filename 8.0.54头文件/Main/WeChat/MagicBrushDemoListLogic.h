@interface MagicBrushDemoListLogic : MagicBrushDemoLogic
{
    UITableView * _tableView; // +0x28
    ZZFLEXAngel * _angel; // +0x30
    UIView * _pendingView; // +0x38
}
- (void)start;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onMainScriptInjected:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)pendingView;
- (void)setPendingView:(id)arg1;
- (void).cxx_destruct;
@end

