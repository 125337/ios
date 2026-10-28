@interface FirstUnReadTipView : MMUIView
{
    id <FirstUnReadTipViewDelegate> _delegate; // +0x8
}
+ (id)showTipWithDelegate:(id)arg1 parentView:(id)arg2 content:(id)arg3;
- (id)init;
- (void)initView;
- (void)performBgAction;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
