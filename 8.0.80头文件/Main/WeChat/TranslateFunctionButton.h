@interface TranslateFunctionButton : UIView
{
    BOOL _speaking; // +0x8
    id <TranslateFunctionButtonDelegate> _delegate; // +0x10
    UIButton * _leftButton; // +0x18
    UIButton * _rightButton; // +0x20
    WorldTranslateManager * _manager; // +0x28
    UIView * _separatorLine; // +0x30
    NSString * _leftTitle; // +0x38
    NSString * _rightTitle; // +0x40
}
+ (id)buttonWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 leftTitle:(id)arg2 rightTitle:(id)arg3;
- (void)_commonInitWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (double)buttonWidthForTitle:(id)arg1 font:(id)arg2;
- (void)setSpeakEnable:(BOOL)arg1;
- (void)onSpeaking:(BOOL)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (void)layoutSubviews;
- (void)_handleLeftTap;
- (void)_handleRightTap;
- (void)setHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (BOOL)speaking;
- (void)setSpeaking:(BOOL)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)leftTitle;
- (void)setLeftTitle:(id)arg1;
- (id)rightTitle;
- (void)setRightTitle:(id)arg1;
- (void).cxx_destruct;
@end
