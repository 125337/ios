@interface GCAtModel : NSObject
{
    NSString * _userName; // +0x8
    NSString * _displayName; // +0x10
    NSString * _userIcon; // +0x18
}
- (id)displayNameWithAt;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)userIcon;
- (void)setUserIcon:(id)arg1;
- (void).cxx_destruct;
@end
