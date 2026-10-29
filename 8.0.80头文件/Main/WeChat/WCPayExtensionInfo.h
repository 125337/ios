@interface WCPayExtensionInfo : MMObject <NSCopying>
{
    BOOL _m_isNeedFailover; // +0x8
    unsigned int _m_uiFee; // +0xc
    unsigned int _m_expireTime; // +0x10
    int _m_businessType; // +0x14
    NSString * _m_nsPayExtTemplateId; // +0x18
    NSString * _m_nsOutTradeNo; // +0x20
    NSString * _m_nsFeeType; // +0x28
    NSString * _m_voiceContent; // +0x30
    WCPayShareInfo * _shareInfo; // +0x38
}
+ (id)getTextFrom:(XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)m_nsPayExtTemplateId;
- (void)setM_nsPayExtTemplateId:(id)arg1;
- (id)m_nsOutTradeNo;
- (void)setM_nsOutTradeNo:(id)arg1;
- (unsigned int)m_uiFee;
- (void)setM_uiFee:(unsigned int)arg1;
- (id)m_nsFeeType;
- (void)setM_nsFeeType:(id)arg1;
- (id)m_voiceContent;
- (void)setM_voiceContent:(id)arg1;
- (unsigned int)m_expireTime;
- (void)setM_expireTime:(unsigned int)arg1;
- (BOOL)m_isNeedFailover;
- (void)setM_isNeedFailover:(BOOL)arg1;
- (int)m_businessType;
- (void)setM_businessType:(int)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (void).cxx_destruct;
@end
