@interface CBTMomentDetailViewController : MMUIViewController <CBTMomentListTableViewDelegate>
{
    CBTMomentContentCellModel * _cellModel; // +0x70
    ChatBotMomentItem * _momentItem; // +0x78
    NSString * _commentDupId; // +0x80
    MMUIView * _navSepLine; // +0x88
    UITableView * _tableView; // +0x90
    CBTMomentListTableView * _momentTableView; // +0x98
}
- (id)initWithChatBotMomentItem:(id)arg1 commentDupId:(id)arg2;
- (void)viewDidLoad;
- (void)setupNavBar;
- (void)setupMomentTableView;
- (id)cellModel;
- (void)setCellModel:(id)arg1;
- (id)momentItem;
- (void)setMomentItem:(id)arg1;
- (id)commentDupId;
- (void)setCommentDupId:(id)arg1;
- (id)navSepLine;
- (void)setNavSepLine:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)momentTableView;
- (void)setMomentTableView:(id)arg1;
- (void).cxx_destruct;
@end
