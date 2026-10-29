@interface WCPayHoneyPayControlData : NSObject
{
    BOOL _popWebView; // +0x8
    HoneyPayListResp * _honeyPayListResp; // +0x10
    CContact * _userContact; // +0x18
    CheckHoneyPayerResp * _checkPayerResp; // +0x20
    CheckHoneyPayerResp_HPCardTypeInfo * _selectedCardTypeInfo; // +0x28
    CheckHoneyUserResp * _checkUserResp; // +0x30
    GetCreateTokenSignResp * _getCreateTokenSignResp; // +0x38
    CreateHoneyPayCardResp * _createdReponse; // +0x40
    GetMCreditLineTokenSignResp * _getMCreditLineTokenSignResp; // +0x48
    unsigned long long _maximumAmount; // +0x50
    NSString * _wishing; // +0x58
    HoneyPayListResp_HoneyPayRecord * _selectedHoneyPayRecord; // +0x60
    QryHoneyPayerDetailResp * _payerDetailResp; // +0x68
    QryHoneyUserDetailResp * _receiverDetailResp; // +0x70
    GetHoneyPayCardResp * _getHoneyPayResp; // +0x78
    QryHoneyPayCardDetailResp * _cardDetailResp; // +0x80
    NSString * _cellCardNo; // +0x88
    WCPayBindCardInfo * _honeyPayCardInfo; // +0x90
}
- (BOOL)popWebView;
- (void)setPopWebView:(BOOL)arg1;
- (id)honeyPayListResp;
- (void)setHoneyPayListResp:(id)arg1;
- (id)userContact;
- (void)setUserContact:(id)arg1;
- (id)checkPayerResp;
- (void)setCheckPayerResp:(id)arg1;
- (id)selectedCardTypeInfo;
- (void)setSelectedCardTypeInfo:(id)arg1;
- (id)checkUserResp;
- (void)setCheckUserResp:(id)arg1;
- (id)getCreateTokenSignResp;
- (void)setGetCreateTokenSignResp:(id)arg1;
- (id)createdReponse;
- (void)setCreatedReponse:(id)arg1;
- (id)getMCreditLineTokenSignResp;
- (void)setGetMCreditLineTokenSignResp:(id)arg1;
- (unsigned long long)maximumAmount;
- (void)setMaximumAmount:(unsigned long long)arg1;
- (id)wishing;
- (void)setWishing:(id)arg1;
- (id)selectedHoneyPayRecord;
- (void)setSelectedHoneyPayRecord:(id)arg1;
- (id)payerDetailResp;
- (void)setPayerDetailResp:(id)arg1;
- (id)receiverDetailResp;
- (void)setReceiverDetailResp:(id)arg1;
- (id)getHoneyPayResp;
- (void)setGetHoneyPayResp:(id)arg1;
- (id)cardDetailResp;
- (void)setCardDetailResp:(id)arg1;
- (id)cellCardNo;
- (void)setCellCardNo:(id)arg1;
- (id)honeyPayCardInfo;
- (void)setHoneyPayCardInfo:(id)arg1;
- (void).cxx_destruct;
@end
