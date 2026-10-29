@interface MpShareTraceItem : MMObject <NSCopying>
{
    BOOL _hasFinderElement; // +0x8
    NSString * _lastGMsgID; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)hasFinderElement;
- (void)setHasFinderElement:(BOOL)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (void).cxx_destruct;
@end

