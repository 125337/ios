@interface WCPayOfflinePayChangeLimitFeeResponseStruct : NSObject
{
    long long m_uiLimitFee; // +0x8
    BOOL m_bIsNeedVerifySMS; // +0x10
}
- (long long)m_uiLimitFee;
- (void)setM_uiLimitFee:(long long)arg1;
- (BOOL)m_bIsNeedVerifySMS;
- (void)setM_bIsNeedVerifySMS:(BOOL)arg1;
@end

