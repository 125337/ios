@interface CCardContact : CContact
{
    NSString * _m_nsCardDesc; // +0x338
    NSString * _m_nsCardDescIcon; // +0x340
}
+ (id)contactFromShareCardMsgContent:(id)arg1;
+ (id)contactFromShareCardMsgContentForFTS:(id)arg1;
- (void)genContactFromShareCardMsgWrapContent:(id)arg1;
- (id)m_nsCardDesc;
- (void)setM_nsCardDesc:(id)arg1;
- (id)m_nsCardDescIcon;
- (void)setM_nsCardDescIcon:(id)arg1;
- (void).cxx_destruct;
@end

