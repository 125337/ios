@interface MMFinderGroupLiveChatRoomItem : NSObject <PBCoding>
{
    NSString * _chatRoomName; // +0x8
    NSString * _chatRoomUsername; // +0x10
}
+ (void)PBArrayAdd_chatRoomName;
+ (void)PBArrayAdd_chatRoomUsername;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (id)chatRoomUsername;
- (void)setChatRoomUsername:(id)arg1;
- (void).cxx_destruct;
@end
