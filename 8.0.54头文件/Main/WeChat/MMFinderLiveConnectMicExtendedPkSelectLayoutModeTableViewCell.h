@interface MMFinderLiveConnectMicExtendedPkSelectLayoutModeTableViewCell : UITableViewCell
{
    unsigned long long _selectedLayoutMode; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _rightLabel; // +0x18
    UIImageView * _rightChevronView; // +0x20
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelectedLayoutMode:(unsigned long long)arg1;
- (void)updateRightLabelText;
- (void)layoutSubviews;
- (unsigned long long)selectedLayoutMode;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (void).cxx_destruct;
@end

