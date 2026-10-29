@interface MMBottomToolView : UIImageView
{
    BOOL _isShowChangeButton; // +0x8
    id <MMBottomToolViewDelegate> _delegate; // +0x10
    NSArray * _buttonConfigs; // +0x18
    NSMutableArray * _buttons; // +0x20
    NSMutableArray * _separators; // +0x28
    double _buttonHeight; // +0x30
    UIButton * _changeBtn; // +0x38
    CGSize _separatorSize; // +0x40
    UIEdgeInsets _edgeInsets; // +0x50
}
- (id)initWithParentView:(id)arg1 edgeInsets:(UIEdgeInsets)arg2 separatorSize:(CGSize)arg3 buttonHeight:(double)arg4 buttonConfigs:(id)arg5;
- (id)initWithParentView:(id)arg1 edgeInsets:(UIEdgeInsets)arg2 separatorSize:(CGSize)arg3 buttonHeight:(double)arg4 buttonConfigs:(id)arg5 isShowChangeButton:(BOOL)arg6;
- (void)initUI;
- (void)setupChangeButton;
- (void)onChangeBtnClick:(id)arg1;
- (void)setupTopLine;
- (void)setupButtons;
- (void)updateButtonAtIndex:(unsigned long long)arg1 withText:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)buttonConfigs;
- (void)setButtonConfigs:(id)arg1;
- (id)buttons;
- (void)setButtons:(id)arg1;
- (id)separators;
- (void)setSeparators:(id)arg1;
- (CGSize)separatorSize;
- (void)setSeparatorSize:(CGSize)arg1;
- (double)buttonHeight;
- (void)setButtonHeight:(double)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (BOOL)isShowChangeButton;
- (void)setIsShowChangeButton:(BOOL)arg1;
- (id)changeBtn;
- (void)setChangeBtn:(id)arg1;
- (void).cxx_destruct;
@end
