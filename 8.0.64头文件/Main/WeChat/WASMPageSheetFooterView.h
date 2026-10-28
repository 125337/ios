@interface WASMPageSheetFooterView : WAAuthPageSheetFooterView
{
    UIButton * _declineButton; // +0x8
    UIButton * _keepOptionButton; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)setSMUI;
- (id)declineButton;
- (void)setDeclineButton:(id)arg1;
- (id)keepOptionButton;
- (void)setKeepOptionButton:(id)arg1;
- (void).cxx_destruct;
@end
