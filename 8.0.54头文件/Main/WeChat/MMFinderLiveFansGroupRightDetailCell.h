@interface MMFinderLiveFansGroupRightDetailCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    MMUILabel * _levelLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    MMWebImageView * _noticeImageView; // +0x20
    UIView * _lineView; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (double)getProportionLevelCenterX;
- (double)getProportionLineViewLeft;
- (double)getProportionLineViewPadding;
- (void)layoutSubviews;
- (void)configWithLevel:(unsigned int)arg1 desc:(id)arg2 imageUrlString:(id)arg3;
- (id)levelLabel;
- (void)setLevelLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)noticeImageView;
- (void)setNoticeImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

