@interface EmoticonAppMsgItem : MMObject <NSCopying>
{
    unsigned int _emojiType; // +0x8
    unsigned int _length; // +0xc
    NSString * _m_nsMD5; // +0x10
    double _m_emoticonWidth; // +0x18
    double _m_emoticonHeight; // +0x20
    NSString * _m_nsAesKey; // +0x28
    NSString * _m_nsCdnUrl; // +0x30
    NSString * _m_nsExternUrl; // +0x38
    NSString * _m_nsExternMd5; // +0x40
    NSString * _m_nsProductId; // +0x48
    NSString * _m_nsDesignerId; // +0x50
    NSString * _m_nsAttachedText; // +0x58
    NSString * _m_nsEncryptedUrl; // +0x60
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)m_nsMD5;
- (void)setM_nsMD5:(id)arg1;
- (double)m_emoticonWidth;
- (void)setM_emoticonWidth:(double)arg1;
- (double)m_emoticonHeight;
- (void)setM_emoticonHeight:(double)arg1;
- (unsigned int)emojiType;
- (void)setEmojiType:(unsigned int)arg1;
- (unsigned int)length;
- (void)setLength:(unsigned int)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_nsCdnUrl;
- (void)setM_nsCdnUrl:(id)arg1;
- (id)m_nsExternUrl;
- (void)setM_nsExternUrl:(id)arg1;
- (id)m_nsExternMd5;
- (void)setM_nsExternMd5:(id)arg1;
- (id)m_nsProductId;
- (void)setM_nsProductId:(id)arg1;
- (id)m_nsDesignerId;
- (void)setM_nsDesignerId:(id)arg1;
- (id)m_nsAttachedText;
- (void)setM_nsAttachedText:(id)arg1;
- (id)m_nsEncryptedUrl;
- (void)setM_nsEncryptedUrl:(id)arg1;
- (void).cxx_destruct;
@end

