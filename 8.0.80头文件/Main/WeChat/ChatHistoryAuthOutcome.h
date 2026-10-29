@interface ChatHistoryAuthOutcome : NSObject
{
    BOOL _allowed; // +0x8
    BOOL _needsDailyGrantPrompt; // +0x9
    long long _authScene; // +0x10
    long long _authSource; // +0x18
    NSString * _denyReason; // +0x20
}
- (long long)authScene;
- (void)setAuthScene:(long long)arg1;
- (long long)authSource;
- (void)setAuthSource:(long long)arg1;
- (BOOL)allowed;
- (void)setAllowed:(BOOL)arg1;
- (id)denyReason;
- (void)setDenyReason:(id)arg1;
- (BOOL)needsDailyGrantPrompt;
- (void)setNeedsDailyGrantPrompt:(BOOL)arg1;
- (void).cxx_destruct;
@end
