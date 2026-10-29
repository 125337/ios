@interface WCFinderManagePOITableViewCell : UITableViewCell
{
    UILabel * _nameLabel; // +0x8
    UILabel * _addrLabel; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _auditLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _lineView; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateMargin;
- (void)configWithPOIDetail:(id)arg1;
- (id)nameLabel;
- (id)addrLabel;
- (id)iconImageView;
- (id)auditLabel;
- (id)arrowImageView;
- (id)lineView;
- (void)setNameLabel:(id)arg1;
- (void)setAddrLabel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setAuditLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

