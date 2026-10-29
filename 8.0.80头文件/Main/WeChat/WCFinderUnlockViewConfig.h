@interface WCFinderUnlockViewConfig : NSObject
{
    BOOL _enableCountDown; // +0x8
    BOOL _enableBGClick; // +0x9
    NSString * _coverUrl; // +0x10
    NSString * _buttonTitle; // +0x18
    UIColor * _buttonBGColor; // +0x20
    NSString * _countDownTipsStr; // +0x28
    unsigned long long _countDownDuration; // +0x30
    id _userInfo; // +0x38
    id /* block */ _countDownBlock; // +0x40
    unsigned long long _unlockStyle; // +0x48
}
+ (id)configWithStyle:(unsigned long long)arg1;
- (id)init;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)buttonBGColor;
- (void)setButtonBGColor:(id)arg1;
- (id)countDownTipsStr;
- (void)setCountDownTipsStr:(id)arg1;
- (unsigned long long)countDownDuration;
- (void)setCountDownDuration:(unsigned long long)arg1;
- (BOOL)enableCountDown;
- (void)setEnableCountDown:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)countDownBlock;
- (void)setCountDownBlock:(id /* block */)arg1;
- (unsigned long long)unlockStyle;
- (void)setUnlockStyle:(unsigned long long)arg1;
- (BOOL)enableBGClick;
- (void)setEnableBGClick:(BOOL)arg1;
- (void).cxx_destruct;
@end
