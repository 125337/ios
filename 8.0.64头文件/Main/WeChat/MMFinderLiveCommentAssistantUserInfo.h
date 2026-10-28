@interface MMFinderLiveCommentAssistantUserInfo : NSObject
{
    BOOL _fromWechatContact; // +0x8
    NSString * _username; // +0x10
    FinderLiveContact * _contact; // +0x18
}
+ (id)fromFinderLiveRoomManager:(id)arg1;
- (id)toFinderLiveRoomManager;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)fromWechatContact;
- (void)setFromWechatContact:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
