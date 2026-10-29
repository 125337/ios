@interface WCPayCredInfo : NSObject <NSCoding>
{
    NSString * m_nsWCPayCredType; // +0x8
    NSString * m_nsWCPayCredName; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_nsWCPayCredName;
- (void)setM_nsWCPayCredName:(id)arg1;
- (id)m_nsWCPayCredType;
- (void)setM_nsWCPayCredType:(id)arg1;
- (void).cxx_destruct;
@end

