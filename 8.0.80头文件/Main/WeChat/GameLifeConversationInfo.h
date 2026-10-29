@interface GameLifeConversationInfo : NSObject
{
    unsigned int _msgType; // +0x8
    GameLifeConversation * _conversation; // +0x10
    NSString * _externInfo; // +0x18
}
- (id)conversation;
- (void)setConversation:(id)arg1;
- (id)externInfo;
- (void)setExternInfo:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
