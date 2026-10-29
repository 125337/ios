@interface MMFinderLiveMemberTipsBubble : UIView
{
    BOOL _superfanIcon; // +0x8
    unsigned int _duration; // +0xc
    id /* block */ _dismissBlock; // +0x10
    UIImageView * _iconView; // +0x18
    MMUILabel * _tipLabel; // +0x20
    NSString * _tips; // +0x28
}
- (id)initWithTips:(id)arg1 duration:(unsigned int)arg2 superfanIcon:(BOOL)arg3;
- (void)initUI;
- (void)createTipLabel;
- (void)createIconView;
- (BOOL)isShow;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (BOOL)superfanIcon;
- (void)setSuperfanIcon:(BOOL)arg1;
- (void).cxx_destruct;
@end

