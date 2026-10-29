@interface EmotionPageSharedItem : MMObject
{
    NSDictionary * _params; // +0x8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)fromXMLStr:(id)arg1;
- (id)toXML;
- (id)dictionaryToXml:(id)arg1;
- (id)xmlToDictionary:(XmlReaderNode_t *)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

