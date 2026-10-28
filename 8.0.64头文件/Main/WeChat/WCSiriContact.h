@interface WCSiriContact : NSObject <PBCoding>
{
    NSString * _username; // +0x8
    NSString * _displayName; // +0x10
    NSString * _avatarUrl; // +0x18
    NSString * _avatarHDUrl; // +0x20
    NSArray * _memberAvatarUrls; // +0x28
    NSString * _termName; // +0x30
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_avatarHDUrl;
+ (void)PBArrayAdd_memberAvatarUrls;
+ (void)PBArrayAdd_termName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithContact:(id)arg1;
- (BOOL)isChatRoom;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)avatarHDUrl;
- (void)setAvatarHDUrl:(id)arg1;
- (id)memberAvatarUrls;
- (void)setMemberAvatarUrls:(id)arg1;
- (id)termName;
- (void)setTermName:(id)arg1;
- (void).cxx_destruct;
@end
