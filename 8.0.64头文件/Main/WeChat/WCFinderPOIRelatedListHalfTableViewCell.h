@interface WCFinderPOIRelatedListHalfTableViewCell : UITableViewCell
{
    FavAttributeCPLabel * _titleLabel; // +0x8
    FavAttributeCPLabel * _detailLabel; // +0x10
    UIView * _bottomLine; // +0x18
    UIImageView * _arrowImageView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubView;
- (void)updateUIWithPOIDetail:(id)arg1 isHiddenLine:(BOOL)arg2;
- (void)updateUIMargin;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
