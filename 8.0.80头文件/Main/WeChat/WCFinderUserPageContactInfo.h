@interface WCFinderUserPageContactInfo : NSObject
{
    BOOL _isPrivateLock; // +0x8
    WCFinderContact * _contact; // +0x10
    NSString * _accountInfoUrl; // +0x18
}
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isPrivateLock;
- (void)setIsPrivateLock:(BOOL)arg1;
- (id)accountInfoUrl;
- (void)setAccountInfoUrl:(id)arg1;
- (void).cxx_destruct;
@end
