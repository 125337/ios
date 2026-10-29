@interface WCPayNoticeContentInfo : NSObject <NSCoding>
{
    NSString * m_nsAppName; // +0x8
    unsigned int m_uiAmount; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)m_nsAppName;
- (void)setM_nsAppName:(id)arg1;
- (unsigned int)m_uiAmount;
- (void)setM_uiAmount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

