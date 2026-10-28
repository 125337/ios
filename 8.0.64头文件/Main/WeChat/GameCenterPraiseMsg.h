@interface GameCenterPraiseMsg : GameCenterOldBaseMsg
{
    NSString * _praiseContent; // +0x8
    NSString * _rankDesc; // +0x10
    NSString * _rankIconUrl; // +0x18
    NSString * _rankJumpUrl; // +0x20
}
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)getMsgCenterContent;
- (id)praiseContent;
- (void)setPraiseContent:(id)arg1;
- (id)rankDesc;
- (void)setRankDesc:(id)arg1;
- (id)rankIconUrl;
- (void)setRankIconUrl:(id)arg1;
- (id)rankJumpUrl;
- (void)setRankJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
