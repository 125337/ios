@interface OpenProfileData : MMObject
{
    int scene; // +0x8
    int profileType; // +0xc
    NSString * username; // +0x10
    NSString * appID; // +0x18
    NSString * bundleID; // +0x20
    NSString * extMsg; // +0x28
    NSString * fromUser; // +0x30
    NSString * domain; // +0x38
}
- (void)dealloc;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)profileType;
- (void)setProfileType:(int)arg1;
- (void).cxx_destruct;
@end
