@interface MMEdgeTipsView : MMUIView
{
    int _position; // +0x8
    id <MMEdgeTipsViewDelegate> _delegate; // +0x10
    UIButton * _bgButton; // +0x18
    UIImageView * _iconView; // +0x20
    MMUILabel * _tipsLabel; // +0x28
}
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithConfig:(MMEdgeTipsViewConfig)arg1;
- (void)initButtonWithConfig:(MMEdgeTipsViewConfig *)arg1;
- (void)initIconWithConfig:(MMEdgeTipsViewConfig *)arg1;
- (void)initTipsLabelWithConfig:(MMEdgeTipsViewConfig *)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)showAnimate:(BOOL)arg1 parentView:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)hideAnimate:(BOOL)arg1 parentView:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)onClickBtn;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)position;
- (id)bgButton;
- (void)setBgButton:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

