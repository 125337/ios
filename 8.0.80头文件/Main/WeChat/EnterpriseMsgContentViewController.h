@interface EnterpriseMsgContentViewController : BaseMsgContentViewController <EnterpriseBrandSelectSheetViewDelegate>
{
    WCActionSheet * _enterpriseActionSheet; // +0x1e0
}
- (void)switchEarMode:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)openEnterpriseBrandEntry;
- (void)onEnterpriseSelectBrandContact:(id)arg1 sheetView:(id)arg2;
- (void).cxx_destruct;
@end
