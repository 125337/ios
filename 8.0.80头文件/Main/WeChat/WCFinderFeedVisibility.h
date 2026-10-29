@interface WCFinderFeedVisibility : NSObject <PBCoding, NSCopying>
{
    unsigned long long _mode; // +0x8
    unsigned long long _friendScope; // +0x10
    NSArray * _usernames; // +0x18
    NSArray * _tagIDs; // +0x20
}
+ (void)PBArrayAdd_mode;
+ (void)PBArrayAdd_friendScope;
+ (void)PBArrayAdd_usernames;
+ (void)PBArrayAdd_tagIDs;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1 friendScope:(unsigned long long)arg2 usernames:(id)arg3 tagIDs:(id)arg4;
- (BOOL)isValid;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (unsigned long long)friendScope;
- (void)setFriendScope:(unsigned long long)arg1;
- (id)usernames;
- (void)setUsernames:(id)arg1;
- (id)tagIDs;
- (void)setTagIDs:(id)arg1;
- (void).cxx_destruct;
@end
