@interface HoneyPayReceiverDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayReceiverStatusViewControllerDelegate, WCPayQryHoneyUserDetailCgiDelegate, WCPayGetHoneyPayCardCgiDelegate>
{
    BOOL _receiveCardSuccess; // +0x38
    id <HoneyPayReceiverDetailControlLogicDelegate> _delegate; // +0x40
    HoneyPayReceiverStatusViewController * _detailVC; // +0x48
    WCPayQryHoneyUserDetailCgi * _detailCgi; // +0x50
    WCPayGetHoneyPayCardCgi * _getCardCgi; // +0x58
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)startLogic;
- (void)dealloc;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)requestDetail;
- (id)cardNo;
- (void)receiverStatusVCDidClickGetCard:(id)arg1;
- (void)receiverStatusVCDidClickGotoBankCardList:(id)arg1;
- (void)qryHoneyUserDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (id)detailCgi;
- (void)setDetailCgi:(id)arg1;
- (id)getCardCgi;
- (void)setGetCardCgi:(id)arg1;
- (BOOL)receiveCardSuccess;
- (void)setReceiveCardSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
