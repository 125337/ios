@interface MMGroupLiveUserStateItem : MMLiveUserStateItem
{
    NSString * _identityId; // +0x8
    NSString * _roomId; // +0x10
    CContact * _contact; // +0x18
}
- (id)initWithRoomId:(id)arg1 identityId:(id)arg2;
- (id)userName;
- (id)displayName;
- (id)headImageUrl;
- (id)identityId;
- (void)setIdentityId:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

