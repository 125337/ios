@interface EcsJumpNativeInfo : MMObject <NSCopying>
{
    NSString * _nativeUri; // +0x8
    NSString * _params; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)nativeUri;
- (void)setNativeUri:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
