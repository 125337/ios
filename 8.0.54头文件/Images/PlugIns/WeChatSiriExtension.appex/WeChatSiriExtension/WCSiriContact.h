@interface WCSiriContact : NSObject <PBCoding>
{
    NSString * username; // +0x8
    NSString * displayName; // +0x10
    NSString * avatarUrl; // +0x18
    NSString * avatarHDUrl; // +0x20
    NSArray * memberAvatarUrls; // +0x28
    NSString * termName; // +0x30
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_avatarHDUrl;
+ (void)PBArrayAdd_memberAvatarUrls;
+ (void)PBArrayAdd_termName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isChatRoom;
- (id)description;
- (id)inPerson;
- (BOOL)saveAvatarImageToContainerPathIfNeeded;
- (BOOL)saveSingleImage;
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

