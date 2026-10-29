@interface WCPayT2BCTransferControlLogic : WCPayControlLogic <WCPayT2BCDetailControlLogicDelegate, WCPayPayMoneyLogicDelegate, WCPayT2BCGetTransHistroyCgiDelegate, WCPayT2BCAppointBankCgiDelegate, WCPayT2BCCheckBankBindCgiDelegate, WCPayT2BCPayRequestCgiDelegate, WCPayT2BCGetBankInfoCgiDelegate, WCPayT2BCModifyRemarkCgiDelegate, WCPayT2BCDeleteRecordCgiDelegate, WCPayT2BCBusinessCallBackCgiDelegate, WCPayT2BCOperationCgiDelegate, WCPaySelectReceiverViewControllerDelegate, MMTipsViewControllerDelegate, WCPayT2BCPayReportCgiDelegate, WCPayTransferToBankCardFillInfoViewControllerDelegate, WCPayTransferToBankCardViewControllerDelegate, MMUseCaseCallback>
{
    id <WCPayT2BCTransferControlLogicDelegate> _t2bcTransferLogicDelgate; // +0x38
    unsigned long long m_uiT2BCTransferLogicStatus; // +0x40
    int _entryScene; // +0x48
    WCPayT2BCGetTransHistroyCgi * m_getTransferToBankHistoryCgi; // +0x50
    WCPayT2BCAppointBankCgi * m_appointBankCgi; // +0x58
    WCPayT2BCCheckBankBindCgi * m_checkBankBindCgi; // +0x60
    WCPayT2BCPayRequestCgi * m_transToBankCardPayReqCgi; // +0x68
    WCPayT2BCGetBankInfoCgi * m_getBankInfoCgi; // +0x70
    WCPayT2BCModifyRemarkCgi * m_modifyRemarkCgi; // +0x78
    WCPayT2BCDeleteRecordCgi * m_deleteRecordCgi; // +0x80
    WCPayT2BCBusinessCallBackCgi * m_businessCallBackCgi; // +0x88
    WCPayPayMoneyLogic * m_payMoneyLogic; // +0x90
    WCPayT2BCOperationCgi * m_operationCgi; // +0x98
    QueryTransferListRes * _m_transferListRes; // +0xa0
    AppointBankRes * _m_appointBankRes; // +0xa8
    CheckBankBindRes * _m_checkBankBindRes; // +0xb0
    TransToBankCardPayRes * _m_transToBankCardPayRes; // +0xb8
    GetBankInfoRes * _m_getBankInfoRes; // +0xc0
    WCPayT2BCPayReportCgi * _m_reportTsbcCgi; // +0xc8
    OperationResp * _m_operationResp; // +0xd0
    long long _lastUnpayReason; // +0xd8
    NSString * _bankCardNumber; // +0xe0
    WCPayTransferToBankCardFillInfoViewController * _m_fillInfoVC; // +0xe8
}
- (void)setTransferScene:(int)arg1;
- (void)setTransferBankCardNumer:(id)arg1;
- (void)setT2BCTransferControlLogicDelegate:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)OnGetTransToBankHistory:(id)arg1 myHistory:(id)arg2 response:(id)arg3;
- (id)processBankCardNumber:(id)arg1;
- (void)OnGetTransToBankHistoryError:(id)arg1 errorCode:(long long)arg2;
- (void)OnWCPayT2BCOperationCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCOperationCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetApponitBankResonseOK:(id)arg1;
- (void)OnGetApponitBankResonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCCheckBankBindCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCCheckBankBindCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCPayRequestCgiResponseOK:(id)arg1;
- (void)startPayMoneyLogic:(BOOL)arg1;
- (void)call:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)sendBusinessCallbackRequest;
- (void)sendBusinessCallbackRequest:(id)arg1;
- (void)OnWCPayT2BCPayRequestCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCPayRequestCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2 response:(id)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)OnWCPayT2BCGetBankInfoCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCGetBankInfoCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCModifyRemarkCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCModifyRemarkCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCDeleteRecordCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCDeleteRecordCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCBusinessCallBackCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCBusinessCallBackCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)FillTransferToBankCardInfoCancel;
- (void)stopLogic;
- (void)FillTransferToBankCardInfoOnNext:(id)arg1;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerSelectReceiver:(id)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerFillBankCardNum:(id)arg1;
- (void)WCPayTransferToBankCardViewControllerCancel;
- (void)WCPayTransferToBankCardViewControllerOnNext:(id)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryReceiver;
- (void)OnWCPaySelectReceiverViewControllerCancel;
- (void)OnWCPaySelectReceiverViewControllerDidSelectReceiver:(id)arg1;
- (void)OnWCPaySelectReceiverViewControllerModifyRemark:(id)arg1 remark:(id)arg2;
- (void)OnWCPaySelectReceiverViewControllerDeleteRecord:(id)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryRecord;
- (BOOL)gotoViewController:(id)arg1;
- (void)OnWCPayT2BCDetailControlLogicFinish;
- (void)stopLogicAndCallFinish;
- (id)m_getTransferToBankHistoryCgi;
- (void)setM_getTransferToBankHistoryCgi:(id)arg1;
- (id)m_appointBankCgi;
- (void)setM_appointBankCgi:(id)arg1;
- (id)m_checkBankBindCgi;
- (void)setM_checkBankBindCgi:(id)arg1;
- (id)m_transToBankCardPayReqCgi;
- (void)setM_transToBankCardPayReqCgi:(id)arg1;
- (id)m_getBankInfoCgi;
- (void)setM_getBankInfoCgi:(id)arg1;
- (id)m_modifyRemarkCgi;
- (void)setM_modifyRemarkCgi:(id)arg1;
- (id)m_deleteRecordCgi;
- (void)setM_deleteRecordCgi:(id)arg1;
- (id)m_businessCallBackCgi;
- (void)setM_businessCallBackCgi:(id)arg1;
- (id)m_payMoneyLogic;
- (void)setM_payMoneyLogic:(id)arg1;
- (id)m_operationCgi;
- (void)setM_operationCgi:(id)arg1;
- (id)m_transferListRes;
- (void)setM_transferListRes:(id)arg1;
- (id)m_appointBankRes;
- (void)setM_appointBankRes:(id)arg1;
- (id)m_checkBankBindRes;
- (void)setM_checkBankBindRes:(id)arg1;
- (id)m_transToBankCardPayRes;
- (void)setM_transToBankCardPayRes:(id)arg1;
- (id)m_getBankInfoRes;
- (void)setM_getBankInfoRes:(id)arg1;
- (id)m_reportTsbcCgi;
- (void)setM_reportTsbcCgi:(id)arg1;
- (id)m_operationResp;
- (void)setM_operationResp:(id)arg1;
- (long long)lastUnpayReason;
- (void)setLastUnpayReason:(long long)arg1;
- (id)bankCardNumber;
- (void)setBankCardNumber:(id)arg1;
- (id)m_fillInfoVC;
- (void)setM_fillInfoVC:(id)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (void).cxx_destruct;
@end

