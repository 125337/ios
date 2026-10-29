@interface WAAppPackageInfo : MMObject
{
    unsigned int _type; // +0x8
    NSString * _md5; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)fromXMLStr:(id)arg1;
- (id)toXML;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end
