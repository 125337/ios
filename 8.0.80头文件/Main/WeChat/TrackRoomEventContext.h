@interface TrackRoomEventContext : NSObject
{
    NSString * _chatUsername; // +0x8
    NSString * _locationRoomID; // +0x10
    NSString * _uniqueLocationRoomID; // +0x18
}
+ (id)contextWithChatUsername:(id)arg1 locationRoomID:(id)arg2 uniqueLocationRoomID:(id)arg3;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (id)locationRoomID;
- (void)setLocationRoomID:(id)arg1;
- (id)uniqueLocationRoomID;
- (void)setUniqueLocationRoomID:(id)arg1;
- (void).cxx_destruct;
@end
