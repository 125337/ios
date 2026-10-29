@interface MMFinderLiveConnectMicPkPanelHeaderCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // +0x8
    unsigned long long _buttonType; // +0x10
    UILabel * _titleLabel; // +0x18
    NSString * _titleText; // +0x20
    MMUIButton * _button; // +0x28
}
+ (id)ReuseIdentifier;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onTapButton;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setButtonType:(unsigned long long)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (unsigned long long)buttonType;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

