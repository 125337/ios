@interface WCFinderProfilePOISearchTableViewCell : UITableViewCell
{
    FavAttributeCPLabel * _nameLabel; // +0x8
    FavAttributeCPLabel * _addrLabel; // +0x10
    UIImageView * _arrowView; // +0x18
    UIView * _lineView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateMargin;
- (void)configWithPOIInfo:(id)arg1 hideLine:(BOOL)arg2;
- (id)distanceByPOIInfo:(id)arg1;
- (id)nameLabel;
- (id)addrLabel;
- (id)arrowView;
- (id)lineView;
- (void)setNameLabel:(id)arg1;
- (void)setAddrLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

