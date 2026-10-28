@interface ChatRoomSingleAtRecord : MMObject <PBCoding>
{
    NSString * _username; // +0x8
}
+ (void)PBArrayAdd_username;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithUserName:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
