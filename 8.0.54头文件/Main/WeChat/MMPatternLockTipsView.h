@interface MMPatternLockTipsView : UIView
{
    long long _curScene; // +0x8
    UILabel * _tipsLabel; // +0x10
}
- (id)initTipsViewWithFrame:(CGRect)arg1 andPatternScene:(long long)arg2;
- (void)initView;
- (void)setupFirstTips;
- (void)updateContentInPwdErrorWithRetryTime:(long long)arg1 animated:(BOOL)arg2;
- (void)updateContentInComfirm;
- (void)updateContentInComfirmError;
- (void)updateContentInResultInvalid;
- (void)updateContentInBlock;
- (void)updateContentInSetup;
- (void)animationShake;
- (BOOL)shouldShowSpecailEntranceTip;
- (long long)curScene;
- (void)setCurScene:(long long)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

