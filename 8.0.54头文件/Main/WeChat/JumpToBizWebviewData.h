@interface JumpToBizWebviewData : MMObject
{
    int webType; // +0x8
    NSString * toUsername; // +0x10
    NSString * appID; // +0x18
    NSString * bundleID; // +0x20
    NSString * extMsg; // +0x28
}
- (void)dealloc;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (int)webType;
- (void)setWebType:(int)arg1;
- (void).cxx_destruct;
@end

