@interface WCAdPushMessageInfo : NSObject <WCAdParserProtocol>
{
    NSArray * _messageList; // +0x8
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)messageList;
- (void)setMessageList:(id)arg1;
- (void).cxx_destruct;
@end
