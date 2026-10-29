@interface WCSnsPermissionReporter : NSObject
{
    BOOL _isSocialBlackSwitchOn; // +0x8
    BOOL _isOutsiderSwitchOn; // +0x9
    BOOL _isWCBlackSwitchOn; // +0xa
    unsigned long long _enter50321Path; // +0x10
    long long _wcProfileType; // +0x18
    NSString * _wxUsername; // +0x20
    NSString * _pageSessionId; // +0x28
    unsigned long long _modifyPermission; // +0x30
    long long _contactInfoViewSource; // +0x38
}
+ (unsigned long long)getWCLevel2PermissionWithSocialBlack:(BOOL)arg1 isOutsider:(BOOL)arg2 isWCBlack:(BOOL)arg3;
- (id)toPermissionChangeDictionary;
- (id)toPageInDictionary;
- (void)reportPageIn;
- (void)reportPermissionChange;
- (id)pageSessionId;
- (unsigned long long)level1Permission;
- (unsigned long long)level2Permission;
- (unsigned long long)enter50321Path;
- (void)setEnter50321Path:(unsigned long long)arg1;
- (long long)wcProfileType;
- (void)setWcProfileType:(long long)arg1;
- (id)wxUsername;
- (void)setWxUsername:(id)arg1;
- (void)setPageSessionId:(id)arg1;
- (unsigned long long)modifyPermission;
- (void)setModifyPermission:(unsigned long long)arg1;
- (BOOL)isSocialBlackSwitchOn;
- (void)setIsSocialBlackSwitchOn:(BOOL)arg1;
- (BOOL)isOutsiderSwitchOn;
- (void)setIsOutsiderSwitchOn:(BOOL)arg1;
- (BOOL)isWCBlackSwitchOn;
- (void)setIsWCBlackSwitchOn:(BOOL)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (void).cxx_destruct;
@end
