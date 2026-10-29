@interface WCFinderLocationSelectItemCell : UITableViewCell
{
    UILabel * _poiNameLabel; // +0x8
    UILabel * _poiAddressLabel; // +0x10
    UILabel * _selectOtherPOILabel; // +0x18
    UIImageView * _selectedIcon; // +0x20
    UIView * _seperatorLine; // +0x28
    WCFinderLocationSelectItem * _item; // +0x30
    CGSize _layoutSize; // +0x38
}
+ (double)defaultHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithLocationSelectItem:(id)arg1 selected:(BOOL)arg2;
- (id)poiNameLabel;
- (void)setPoiNameLabel:(id)arg1;
- (id)poiAddressLabel;
- (void)setPoiAddressLabel:(id)arg1;
- (id)selectOtherPOILabel;
- (void)setSelectOtherPOILabel:(id)arg1;
- (id)selectedIcon;
- (void)setSelectedIcon:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end

