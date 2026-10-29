@interface MMFinderLivePaymentTipsBubble : UIView
{
    unsigned int _duration; // +0x8
    id /* block */ _dismissBlock; // +0x10
    MMUILabel * _tipLabel; // +0x18
    NSString * _tips; // +0x20
}
- (id)initWithTips:(id)arg1 duration:(unsigned int)arg2;
- (void)initUI;
- (BOOL)isShow;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end
