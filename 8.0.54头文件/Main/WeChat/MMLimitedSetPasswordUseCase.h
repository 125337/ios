@interface MMLimitedSetPasswordUseCase : NSObject <MMLimitedModeSetPasswordLogicDelegate>
{
    MMLimitedModeSetPasswordLogic * _setPasswordLogic; // +0x8
    id /* block */ _resolve; // +0x10
    id _selfHolder; // +0x18
}
- (id)wechatClearPassword;
- (id)setPasswordLogic;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (void)setSetPasswordLogic:(id)arg1;
- (id /* block */)resolve;
- (void)setResolve:(id /* block */)arg1;
- (id)selfHolder;
- (void)setSelfHolder:(id)arg1;
- (void).cxx_destruct;
@end

