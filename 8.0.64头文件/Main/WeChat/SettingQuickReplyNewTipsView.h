@interface SettingQuickReplyNewTipsView : UIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUICellSwitch * _switcher; // +0x10
    UIImageView * _bubbleBgView; // +0x18
    UIView * _redDotView; // +0x20
    MMUILabel * _tipsLabel; // +0x28
    UIView * _bottomLine; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1 tips:(id)arg2;
- (void)setSwitchTarget:(id)arg1 action:(SEL)arg2;
- (void)setSwitcherOn:(BOOL)arg1;
- (CGSize)sizeToFitWidth:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)switcher;
- (void)setSwitcher:(id)arg1;
- (id)bubbleBgView;
- (void)setBubbleBgView:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
