@interface WCPayTransferPrepayResponseStruct : NSObject
{
    NSString * m_nsReqKey; // +0x8
    unsigned int m_uiHasUnarriveMoney; // +0x10
    long long m_lExtMoney; // +0x18
    NSString * m_nsInterruptDesc; // +0x20
    NSString * m_nsMsgContent; // +0x28
    unsigned int m_uiChargeFee; // +0x30
    unsigned int m_uiAccFee; // +0x34
    unsigned int m_uiFeeLimit; // +0x38
    unsigned int m_uiRemainFee; // +0x3c
    unsigned int m_uiExceedFee; // +0x40
    NSString * m_nsChargeRate; // +0x48
    NSString * m_nsTransferInterruptChargeDesc; // +0x50
    unsigned int m_uiUsedFee; // +0x58
    BOOL m_isShowCharge; // +0x5c
    NSString * m_nsReceiverTrueName; // +0x60
    BOOL _isNeedCheckName; // +0x68
    unsigned int _amount; // +0x6c
    unsigned int _fee; // +0x70
    unsigned int _scanScene; // +0x74
    unsigned int _get_dynamic_code_flag; // +0x78
    unsigned int _return_to_session; // +0x7c
    WCPayAlertItem * _alertItem; // +0x80
    NSString * _f2fId; // +0x88
    NSString * _transId; // +0x90
    NSString * _extendStr; // +0x98
    NSString * _receiverOpenId; // +0xa0
    NSString * _doubleCheckWording; // +0xa8
    NSString * _transferId; // +0xb0
    NSString * _transactionId; // +0xb8
    NSString * _transferReceiverOpenId; // +0xc0
    NSString * _placeorderSucSign; // +0xc8
    NSString * _paySucExtend; // +0xd0
    NSString * _get_dynamic_code_sign; // +0xd8
    NSString * _get_dynamic_code_extend; // +0xe0
    NSString * _show_paying_wording; // +0xe8
    NSString * _dynamic_code_spam_wording; // +0xf0
    NSString * _checkNameMessageTitle; // +0xf8
    NSString * _checkNameMessageWording; // +0x100
    NSString * _checkNameMessageDisplayName; // +0x108
    NSString * _checkNameMessageCheckNameSign; // +0x110
    unsigned long long _checkNameMessageErrortype; // +0x118
    NSString * _zaituMsgWording; // +0x120
    NSString * _zaituMsgBtnTitle; // +0x128
    NSString * _zaituMsgOpenUrl; // +0x130
    MsgCheckInfo * _msgCheckInfo; // +0x138
    WCPayTransferAmountReInputPageStruct * _amountReinputPage; // +0x140
    NSString * _placeorderAttach; // +0x148
    WCPayPlaceOrderPopupTip * _placeOrderPopupTip; // +0x150
}
- (unsigned int)m_uiHasUnarriveMoney;
- (void)setM_uiHasUnarriveMoney:(unsigned int)arg1;
- (id)m_nsReqKey;
- (void)setM_nsReqKey:(id)arg1;
- (long long)m_lExtMoney;
- (void)setM_lExtMoney:(long long)arg1;
- (id)m_nsInterruptDesc;
- (void)setM_nsInterruptDesc:(id)arg1;
- (id)m_nsMsgContent;
- (void)setM_nsMsgContent:(id)arg1;
- (unsigned int)m_uiChargeFee;
- (void)setM_uiChargeFee:(unsigned int)arg1;
- (unsigned int)m_uiAccFee;
- (void)setM_uiAccFee:(unsigned int)arg1;
- (unsigned int)m_uiFeeLimit;
- (void)setM_uiFeeLimit:(unsigned int)arg1;
- (unsigned int)m_uiRemainFee;
- (void)setM_uiRemainFee:(unsigned int)arg1;
- (unsigned int)m_uiExceedFee;
- (void)setM_uiExceedFee:(unsigned int)arg1;
- (id)m_nsChargeRate;
- (void)setM_nsChargeRate:(id)arg1;
- (id)m_nsTransferInterruptChargeDesc;
- (void)setM_nsTransferInterruptChargeDesc:(id)arg1;
- (unsigned int)m_uiUsedFee;
- (void)setM_uiUsedFee:(unsigned int)arg1;
- (BOOL)m_isShowCharge;
- (void)setM_isShowCharge:(BOOL)arg1;
- (id)m_nsReceiverTrueName;
- (void)setM_nsReceiverTrueName:(id)arg1;
- (id)alertItem;
- (void)setAlertItem:(id)arg1;
- (id)f2fId;
- (void)setF2fId:(id)arg1;
- (id)transId;
- (void)setTransId:(id)arg1;
- (id)extendStr;
- (void)setExtendStr:(id)arg1;
- (id)receiverOpenId;
- (void)setReceiverOpenId:(id)arg1;
- (unsigned int)amount;
- (void)setAmount:(unsigned int)arg1;
- (id)doubleCheckWording;
- (void)setDoubleCheckWording:(id)arg1;
- (unsigned int)fee;
- (void)setFee:(unsigned int)arg1;
- (id)transferId;
- (void)setTransferId:(id)arg1;
- (id)transactionId;
- (void)setTransactionId:(id)arg1;
- (id)transferReceiverOpenId;
- (void)setTransferReceiverOpenId:(id)arg1;
- (unsigned int)scanScene;
- (void)setScanScene:(unsigned int)arg1;
- (id)placeorderSucSign;
- (void)setPlaceorderSucSign:(id)arg1;
- (id)paySucExtend;
- (void)setPaySucExtend:(id)arg1;
- (unsigned int)get_dynamic_code_flag;
- (void)setGet_dynamic_code_flag:(unsigned int)arg1;
- (id)get_dynamic_code_sign;
- (void)setGet_dynamic_code_sign:(id)arg1;
- (id)get_dynamic_code_extend;
- (void)setGet_dynamic_code_extend:(id)arg1;
- (id)show_paying_wording;
- (void)setShow_paying_wording:(id)arg1;
- (id)dynamic_code_spam_wording;
- (void)setDynamic_code_spam_wording:(id)arg1;
- (BOOL)isNeedCheckName;
- (void)setIsNeedCheckName:(BOOL)arg1;
- (id)checkNameMessageTitle;
- (void)setCheckNameMessageTitle:(id)arg1;
- (id)checkNameMessageWording;
- (void)setCheckNameMessageWording:(id)arg1;
- (id)checkNameMessageDisplayName;
- (void)setCheckNameMessageDisplayName:(id)arg1;
- (id)checkNameMessageCheckNameSign;
- (void)setCheckNameMessageCheckNameSign:(id)arg1;
- (unsigned long long)checkNameMessageErrortype;
- (void)setCheckNameMessageErrortype:(unsigned long long)arg1;
- (unsigned int)return_to_session;
- (void)setReturn_to_session:(unsigned int)arg1;
- (id)zaituMsgWording;
- (void)setZaituMsgWording:(id)arg1;
- (id)zaituMsgBtnTitle;
- (void)setZaituMsgBtnTitle:(id)arg1;
- (id)zaituMsgOpenUrl;
- (void)setZaituMsgOpenUrl:(id)arg1;
- (id)msgCheckInfo;
- (void)setMsgCheckInfo:(id)arg1;
- (id)amountReinputPage;
- (void)setAmountReinputPage:(id)arg1;
- (id)placeorderAttach;
- (void)setPlaceorderAttach:(id)arg1;
- (id)placeOrderPopupTip;
- (void)setPlaceOrderPopupTip:(id)arg1;
- (void).cxx_destruct;
@end
