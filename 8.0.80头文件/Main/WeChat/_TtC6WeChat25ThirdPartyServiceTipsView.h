@interface _TtC6WeChat25ThirdPartyServiceTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    void * confirmAction; // +0x8
    long long scene; // +0x18
    NSDictionary * reportParams; // +0x20
    unsigned long long routeRule; // +0x28
    void * legalPopupViewId; // +0x30
}
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (unsigned long long)routeRule;
- (void)setRouteRule:(unsigned long long)arg1;
- (id)legalPopupViewId;
- (void)setLegalPopupViewId:(id)arg1;
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
