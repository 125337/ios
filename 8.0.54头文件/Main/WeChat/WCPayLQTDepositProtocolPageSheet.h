@interface WCPayLQTDepositProtocolPageSheet : NSObject <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    id <WCPayLQTDepositProtocolPageSheetDelegate> _delegate; // +0x8
    NSString * _protocolContent; // +0x10
    NSString * _protocolUrl; // +0x18
    MMPageSheetAdapter * _pageAdapter; // +0x20
    UIView * _pageSheetDetailView; // +0x28
}
- (id)initWithDelegate:(id)arg1 protocolContent:(id)arg2 protocolUrl:(id)arg3;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)protocolContent;
- (void)setProtocolContent:(id)arg1;
- (id)protocolUrl;
- (void)setProtocolUrl:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (void).cxx_destruct;
@end

