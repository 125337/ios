@interface EnterpriseMsgContentViewController : BaseMsgContentViewController <EnterpriseBrandSelectSheetViewDelegate>
{
    WCActionSheet * _enterpriseActionSheet; // +0x1c8
}
- (void)switchEarMode;
- (void)onBackButtonClicked:(id)arg1;
- (void)openEnterpriseBrandEntry;
- (void)onEnterpriseSelectBrandContact:(id)arg1 sheetView:(id)arg2;
- (void).cxx_destruct;
@end

