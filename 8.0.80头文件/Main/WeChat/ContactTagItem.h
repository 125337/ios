@interface ContactTagItem : NSObject <NSCoding>
{
    unsigned int m_uiID; // +0x8
    NSString * m_nsName; // +0x10
    unsigned int _m_uiIndex; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)m_uiID;
- (void)setM_uiID:(unsigned int)arg1;
- (id)m_nsName;
- (void)setM_nsName:(id)arg1;
- (unsigned int)m_uiIndex;
- (void)setM_uiIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
