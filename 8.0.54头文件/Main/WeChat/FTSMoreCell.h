@interface FTSMoreCell : MMTableViewCell
{
    UIImageView * _moreIcon; // +0x8
    UIImageView * _rightArrowIcon; // +0x10
    UILabel * _moreTipLabel; // +0x18
    UIView * _topLine; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateViewMoreTip:(id)arg1;
- (void)layoutSubviews;
- (id)moreIcon;
- (void)setMoreIcon:(id)arg1;
- (id)rightArrowIcon;
- (void)setRightArrowIcon:(id)arg1;
- (id)moreTipLabel;
- (void)setMoreTipLabel:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (void).cxx_destruct;
@end

