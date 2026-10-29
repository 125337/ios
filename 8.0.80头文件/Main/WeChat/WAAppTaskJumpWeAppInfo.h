@interface WAAppTaskJumpWeAppInfo : NSObject
{
    NSString * _appID; // +0x8
    NSString * _navStackId; // +0x10
    unsigned long long _jumpRole; // +0x18
    unsigned long long _jumpScene; // +0x20
}
- (id)init;
- (id)description;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)navStackId;
- (void)setNavStackId:(id)arg1;
- (unsigned long long)jumpRole;
- (void)setJumpRole:(unsigned long long)arg1;
- (unsigned long long)jumpScene;
- (void)setJumpScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
