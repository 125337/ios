@interface WCFinderBulletMoreActionSheet : WCUIActionSheet
{
    BOOL _didNotifyDismiss; // +0x10
    WCFinderBulletMoreActionSheetParams * _params; // +0x18
    unsigned long long _action; // +0x20
}
+ (id)sheetWithParams:(id)arg1;
+ (void)_reportEvent:(id)arg1 action:(unsigned long long)arg2 params:(id)arg3;
- (void)reloadInnerView;
- (void)showInView:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)onDismissCompletelyWithClickedButtonIndex:(long long)arg1;
- (void)_notifyDismissIfNeeded;
- (void)_addButtonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2 action:(unsigned long long)arg3 params:(id)arg4;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (BOOL)didNotifyDismiss;
- (void)setDidNotifyDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end
