@interface MMAutoAuthWrap : NSObject <PBCoding>
{
    unsigned int _m_uiVersion; // +0x8
    NSData * _m_dtAutoAuthKey; // +0x10
    NSData * _m_dtServerId; // +0x18
}
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_dtServerId;
+ (void)PBArrayAdd_m_uiVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)m_dtAutoAuthKey;
- (void)setM_dtAutoAuthKey:(id)arg1;
- (id)m_dtServerId;
- (void)setM_dtServerId:(id)arg1;
- (unsigned int)m_uiVersion;
- (void)setM_uiVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
