@interface GameLifeItem : MMObject <NSCopying>
{
    NSMutableDictionary * _digestWording; // +0x8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)digestWording;
- (void)setDigestWording:(id)arg1;
- (void).cxx_destruct;
@end

