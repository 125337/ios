@interface EmoticonServerTip : MMObject <PBCoding>
{
    BOOL _m_isNeedBadge; // +0x8
    unsigned int _m_newCount; // +0xc
    unsigned int _m_freeCount; // +0x10
    unsigned int _m_lastUpdateTime; // +0x14
    unsigned int _m_personalNewCount; // +0x18
    unsigned int _m_addButtonNewCount; // +0x1c
    NSString * _m_iconUrl; // +0x20
}
+ (void)PBArrayAdd_m_newCount;
+ (void)PBArrayAdd_m_freeCount;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_m_isNeedBadge;
+ (void)PBArrayAdd_m_personalNewCount;
+ (void)PBArrayAdd_m_addButtonNewCount;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
+ (id)loadFromCache;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveToCache;
- (unsigned int)m_newCount;
- (void)setM_newCount:(unsigned int)arg1;
- (unsigned int)m_freeCount;
- (void)setM_freeCount:(unsigned int)arg1;
- (id)m_iconUrl;
- (void)setM_iconUrl:(id)arg1;
- (unsigned int)m_lastUpdateTime;
- (void)setM_lastUpdateTime:(unsigned int)arg1;
- (unsigned int)m_personalNewCount;
- (void)setM_personalNewCount:(unsigned int)arg1;
- (unsigned int)m_addButtonNewCount;
- (void)setM_addButtonNewCount:(unsigned int)arg1;
- (BOOL)m_isNeedBadge;
- (void)setM_isNeedBadge:(BOOL)arg1;
- (void).cxx_destruct;
@end
