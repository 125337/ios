@interface WCMallTelUserInfo : NSObject <NSCoding>
{
    NSString * m_nsUserName; // +0x8
    NSString * m_nsTelephoneNumber; // +0x10
    NSString * m_nsOperatorName; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_nsTelephoneNumber;
- (void)setM_nsTelephoneNumber:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_nsOperatorName;
- (void)setM_nsOperatorName:(id)arg1;
- (void).cxx_destruct;
@end

