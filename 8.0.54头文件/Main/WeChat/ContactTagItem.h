@interface ContactTagItem : NSObject <NSCoding>
{
    unsigned int m_uiID; // +0x8
    NSString * m_nsName; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;
- (unsigned int)m_uiID;
- (void)setM_uiID:(unsigned int)arg1;
- (id)m_nsName;
- (void)setM_nsName:(id)arg1;
- (void).cxx_destruct;
@end

