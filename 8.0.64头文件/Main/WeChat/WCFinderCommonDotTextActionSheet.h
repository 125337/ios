@interface WCFinderCommonDotTextActionSheet : WCActionSheet
{
    id <WCFinderCommonDotTextActionSheetDelegate> _businessDelegate; // +0x8
    UIView * _tipsView; // +0x10
    UIButton * _closeBtn; // +0x18
}
- (id)init;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (id)getActionSheetConfig;
- (void)onClickCloseBtn;
- (void)onClickCommonBtn;
- (id)businessDelegate;
- (void)setBusinessDelegate:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end
