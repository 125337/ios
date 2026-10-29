@interface WCPayMallPayStruct : NSObject
{
    NSString * m_nsPayFuncId; // +0x8
    NSString * m_nsPayProductId; // +0x10
    NSString * m_nsPayAppId; // +0x18
    NSMutableDictionary * m_dicRemarks; // +0x20
    NSString * m_nsTecket; // +0x28
}
- (id)m_nsPayAppId;
- (void)setM_nsPayAppId:(id)arg1;
- (id)m_nsPayFuncId;
- (void)setM_nsPayFuncId:(id)arg1;
- (id)m_nsPayProductId;
- (void)setM_nsPayProductId:(id)arg1;
- (id)m_dicRemarks;
- (void)setM_dicRemarks:(id)arg1;
- (id)m_nsTecket;
- (void)setM_nsTecket:(id)arg1;
- (void).cxx_destruct;
@end
