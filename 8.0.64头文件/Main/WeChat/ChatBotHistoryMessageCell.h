@interface ChatBotHistoryMessageCell : UITableViewCell
{
    UIView * _customContentView; // +0x8
    ChatBotHistoryMessageItem * _model; // +0x10
    UILabel * _titleLabel; // +0x18
}
+ (id)reuseIdentifier;
- (id)reuseIdentifier;
- (void)makeCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
