@interface EcsTipsSheetView : MMPageSheetBaseView
{
    NSString * _tips; // +0x8
    id <EcsTipsSheetViewDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    UIButton * _confirmButton; // +0x20
}
- (id)initWithTips:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)initView;
- (void)onConfirmButtonClick;
- (void)updateContentViewHeight;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
