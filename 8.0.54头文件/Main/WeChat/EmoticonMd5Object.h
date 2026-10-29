@interface EmoticonMd5Object : MMObject <PBCoding>
{
    BOOL _needRecoverHighPriority; // +0x8
    unsigned int _m_status; // +0xc
    unsigned int _emojiInfoValidVersion; // +0x10
    NSString * _m_md5; // +0x18
    EmojiInfoObj * _emojiInfoObj; // +0x20
}
+ (void)PBArrayAdd_m_md5;
+ (void)PBArrayAdd_m_status;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_emojiInfoValidVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)emojiInfoObj;
- (BOOL)isEmojiInfoValid;
- (void)setIsEmojiInfoValid:(BOOL)arg1;
- (id)description;
- (BOOL)needRecoverHighPriority;
- (void)setNeedRecoverHighPriority:(BOOL)arg1;
- (id)m_md5;
- (void)setM_md5:(id)arg1;
- (unsigned int)m_status;
- (void)setM_status:(unsigned int)arg1;
- (void)setEmojiInfoObj:(id)arg1;
- (unsigned int)emojiInfoValidVersion;
- (void)setEmojiInfoValidVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

