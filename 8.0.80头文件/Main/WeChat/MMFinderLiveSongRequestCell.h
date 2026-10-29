@interface MMFinderLiveSongRequestCell : MMFinderLiveSongTableViewCell <MMFinderLiveKTVTrialListenManageExt>
{
    MMUIView * _tapView; // +0x8
    UIView * _coverMaskView; // +0x10
    UIImageView * _playIconView; // +0x18
    PAGView * _trialPlayingAniView; // +0x20
    MMUIActivityIndicatorView * _trialPrepareLoadingView; // +0x28
    long long _currTrialProcessState; // +0x30
}
+ (id)identifier;
- (void)commonInit;
- (void)dealloc;
- (void)customLayoutUI;
- (double)lineMaxRight;
- (void)checkStates;
- (void)playTrialAnimation;
- (void)stopTrialAnimation;
- (BOOL)updateTrialProcessState:(long long)arg1;
- (void)refreshUIForProcessState;
- (BOOL)isTrialPlayIconVisible;
- (id)tapView;
- (id)coverMaskView;
- (id)playIconView;
- (id)trialPrepareLoadingView;
- (id)trialPlayingAniView;
- (id)trialListenManageLogic;
- (void)onSongContentTap;
- (void)prepareForReuse;
- (void)onLiveKTVTrialListenProcessStateChanged:(long long)arg1 song:(id)arg2 taskId:(id)arg3;
- (void)setTapView:(id)arg1;
- (void)setCoverMaskView:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setTrialPlayingAniView:(id)arg1;
- (void)setTrialPrepareLoadingView:(id)arg1;
- (long long)currTrialProcessState;
- (void)setCurrTrialProcessState:(long long)arg1;
- (void).cxx_destruct;
@end
