@interface WxGameCardItem : MMObject <NSCopying>
{
    unsigned int _msgtype; // +0x8
    NSString * _frameSetName; // +0x10
    NSString * _mbCardData; // +0x18
    NSString * _minPkgVersion; // +0x20
    NSString * _clientExtInfo; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)canShowNotice;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (void)parseClientExtInfo;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)mbCardData;
- (void)setMbCardData:(id)arg1;
- (id)minPkgVersion;
- (void)setMinPkgVersion:(id)arg1;
- (id)clientExtInfo;
- (void)setClientExtInfo:(id)arg1;
- (unsigned int)msgtype;
- (void)setMsgtype:(unsigned int)arg1;
- (void).cxx_destruct;
@end

