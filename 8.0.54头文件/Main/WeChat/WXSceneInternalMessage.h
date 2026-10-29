@interface WXSceneInternalMessage : NSObject
{
    NSString * _stateId; // +0x8
    NSString * _stateToken; // +0x10
    NSString * _stateUrl; // +0x18
    NSString * _stateTitle; // +0x20
    unsigned long long _jumpType; // +0x28
    NSString * _stateMiniProgramUsername; // +0x30
    NSString * _stateMiniProgramPath; // +0x38
    long long _stateMiniProgramType; // +0x40
    NSString * _stateChannelUserName; // +0x48
}
- (id)stateId;
- (void)setStateId:(id)arg1;
- (id)stateToken;
- (void)setStateToken:(id)arg1;
- (id)stateUrl;
- (void)setStateUrl:(id)arg1;
- (id)stateTitle;
- (void)setStateTitle:(id)arg1;
- (unsigned long long)jumpType;
- (void)setJumpType:(unsigned long long)arg1;
- (id)stateMiniProgramUsername;
- (void)setStateMiniProgramUsername:(id)arg1;
- (id)stateMiniProgramPath;
- (void)setStateMiniProgramPath:(id)arg1;
- (long long)stateMiniProgramType;
- (void)setStateMiniProgramType:(long long)arg1;
- (id)stateChannelUserName;
- (void)setStateChannelUserName:(id)arg1;
- (void).cxx_destruct;
@end

