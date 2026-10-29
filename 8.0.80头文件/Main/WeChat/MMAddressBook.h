@interface MMAddressBook : NSObject
{
    NSString * m_phone; // +0x8
    NSString * m_phoneLabel; // +0x10
    NSString * m_email; // +0x18
    NSString * m_nickname; // +0x20
    NSString * m_nicknamePinYin; // +0x28
    NSString * m_nicknamePinYinShort; // +0x30
    UIImage * m_image; // +0x38
}
- (id)description;
- (long long)compareMMAddressBookAscending:(id)arg1;
- (BOOL)copyFieldFromAddressBook:(id)arg1;
- (id)m_phone;
- (void)setM_phone:(id)arg1;
- (id)m_phoneLabel;
- (void)setM_phoneLabel:(id)arg1;
- (id)m_email;
- (void)setM_email:(id)arg1;
- (id)m_nickname;
- (void)setM_nickname:(id)arg1;
- (id)m_nicknamePinYin;
- (void)setM_nicknamePinYin:(id)arg1;
- (id)m_nicknamePinYinShort;
- (void)setM_nicknamePinYinShort:(id)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (void).cxx_destruct;
@end
