@interface WCFinderAddPOIViewTableViewCell : UITableViewCell
{
    UIImageView * _checkBox; // +0x8
    UILabel * _nameLabel; // +0x10
    UILabel * _addrLabel; // +0x18
    UIView * _lineView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateMargin;
- (void)configWithPOIDetail:(id)arg1 selected:(BOOL)arg2;
- (id)checkBox;
- (id)nameLabel;
- (id)addrLabel;
- (id)lineView;
- (void)setCheckBox:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setAddrLabel:(id)arg1;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

