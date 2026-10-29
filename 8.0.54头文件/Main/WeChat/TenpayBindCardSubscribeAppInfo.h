@interface TenpayBindCardSubscribeAppInfo : NSObject
{
    BOOL m_bIsSubscribe; // +0x8
    NSString * m_nsUserName; // +0x10
    NSString * m_nsNickName; // +0x18
    NSString * m_nsRecommandDesc; // +0x20
}
- (BOOL)m_bIsSubscribe;
- (void)setM_bIsSubscribe:(BOOL)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (id)m_nsRecommandDesc;
- (void)setM_nsRecommandDesc:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (void).cxx_destruct;
@end

