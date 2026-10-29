@interface WAAppTaskJumpWeAppInfo : NSObject
{
    NSString * _appID; // +0x8
    unsigned long long _jumpRole; // +0x10
    unsigned long long _jumpScene; // +0x18
}
- (id)init;
- (id)description;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned long long)jumpRole;
- (void)setJumpRole:(unsigned long long)arg1;
- (unsigned long long)jumpScene;
- (void)setJumpScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

