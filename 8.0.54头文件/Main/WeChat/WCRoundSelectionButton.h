@interface WCRoundSelectionButton : UIView
{
    UIButton * _button; // +0x8
    SEL _clickAction; // +0x10
    id _clickTarget; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)addTarget:(id)arg1 clickAction:(SEL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)didClick:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (SEL)clickAction;
- (void)setClickAction:(SEL)arg1;
- (id)clickTarget;
- (void)setClickTarget:(id)arg1;
- (void).cxx_destruct;
@end

