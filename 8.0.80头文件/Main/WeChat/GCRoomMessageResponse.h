@interface GCRoomMessageResponse : NSObject
{
    BOOL _isFromCache; // +0x8
    NSArray * _messageArray; // +0x10
    ReceiveChatroomMsgResponse * _roomResponse; // +0x18
}
- (id)messageArray;
- (void)setMessageArray:(id)arg1;
- (id)roomResponse;
- (void)setRoomResponse:(id)arg1;
- (BOOL)isFromCache;
- (void)setIsFromCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
