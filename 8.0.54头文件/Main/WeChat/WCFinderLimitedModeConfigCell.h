@interface WCFinderLimitedModeConfigCell : MMTableViewCell
{
    UIFont * m_titleLabelFont; // +0x8
    UIImageView * _backgroundImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _lineView; // +0x30
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 pos:(long long)arg3;
- (void)makeTitleLabelFontSizeToFix:(unsigned long long)arg1;
- (BOOL)checkTitleLabelCrossLine;
- (void)showBottomLine:(BOOL)arg1;
- (void)initUI;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

