@interface WCAccountPhoneBindGuidanceViewController : WCAccountBaseViewController <ILinkEventExt, MMWebViewDelegate>
{
    id <WCAccountPhoneBindGuidanceViewControllerDelegate> _delegate; // +0x78
    WCAccountPhoneBindGuidanceData * _m_guidanceData; // +0x80
}
- (id)initWithData:(id)arg1;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (BOOL)useBlackStyleView;
- (BOOL)useTableView;
- (void)initTableView;
- (void)onBind;
- (void)onClickClose;
- (void)onClickDoubleCheckOK;
- (void)onClickDoubleCheckCancel;
- (void)trueClose;
- (void)reportPageExpose;
- (void)reportAction:(int)arg1;
- (void)reportWithString:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_guidanceData;
- (void)setM_guidanceData:(id)arg1;
- (void).cxx_destruct;
@end

