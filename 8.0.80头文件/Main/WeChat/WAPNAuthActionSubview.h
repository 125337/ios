@interface WAPNAuthActionSubview : WAAuthPageSheetBaseView
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)pnAuthPageSheet;
- (void)layoutNotAllowButton;
- (void)layoutNoPhoneButtons;
- (void)onTapCancel;
- (void)onTapFillPhone;
@end
