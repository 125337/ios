@interface ClickCommandRequestInfo : NSObject
{
    NSString * m_magic; // +0x8
    NSString * m_id; // +0x10
    NSString * m_key; // +0x18
    long long m_type; // +0x20
    long long m_actionType; // +0x28
    NSString * m_status; // +0x30
    NSString * m_content; // +0x38
}
- (id)init;
- (id)description;
- (id)m_magic;
- (void)setM_magic:(id)arg1;
- (id)m_id;
- (void)setM_id:(id)arg1;
- (id)m_key;
- (void)setM_key:(id)arg1;
- (id)m_status;
- (void)setM_status:(id)arg1;
- (id)m_content;
- (void)setM_content:(id)arg1;
- (long long)m_type;
- (void)setM_type:(long long)arg1;
- (long long)m_actionType;
- (void)setM_actionType:(long long)arg1;
- (void).cxx_destruct;
@end
