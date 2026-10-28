@interface HoneyPayBaseViewController : WCPayBaseViewController
{
    UIView * _navBackground; // +0x98
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)showAlertWith:(id)arg1;
- (void)clickRightBarButton:(id)arg1;
- (id)dateStringFromTimestamp:(long long)arg1;
- (id)accessibilityDateLabelFromTimestamp:(long long)arg1;
- (void)addNavigationBarBackground:(id)arg1;
- (void)didClickUnbind;
- (void)keyboardDidShow:(id)arg1;
- (void)honeyPaykeyboardDidHide:(id)arg1;
- (id)navBackground;
- (void)setNavBackground:(id)arg1;
- (void).cxx_destruct;
@end
