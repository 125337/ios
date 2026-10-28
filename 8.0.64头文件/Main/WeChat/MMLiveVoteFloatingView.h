@interface MMLiveVoteFloatingView : MMUIView
{
    BOOL _disabledDisplay; // +0x8
    BOOL _layoutSubviewsAtCenter; // +0x9
    BOOL _hasFinished; // +0xa
    BOOL _isStaticStyle; // +0xb
    NSString * _delayHideVotingId; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMUIImageView * _voteFloatingImage; // +0x20
    MMUILabel * _tipLabel; // +0x28
    UIView * _staticBGView; // +0x30
    double _tipLabelStaticHeight; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)startDisplayAnimate;
- (void)setFinished:(BOOL)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (id)voteFloatingImage;
- (void)setLayoutSubviewsAtCenter:(BOOL)arg1;
- (id)tipLabel;
- (id)staticBGView;
- (void)animateToStaticStyleWithCompletion:(id /* block */)arg1;
- (void)animateToNormalStyle;
- (BOOL)disabledDisplay;
- (void)setDisabledDisplay:(BOOL)arg1;
- (BOOL)layoutSubviewsAtCenter;
- (id)delayHideVotingId;
- (void)setDelayHideVotingId:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setVoteFloatingImage:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (BOOL)hasFinished;
- (void)setHasFinished:(BOOL)arg1;
- (BOOL)isStaticStyle;
- (void)setIsStaticStyle:(BOOL)arg1;
- (void)setStaticBGView:(id)arg1;
- (double)tipLabelStaticHeight;
- (void)setTipLabelStaticHeight:(double)arg1;
- (void).cxx_destruct;
@end
