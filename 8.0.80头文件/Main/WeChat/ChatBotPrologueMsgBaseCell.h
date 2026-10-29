@interface ChatBotPrologueMsgBaseCell : UITableViewCell
{
    ChatBotPrologueMsg * _prologueMsg; // +0x8
    double _contentWidth; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UIView * _cardView; // +0x28
}
+ (double)CalCellHeightWithMsg:(id)arg1 contentWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)getCellHeight;
- (void)setupUI;
- (long long)getTitleLines;
- (id)getTitle;
- (id)getDesc;
- (void)layoutCardView;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)configureWithPrologueMsg:(id)arg1;
- (id)prologueMsg;
- (void)setPrologueMsg:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end
