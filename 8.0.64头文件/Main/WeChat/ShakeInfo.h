@interface ShakeInfo : NSObject <NSCoding>
{
    unsigned int m_uiShakeTimes; // +0x8
    unsigned int m_uiBackGroundImgID; // +0xc
}
- (void)preInit;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)m_uiShakeTimes;
- (void)setM_uiShakeTimes:(unsigned int)arg1;
- (unsigned int)m_uiBackGroundImgID;
- (void)setM_uiBackGroundImgID:(unsigned int)arg1;
@end
