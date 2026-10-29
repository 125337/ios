@interface WXSecretMsgItem : MMObject <NSCopying>
{
    BOOL _isScrectMsg; // +0x8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)isScrectMsg;
- (void)setIsScrectMsg:(BOOL)arg1;
@end

