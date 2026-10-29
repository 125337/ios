@interface WAScreenVideoInfo : MMObject
{
    NSString * _videobuttontext; // +0x8
    NSString * _videomd5; // +0x10
    NSString * _videoremoteurl; // +0x18
    NSString * _videothumburl; // +0x20
    NSString * _videoplaydesc; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)videobuttontext;
- (void)setVideobuttontext:(id)arg1;
- (id)videomd5;
- (void)setVideomd5:(id)arg1;
- (id)videoremoteurl;
- (void)setVideoremoteurl:(id)arg1;
- (id)videothumburl;
- (void)setVideothumburl:(id)arg1;
- (id)videoplaydesc;
- (void)setVideoplaydesc:(id)arg1;
- (void).cxx_destruct;
@end
