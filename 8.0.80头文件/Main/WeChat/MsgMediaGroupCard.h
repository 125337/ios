@interface MsgMediaGroupCard : UIView <IMsgMediaGroupCard>
{
    UIView * _animatingMaskView; // +0x8
    MsgMediaGroupCardContentView * _contentView; // +0x10
}
+ (BOOL)canInitWithViewModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)setupUI:(id)arg1;
- (id)getContentView;
- (BOOL)isValid;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isActive;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (void)becomeActive;
- (void)resignActive;
- (void)startDisplay;
- (void)endDisplay;
- (void)onBeginAnimating;
- (void)onEndAnimating;
- (id)animatingMaskView;
- (void)setAnimatingMaskView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
