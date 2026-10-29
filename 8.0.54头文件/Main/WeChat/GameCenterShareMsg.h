@interface GameCenterShareMsg : GameCenterOldBaseMsg
{
    GameCenterMsgShareInfo * _shareInfo; // +0x8
}
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)getMsgCenterContent;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (void).cxx_destruct;
@end

