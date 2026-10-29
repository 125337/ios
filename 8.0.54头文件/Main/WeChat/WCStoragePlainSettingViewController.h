@interface WCStoragePlainSettingViewController : MMUIViewController <IChatLogDataMgrExt>
{
    unsigned long long _maxChatLogSize; // +0x68
    unsigned long long _maxChatLogDBSize; // +0x70
    double _startLoadCleanData; // +0x78
    MMTableViewInfo * _tableViewInfo; // +0x80
}
- (void)viewDidLoad;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)onManageResourceClick;
- (void)onManageChatLogClick;
- (void)onChatLogDataLoadFinished;
- (void)reportSessionData;
- (void)reportNewTopSession;
- (unsigned long long)maxChatLogSize;
- (void)setMaxChatLogSize:(unsigned long long)arg1;
- (unsigned long long)maxChatLogDBSize;
- (void)setMaxChatLogDBSize:(unsigned long long)arg1;
- (double)startLoadCleanData;
- (void)setStartLoadCleanData:(double)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end

