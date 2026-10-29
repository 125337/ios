@interface WCPayOfflinePayQueryUserResponseStruct : NSObject <NSCoding>
{
    long long m_uiLimitFee; // +0x8
    BOOL m_bNeedLoadingAndSuccessInfo; // +0x10
    BOOL _offlinePayPauseFlag; // +0x11
    BOOL _offlinePayForceGetToken; // +0x12
    long long _payAmount; // +0x18
    long long _payNumber; // +0x20
    NSArray * _cardIcons; // +0x28
    NSString * _offlinePayPauseWord; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)m_uiLimitFee;
- (void)setM_uiLimitFee:(long long)arg1;
- (BOOL)m_bNeedLoadingAndSuccessInfo;
- (void)setM_bNeedLoadingAndSuccessInfo:(BOOL)arg1;
- (long long)payAmount;
- (void)setPayAmount:(long long)arg1;
- (long long)payNumber;
- (void)setPayNumber:(long long)arg1;
- (id)cardIcons;
- (void)setCardIcons:(id)arg1;
- (BOOL)offlinePayPauseFlag;
- (void)setOfflinePayPauseFlag:(BOOL)arg1;
- (id)offlinePayPauseWord;
- (void)setOfflinePayPauseWord:(id)arg1;
- (BOOL)offlinePayForceGetToken;
- (void)setOfflinePayForceGetToken:(BOOL)arg1;
- (void).cxx_destruct;
@end
