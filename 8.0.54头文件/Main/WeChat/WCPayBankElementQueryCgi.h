@interface WCPayBankElementQueryCgi : NSObject <WCPayGetBankResourceCgiDelegate, WCPayLogicMgrExt>
{
    id <WCPayBankElementQueryCgiDelegate> m_delegate; // +0x8
    BOOL _fromRealname; // +0x10
    WCPayGetBankResourceCgi * _m_getBankResourceCgi; // +0x18
    WCPayCardBinInfo * _m_selecteCardBinInfo; // +0x20
    NSArray * _m_availableBankArray; // +0x28
    WCPayGetUserExInfoCgiResponse * _m_userInfoResponse; // +0x30
    NSError * _m_error; // +0x38
}
- (id)initWitDelegate:(id)arg1;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(long long)arg2 sessionId:(id)arg3;
- (void)clearResponse;
- (void)OnGetBankResourceResponseOK:(id)arg1;
- (void)OnGetBankResourceResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (BOOL)fromRealname;
- (void)setFromRealname:(BOOL)arg1;
- (id)m_getBankResourceCgi;
- (void)setM_getBankResourceCgi:(id)arg1;
- (id)m_selecteCardBinInfo;
- (void)setM_selecteCardBinInfo:(id)arg1;
- (id)m_availableBankArray;
- (void)setM_availableBankArray:(id)arg1;
- (id)m_userInfoResponse;
- (void)setM_userInfoResponse:(id)arg1;
- (id)m_error;
- (void)setM_error:(id)arg1;
- (void).cxx_destruct;
@end

