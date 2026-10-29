@interface KindaContact : NSObject <MMKContact>
{
    NSString * _m_username; // +0x8
    NSString * _m_displayName; // +0x10
}
- (id)initWithUsername:(id)arg1 displayName:(id)arg2;
- (id)userName;
- (id)displayName;
- (id)m_username;
- (void)setM_username:(id)arg1;
- (id)m_displayName;
- (void)setM_displayName:(id)arg1;
- (void).cxx_destruct;
@end

