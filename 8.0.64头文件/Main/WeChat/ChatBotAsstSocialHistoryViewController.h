@interface ChatBotAsstSocialHistoryViewController : MMUIViewController <ChatBotAsstSocialHistoryVCDelegate>
{
    MMUIButton * _backBtn; // +0x70
    MMTableView * _tableView; // +0x78
    MMUILabel * _titleLabel; // +0x80
    ChatBotAsstSocialHistoryDataController * _dataController; // +0x88
}
- (id)initWithDataController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutTitleLabel;
- (void)layoutBackBtn;
- (void)layoutTableView;
- (void)exitPage;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (void).cxx_destruct;
@end
