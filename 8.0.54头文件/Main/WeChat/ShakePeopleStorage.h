@interface ShakePeopleStorage : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int _m_uiSoundStatus; // +0x8
    unsigned int _m_uiNewArriveCount; // +0xc
    NSMutableArray * _m_arrShakeList; // +0x10
}
+ (void)PBArrayAdd_m_arrShakeList;
+ (void)PBArrayAdd_m_uiSoundStatus;
+ (void)PBArrayAdd_m_uiNewArriveCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)preInit;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_arrShakeList;
- (void)setM_arrShakeList:(id)arg1;
- (unsigned int)m_uiSoundStatus;
- (void)setM_uiSoundStatus:(unsigned int)arg1;
- (unsigned int)m_uiNewArriveCount;
- (void)setM_uiNewArriveCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

