@interface WeAppGameJoinTeamSectionView : MMUIButton
{
    MMUIImageView * _leftIconView; // +0x8
    MMUILabel * _wordingLable; // +0x10
    MMUILabel * _conditionLable; // +0x18
    MMUIImageView * _rightIconView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)updateDesc:(id)arg1;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)wordingLable;
- (void)setWordingLable:(id)arg1;
- (id)conditionLable;
- (void)setConditionLable:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (void).cxx_destruct;
@end
