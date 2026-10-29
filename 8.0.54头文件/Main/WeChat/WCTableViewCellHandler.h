@interface WCTableViewCellHandler : NSObject
{
    MMUIViewController * _viewController; // +0x8
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x10
}
- (id)initWithCurViewController:(id)arg1;
- (id)genCellManager;
- (id)viewController;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(BOOL)arg3 forbidOp:(BOOL)arg4;
- (id)delaySwitchLogic;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setDelaySwitchLogic:(id)arg1;
- (void).cxx_destruct;
@end

