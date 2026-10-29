@interface MMLiveGameJoinTeamHelpView : MMPageSheetBaseView
{
    BOOL _model; // +0x8
    id <MMLiveGameJoinTeamHelpViewDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    UIView * _topAreaView; // +0x20
    MMUIButton * _leftButton; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _helperLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 model:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)leftButtonAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topAreaView;
- (void)setTopAreaView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)helperLabel;
- (void)setHelperLabel:(id)arg1;
- (BOOL)model;
- (void)setModel:(BOOL)arg1;
- (void).cxx_destruct;
@end

