@interface WAPNPageSheetListItemCell : MMTableViewCell
{
    UILabel * _phoneNumberLabel; // +0x8
    UILabel * _describeLabel; // +0x10
    UIImageView * _toggleImageView; // +0x18
    UIView * _topLineView; // +0x20
    UIView * _bottomLineView; // +0x28
    PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo * _info; // +0x30
}
+ (double)viewHeight;
+ (double)edgeLR;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)markBottom;
- (void)markUnBottom;
- (void)toggle;
- (void)unToggle;
- (void)fillPhoneInfo:(id)arg1;
- (id)phoneNumberLabel;
- (void)setPhoneNumberLabel:(id)arg1;
- (id)describeLabel;
- (void)setDescribeLabel:(id)arg1;
- (id)toggleImageView;
- (void)setToggleImageView:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end

