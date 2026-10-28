@interface NewArrivalCountItem : NSObject <NSCoding>
{
    NSString * m_nsUsrName; // +0x8
    unsigned int m_uiMsgID; // +0x10
    unsigned int m_uiArrivalCount; // +0x14
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (unsigned int)m_uiArrivalCount;
- (void)setM_uiArrivalCount:(unsigned int)arg1;
- (unsigned int)m_uiMsgID;
- (void)setM_uiMsgID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
