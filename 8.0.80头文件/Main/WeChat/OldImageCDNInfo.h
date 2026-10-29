@interface OldImageCDNInfo : MMObject <NSCopying>
{
    unsigned int _cdnthumblength; // +0x8
    int _cdnthumbwidth; // +0xc
    int _cdnthumbheight; // +0x10
    NSString * _cdnthumburl; // +0x18
    NSString * _cdnthumbmd5; // +0x20
    NSString * _cdnthumbaeskey; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWith:(id)arg1 cdnthumbmd5:(id)arg2 cdnthumblength:(unsigned int)arg3 cdnthumbwidth:(int)arg4 cdnthumbheight:(int)arg5 cdnthumbaeskey:(id)arg6;
- (id)description;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)cdnthumburl;
- (void)setCdnthumburl:(id)arg1;
- (id)cdnthumbmd5;
- (void)setCdnthumbmd5:(id)arg1;
- (unsigned int)cdnthumblength;
- (void)setCdnthumblength:(unsigned int)arg1;
- (int)cdnthumbwidth;
- (void)setCdnthumbwidth:(int)arg1;
- (int)cdnthumbheight;
- (void)setCdnthumbheight:(int)arg1;
- (id)cdnthumbaeskey;
- (void)setCdnthumbaeskey:(id)arg1;
- (void).cxx_destruct;
@end
