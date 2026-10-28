@interface MJImageComposingDeletingButton : UIButton
{
    BOOL _isInHighlightState; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _tipLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setupViews;
- (void)switchToHighlightStateAnimated:(BOOL)arg1;
- (void)switchToNormalStateAnimated:(BOOL)arg1;
- (id)iconView;
- (id)tipLabel;
- (void)setIconView:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (BOOL)isInHighlightState;
- (void)setIsInHighlightState:(BOOL)arg1;
- (void).cxx_destruct;
@end
