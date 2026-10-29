@interface WCFinderUserPageContactInfo : NSObject
{
    BOOL _isPrivateLock; // +0x8
    WCFinderContact * _contact; // +0x10
    WCFinderStreamProfileExtInfo * _extInfo; // +0x18
    NSString * _accountInfoUrl; // +0x20
}
- (id)contact;
- (void)setContact:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (BOOL)isPrivateLock;
- (void)setIsPrivateLock:(BOOL)arg1;
- (id)accountInfoUrl;
- (void)setAccountInfoUrl:(id)arg1;
- (void).cxx_destruct;
@end

