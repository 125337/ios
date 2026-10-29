@interface WCEasyBoolValueEditViewController : SettingBaseViewController
{
    NSMutableArray * _configItemArray; // +0x80
}
- (id)init;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onSwitchValueChaged:(id)arg1;
- (id)configItemArray;
- (void)setConfigItemArray:(id)arg1;
- (void).cxx_destruct;
@end
