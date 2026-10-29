@interface ChatBoxSettingViewController : MMUIViewController <IContactMgrExt>
{
    MMTableViewInfo * _tableViewInfo; // +0x70
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onModifyContact:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadSettings;
- (void)onSessionTopSwitch:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end
