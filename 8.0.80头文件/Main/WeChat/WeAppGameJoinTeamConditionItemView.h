@interface WeAppGameJoinTeamConditionItemView : MMUIButton
{
    int _conditionId; // +0x8
    NSString * _wording; // +0x10
    MMUILabel * _conditionLabel; // +0x18
    MMUIImageView * _rightIconView; // +0x20
    UIView * _bottomLineView; // +0x28
}
- (id)initWithParmas:(id)arg1 idx:(int)arg2 frame:(CGRect)arg3;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)enableChecked:(BOOL)arg1;
- (int)getId;
- (id)getDesc;
- (int)conditionId;
- (void)setConditionId:(int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)conditionLabel;
- (void)setConditionLabel:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (void).cxx_destruct;
@end
