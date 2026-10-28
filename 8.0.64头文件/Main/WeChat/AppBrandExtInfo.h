@interface AppBrandExtInfo : MMObject
{
    int _priority; // +0x8
    NSString * _liteGameInfo; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)liteGameInfo;
- (void)setLiteGameInfo:(id)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (void).cxx_destruct;
@end
