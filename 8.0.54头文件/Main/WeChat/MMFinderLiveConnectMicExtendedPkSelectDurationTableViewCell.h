@interface MMFinderLiveConnectMicExtendedPkSelectDurationTableViewCell : UITableViewCell
{
    MMFinderLiveBattleDurationItem * _selectedDuration; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _durationLabel; // +0x18
    UIImageView * _rightChevronView; // +0x20
    UIView * _separatorBar; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelectedDuration:(id)arg1;
- (void)updateSeparatorBarHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (id)selectedDuration;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end

