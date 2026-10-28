@interface MMBottomToolView : UIImageView
{
    NSArray * _buttonConfigs; // +0x8
    NSMutableArray * _buttons; // +0x10
    NSMutableArray * _separators; // +0x18
    double _buttonHeight; // +0x20
    CGSize _separatorSize; // +0x28
    UIEdgeInsets _edgeInsets; // +0x38
}
- (id)initWithParentView:(id)arg1 edgeInsets:(UIEdgeInsets)arg2 separatorSize:(CGSize)arg3 buttonHeight:(double)arg4 buttonConfigs:(id)arg5;
- (void)initUI;
- (void)setupTopLine;
- (void)setupButtons;
- (void)updateButtonAtIndex:(unsigned long long)arg1 withText:(id)arg2;
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
- (void).cxx_destruct;
@end
