@interface WAAuthPageSheetFooterView : WAAuthPageSheetBaseView
{
    UIButton * _acceptButton; // +0x8
    UIButton * _rejectButton; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (void).cxx_destruct;
@end
