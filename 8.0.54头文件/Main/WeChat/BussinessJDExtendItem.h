@interface BussinessJDExtendItem : MMObject
{
    NSString * nsIconUrl; // +0x8
    NSString * nsName; // +0x10
    NSString * nsJumpUrl; // +0x18
    NSString * nsJumpWeapp; // +0x20
    NSString * nsJumpWeappPath; // +0x28
    long long nsJumpWeappVersion; // +0x30
}
- (id)nsIconUrl;
- (void)setNsIconUrl:(id)arg1;
- (id)nsName;
- (void)setNsName:(id)arg1;
- (id)nsJumpUrl;
- (void)setNsJumpUrl:(id)arg1;
- (id)nsJumpWeapp;
- (void)setNsJumpWeapp:(id)arg1;
- (id)nsJumpWeappPath;
- (void)setNsJumpWeappPath:(id)arg1;
- (long long)nsJumpWeappVersion;
- (void)setNsJumpWeappVersion:(long long)arg1;
- (void).cxx_destruct;
@end

