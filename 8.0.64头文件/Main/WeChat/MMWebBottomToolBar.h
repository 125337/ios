@interface MMWebBottomToolBar : UIView
{
    UIButton * _backButton; // +0x8
    UIButton * _forwardButton; // +0x10
    UIView * _lineView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)backButton;
- (id)forwardButton;
- (id)lineView;
- (void)setBackButton:(id)arg1;
- (void)setForwardButton:(id)arg1;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
