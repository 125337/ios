@interface EmoticonLensDesignerView : MMUIView
{
    id <EmoticonLensDesignerViewDelegate> _delegate; // +0x8
    UILabel * _tipLabel; // +0x10
    UILabel * _designerNameLabel; // +0x18
    UIButton * _button; // +0x20
    PersonalDesigner * _designer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateDesignerInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)designerNameLabel;
- (void)setDesignerNameLabel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)designer;
- (void)setDesigner:(id)arg1;
- (void).cxx_destruct;
@end

