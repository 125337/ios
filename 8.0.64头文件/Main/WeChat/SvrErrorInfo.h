@interface SvrErrorInfo : MMObject <PBCoding>
{
    unsigned int _m_uiTime; // +0x8
    unsigned int _m_uiStatus; // +0xc
    unsigned int _m_uiExpiredTime; // +0x10
    NSString * _m_nsContent; // +0x18
    NSString * _m_nsNoticeID; // +0x20
    NSString * _m_nsUrl; // +0x28
    NSString * _m_nsTipsContent; // +0x30
    NSString * _m_position; // +0x38
}
+ (void)PBArrayAdd_m_nsContent;
+ (void)PBArrayAdd_m_nsNoticeID;
+ (void)PBArrayAdd_m_nsUrl;
+ (void)PBArrayAdd_m_uiTime;
+ (void)PBArrayAdd_m_uiStatus;
+ (void)PBArrayAdd_m_nsTipsContent;
+ (void)PBArrayAdd_m_uiExpiredTime;
+ (void)PBArrayAdd_m_position;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)ParseFromXml:(id)arg1;
- (id)m_nsContent;
- (void)setM_nsContent:(id)arg1;
- (id)m_nsNoticeID;
- (void)setM_nsNoticeID:(id)arg1;
- (id)m_nsUrl;
- (void)setM_nsUrl:(id)arg1;
- (unsigned int)m_uiTime;
- (void)setM_uiTime:(unsigned int)arg1;
- (unsigned int)m_uiStatus;
- (void)setM_uiStatus:(unsigned int)arg1;
- (id)m_nsTipsContent;
- (void)setM_nsTipsContent:(id)arg1;
- (unsigned int)m_uiExpiredTime;
- (void)setM_uiExpiredTime:(unsigned int)arg1;
- (id)m_position;
- (void)setM_position:(id)arg1;
- (void).cxx_destruct;
@end
