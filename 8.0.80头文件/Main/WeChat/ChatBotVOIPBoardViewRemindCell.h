@interface ChatBotVOIPBoardViewRemindCell : ChatBotVOIPBoardViewBaseCell
{
    UIView * _titleView; // +0x8
    UITableView * _tableView; // +0x10
    CreateAIRemind * _remindModel; // +0x18
    UIView * _cardView; // +0x20
}
- (id)initWithMessage:(id)arg1 openScene:(int)arg2;
- (double)setupViewWithWidth:(double)arg1;
- (void)layoutCardView;
- (void)layoutTCardViewInner;
- (void)updateBaseReportDataPB:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)remindModel;
- (void)setRemindModel:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end
