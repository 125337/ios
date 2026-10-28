@interface _TtC6WeChat25ThirdPartyServiceTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
     confirmAction; // +0x8
     scene; // +0x18
}
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
