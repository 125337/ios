@interface MMLivePauseViewModel : NSObject
{
    BOOL _showsAccumulatedTime; // +0x8
    BOOL _showContentLabel; // +0x9
    BOOL _showsResumeButton; // +0xa
    BOOL _showsSubDesc; // +0xb
    BOOL _removeBlurView; // +0xc
    BOOL _showCountdownDesc; // +0xd
    unsigned int _verifyButtonColdingTime; // +0x10
    unsigned int _showSubDescTime; // +0x14
    unsigned int _subDescVerifyCountDownSecond; // +0x18
    unsigned int _type; // +0x1c
    NSString * _message; // +0x20
    NSString * _contentStr; // +0x28
    NSString * _buttonTitle; // +0x30
    NSString * _buttonCountdownTitle; // +0x38
    NSString * _defaultSubDescStr; // +0x40
    NSString * _remoteSubDescStr; // +0x48
    long long _countdown; // +0x50
    NSString * _verifyCountdownWording; // +0x58
    NSString * _iconUrl; // +0x60
    NSArray * _spamReasonList; // +0x68
    FinderJumpInfo * _anchorAppealJumpInfo; // +0x70
    id <MMLivePauseViewModelDelegate> _delegate; // +0x78
    MMFinderLiveLogic * _finderLiveLogic; // +0x80
    FinderLiveLayerAnchorVerificationShowInfo * _verificationShowInfo; // +0x88
    long long _requestedVerifyPausedLiveScene; // +0x90
}
- (id)initWithLogic:(id)arg1 verificationShowInfo:(id)arg2;
- (void)updateWithPauseType:(unsigned long long)arg1;
- (void)updateResumeBtnEnable:(BOOL)arg1;
- (void)stopPauseTimer;
- (void)onResumeForAnchorVerifyWithTimeoutPaused;
- (void)onResumeForAnchorVerifyWithCaptchaPaused;
- (void)onResumeForAnchorVerifyWithTimeoutAndLimitPaused;
- (void)onResumeForAnchorVerifyLimitedPaused;
- (void)onResumeForAnchorVerifyForceWaitStylePaused;
- (void)onAnchorVerifyTimeoutPausedTimeout;
- (void)onAnchorVerifyWithCaptchaPausedTimeout;
- (void)onAnchorVerifyWithTimeoutAndLimitPausedTimeout;
- (void)onAnchorVerifyForceWaitStyleTimeout;
- (id)anchorStatusItem;
- (id)liveTask;
- (id)description;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)contentStr;
- (void)setContentStr:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)buttonCountdownTitle;
- (void)setButtonCountdownTitle:(id)arg1;
- (id)defaultSubDescStr;
- (void)setDefaultSubDescStr:(id)arg1;
- (id)remoteSubDescStr;
- (void)setRemoteSubDescStr:(id)arg1;
- (long long)countdown;
- (void)setCountdown:(long long)arg1;
- (unsigned int)verifyButtonColdingTime;
- (void)setVerifyButtonColdingTime:(unsigned int)arg1;
- (unsigned int)showSubDescTime;
- (void)setShowSubDescTime:(unsigned int)arg1;
- (unsigned int)subDescVerifyCountDownSecond;
- (void)setSubDescVerifyCountDownSecond:(unsigned int)arg1;
- (id)verifyCountdownWording;
- (void)setVerifyCountdownWording:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)spamReasonList;
- (void)setSpamReasonList:(id)arg1;
- (id)anchorAppealJumpInfo;
- (void)setAnchorAppealJumpInfo:(id)arg1;
- (BOOL)showsAccumulatedTime;
- (void)setShowsAccumulatedTime:(BOOL)arg1;
- (BOOL)showContentLabel;
- (void)setShowContentLabel:(BOOL)arg1;
- (BOOL)showsResumeButton;
- (void)setShowsResumeButton:(BOOL)arg1;
- (BOOL)showsSubDesc;
- (void)setShowsSubDesc:(BOOL)arg1;
- (BOOL)removeBlurView;
- (void)setRemoveBlurView:(BOOL)arg1;
- (BOOL)showCountdownDesc;
- (void)setShowCountdownDesc:(BOOL)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderLiveLogic;
- (void)setFinderLiveLogic:(id)arg1;
- (id)verificationShowInfo;
- (void)setVerificationShowInfo:(id)arg1;
- (long long)requestedVerifyPausedLiveScene;
- (void)setRequestedVerifyPausedLiveScene:(long long)arg1;
- (void).cxx_destruct;
@end
