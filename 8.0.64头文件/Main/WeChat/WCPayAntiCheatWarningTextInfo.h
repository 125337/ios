@interface WCPayAntiCheatWarningTextInfo : NSObject
{
    NSString * _wording; // +0x8
    WCPayAntiCheatWarningJumpInfo * _jump_info; // +0x10
}
- (id)wording;
- (void)setWording:(id)arg1;
- (id)jump_info;
- (void)setJump_info:(id)arg1;
- (void).cxx_destruct;
@end
