@interface HoneyPayHomeControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayHomeViewControllerDelegate, WCPayHoneyPayListCgiDelegate, HoneyPayCreateControlLogicDelegate, HoneyPayPayerDetailControlLogicDelegate>
{
    BOOL _createCardSuccess; // +0x38
    id <HoneyPayHomeControlLogicDelegate> _delegate; // +0x40
    WCPayHoneyPayListCgi * _listCgi; // +0x48
    HoneyPayHomeViewController * _homeVC; // +0x50
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)stopLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)refreshList;
- (void)createControlLogicDidCreateSuccess:(id)arg1;
- (void)payerDetailControlLogicDidUnbindCard:(id)arg1;
- (void)payerDetailControlLogicDidModifyMaximumAmount:(id)arg1;
- (void)payerDetailControlLogicDidRemoveDetailVC:(id)arg1;
- (void)honeyPayVC:(id)arg1 didClickRecord:(id)arg2;
- (void)honeyPayVCDidClickAddCard:(id)arg1;
- (void)honeyPayListCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)honeyPayListCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)listCgi;
- (void)setListCgi:(id)arg1;
- (id)homeVC;
- (void)setHomeVC:(id)arg1;
- (BOOL)createCardSuccess;
- (void)setCreateCardSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

