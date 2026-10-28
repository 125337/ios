@interface WCStoragePlainSettingViewController : MMUIViewController
{
    unsigned long long _maxChatLogSize; // +0x70
    MMTableViewInfo * _tableViewInfo; // +0x78
}
- (void)viewDidLoad;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)onManageResourceClick;
- (void)onManageChatLogClick;
- (unsigned long long)maxChatLogSize;
- (void)setMaxChatLogSize:(unsigned long long)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end
