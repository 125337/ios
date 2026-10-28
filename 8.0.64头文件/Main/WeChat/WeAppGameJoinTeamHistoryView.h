@interface WeAppGameJoinTeamHistoryView : MMUIButton
{
    MMUIImageView * _leftIconView; // +0x8
    MMUILabel * _wordingLable; // +0x10
    MMUIImageView * _rightIconView; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)wordingLable;
- (void)setWordingLable:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (void).cxx_destruct;
@end
