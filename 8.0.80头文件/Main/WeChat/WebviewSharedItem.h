@interface WebviewSharedItem : MMObject <NSCopying>
{
    NSString * _m_nsJsAppId; // +0x8
    NSString * _m_nsPublisherId; // +0x10
    NSString * _m_nsPublisherReqId; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)m_nsJsAppId;
- (void)setM_nsJsAppId:(id)arg1;
- (id)m_nsPublisherId;
- (void)setM_nsPublisherId:(id)arg1;
- (id)m_nsPublisherReqId;
- (void)setM_nsPublisherReqId:(id)arg1;
- (void).cxx_destruct;
@end
