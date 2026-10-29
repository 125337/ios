@interface SolitairePhoneNumberTableViewCell : UITableViewCell
{
    MMUILabel * _phoneNumberLabel; // +0x8
    MMUILabel * _descriptionLabel; // +0x10
    UIImageView * _accessoryImageView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)configureCellWithPhoneNumber:(id)arg1;
- (void)layoutSubviews;
- (id)phoneNumberLabel;
- (id)descriptionLabel;
- (id)accessoryImageView;
- (void)setPhoneNumberLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setAccessoryImageView:(id)arg1;
- (void).cxx_destruct;
@end

