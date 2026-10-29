@interface EncryptSecretInfo : NSObject <PBCoding, NSCoding>
{
    NSString * _m_nsTextStateEncryptSecret; // +0x8
    NSString * _m_nsCommonEncryptSecret; // +0x10
    NSString * _m_nsRecordEncryptSecret; // +0x18
}
+ (void)PBArrayAdd_m_nsTextStateEncryptSecret;
+ (void)PBArrayAdd_m_nsCommonEncryptSecret;
+ (void)PBArrayAdd_m_nsRecordEncryptSecret;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)m_nsTextStateEncryptSecret;
- (void)setM_nsTextStateEncryptSecret:(id)arg1;
- (id)m_nsCommonEncryptSecret;
- (void)setM_nsCommonEncryptSecret:(id)arg1;
- (id)m_nsRecordEncryptSecret;
- (void)setM_nsRecordEncryptSecret:(id)arg1;
- (void).cxx_destruct;
@end

