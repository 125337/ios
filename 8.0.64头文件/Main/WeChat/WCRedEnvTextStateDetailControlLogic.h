@interface WCRedEnvTextStateDetailControlLogic : WCRedEnvelopesControlLogic <WCRedEnvTextStateDetailViewControllerDelegate>
{
    WCRedEnvTextStateInfo * _detailInfo; // +0x38
    id <WCRedEnvTextStateDetailControlLogicDelegate> _delegate; // +0x40
    WCRedEnvTextStateDetailViewController * _detailVC; // +0x48
}
- (id)initWithTextStateInfo:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)onTextStateDetailViewControllerBack;
- (id)detailInfo;
- (void)setDetailInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (void).cxx_destruct;
@end
