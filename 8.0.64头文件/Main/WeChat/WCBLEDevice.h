@interface WCBLEDevice : NSObject
{
    NSString * _m_bleName; // +0x8
    long long _m_did; // +0x10
    long long _m_bleSimpleProto; // +0x18
    NSString * _m_mac; // +0x20
    long long _m_profileID; // +0x28
}
- (id)m_bleName;
- (void)setM_bleName:(id)arg1;
- (long long)m_did;
- (void)setM_did:(long long)arg1;
- (long long)m_bleSimpleProto;
- (void)setM_bleSimpleProto:(long long)arg1;
- (id)m_mac;
- (void)setM_mac:(id)arg1;
- (long long)m_profileID;
- (void)setM_profileID:(long long)arg1;
- (void).cxx_destruct;
@end
