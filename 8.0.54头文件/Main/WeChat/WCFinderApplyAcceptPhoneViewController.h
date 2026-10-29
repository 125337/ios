@interface WCFinderApplyAcceptPhoneViewController : MMUIViewController
{
    id /* block */ _complete; // +0x68
    UIView * _bgView; // +0x70
    UIView * _detailView; // +0x78
}
+ (void)showVCFromVC:(id)arg1 complete:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (id)createDetailView;
- (id)createButtonWithTitle:(id)arg1 titleColor:(id)arg2 bgColor:(id)arg3 action:(SEL)arg4;
- (void)onClickCancelBtn;
- (void)onClickAccept;
- (void)close:(BOOL)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (void).cxx_destruct;
@end

