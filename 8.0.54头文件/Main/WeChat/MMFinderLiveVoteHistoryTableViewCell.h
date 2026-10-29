@interface MMFinderLiveVoteHistoryTableViewCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _descLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)configWithTitle:(id)arg1 desc:(id)arg2;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

