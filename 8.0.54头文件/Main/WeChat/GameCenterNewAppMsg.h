@interface GameCenterNewAppMsg : GameCenterOldBaseMsg
{
    NSString * _pictureUrl; // +0x8
}
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)getMsgCenterContent;
- (id)pictureUrl;
- (void)setPictureUrl:(id)arg1;
- (void).cxx_destruct;
@end

