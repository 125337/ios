@interface WCPayCheckPayPwdByTokenResponse : NSObject
{
    NSString * m_nsCheckPwdToken; // +0x8
    BOOL m_bIsFreeSMS; // +0x10
    NSString * m_nsMobileNo; // +0x18
    NSString * m_nsRelationKey; // +0x20
}
- (id)m_nsCheckPwdToken;
- (void)setM_nsCheckPwdToken:(id)arg1;
- (BOOL)m_bIsFreeSMS;
- (void)setM_bIsFreeSMS:(BOOL)arg1;
- (id)m_nsMobileNo;
- (void)setM_nsMobileNo:(id)arg1;
- (id)m_nsRelationKey;
- (void)setM_nsRelationKey:(id)arg1;
- (void).cxx_destruct;
@end

