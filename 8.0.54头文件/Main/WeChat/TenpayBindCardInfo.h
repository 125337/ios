@interface TenpayBindCardInfo : NSObject
{
    BOOL m_bSameCardExist; // +0x8
    NSString * m_nsBankType; // +0x10
    NSString * m_nsBankName; // +0x18
    NSString * m_nsTelphone; // +0x20
    NSString * m_nsCardType; // +0x28
    NSString * m_nsBindCardNumber; // +0x30
    NSString * m_nsBindSerial; // +0x38
    NSString * m_nsToken; // +0x40
}
- (BOOL)m_bSameCardExist;
- (void)setM_bSameCardExist:(BOOL)arg1;
- (id)m_nsBankName;
- (void)setM_nsBankName:(id)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsBindCardNumber;
- (void)setM_nsBindCardNumber:(id)arg1;
- (id)m_nsBindSerial;
- (void)setM_nsBindSerial:(id)arg1;
- (id)m_nsCardType;
- (void)setM_nsCardType:(id)arg1;
- (id)m_nsTelphone;
- (void)setM_nsTelphone:(id)arg1;
- (id)m_nsToken;
- (void)setM_nsToken:(id)arg1;
- (void).cxx_destruct;
@end

