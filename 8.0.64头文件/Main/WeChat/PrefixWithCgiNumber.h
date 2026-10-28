@interface PrefixWithCgiNumber : NSObject
{
    unsigned int _m_cgiNumber; // +0x8
    NSString * _m_prefix; // +0x10
    NSString * _m_cgiName; // +0x18
}
+ (id)Prefix:(id)arg1 Cgi:(unsigned int)arg2 Name:(id)arg3;
- (id)m_prefix;
- (void)setM_prefix:(id)arg1;
- (unsigned int)m_cgiNumber;
- (void)setM_cgiNumber:(unsigned int)arg1;
- (id)m_cgiName;
- (void)setM_cgiName:(id)arg1;
- (void).cxx_destruct;
@end
