@interface ChatBotHistorySummaryCell : UITableViewCell
{
    UIView * _customContentView; // +0x8
    ChatBotHistorySummaryItem * _model; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    UILabel * _stateLabel; // +0x20
    UIImageView * _arrowView; // +0x28
    UILabel * _titleLabel; // +0x30
}
+ (id)reuseIdentifier;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)makeCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
