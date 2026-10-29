@interface ProtobufCGIWrap : NSObject <NSCopying>
{
    WXPBGeneratedMessage * m_pbRequest; // +0x8
    Class m_pbRespClass; // +0x10
    WXPBGeneratedMessage * m_pbResponse; // +0x18
    unsigned int m_uiChannelType; // +0x20
    unsigned int m_uiCgi; // +0x24
    NSString * m_nsCgiName; // +0x28
    NSString * m_nsUri; // +0x30
    NSData * m_dtResponseDecryptKey; // +0x38
    unsigned int m_uiMessage; // +0x40
    Class m_preEventHandlerClass; // +0x48
    Class m_postEventHandlerClass; // +0x50
    unsigned int m_uiRetryCount; // +0x58
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)m_pbRequest;
- (void)setM_pbRequest:(id)arg1;
- (Class)m_pbRespClass;
- (void)setM_pbRespClass:(Class)arg1;
- (id)m_pbResponse;
- (void)setM_pbResponse:(id)arg1;
- (unsigned int)m_uiCgi;
- (void)setM_uiCgi:(unsigned int)arg1;
- (id)m_nsCgiName;
- (void)setM_nsCgiName:(id)arg1;
- (id)m_nsUri;
- (void)setM_nsUri:(id)arg1;
- (unsigned int)m_uiChannelType;
- (void)setM_uiChannelType:(unsigned int)arg1;
- (id)m_dtResponseDecryptKey;
- (void)setM_dtResponseDecryptKey:(id)arg1;
- (unsigned int)m_uiMessage;
- (void)setM_uiMessage:(unsigned int)arg1;
- (Class)m_preEventHandlerClass;
- (void)setM_preEventHandlerClass:(Class)arg1;
- (Class)m_postEventHandlerClass;
- (void)setM_postEventHandlerClass:(Class)arg1;
- (unsigned int)m_uiRetryCount;
- (void)setM_uiRetryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

