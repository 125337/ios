@interface EcsGiftTicketItem : NSObject
{
    NSString * _sendGiftTicket; // +0x8
    NSString * _sendGiftRecipientUsername; // +0x10
    NSString * _sendGiftChatroomUsername; // +0x18
    NSString * _sendGiftMsgXml; // +0x20
}
- (id)sendGiftTicket;
- (void)setSendGiftTicket:(id)arg1;
- (id)sendGiftRecipientUsername;
- (void)setSendGiftRecipientUsername:(id)arg1;
- (id)sendGiftChatroomUsername;
- (void)setSendGiftChatroomUsername:(id)arg1;
- (id)sendGiftMsgXml;
- (void)setSendGiftMsgXml:(id)arg1;
- (void).cxx_destruct;
@end
