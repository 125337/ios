@interface MMLiveCatalogedMerchandiseLotteryIndicatorView : UIView <MMLiveMulticastTimerSubscriber>
{
    MMLiveMulticastTimerToken * _timerToken; // +0x8
    MMLiveCatalogedMerchandiseLotteryInfo * _lotteryInfo; // +0x10
    unsigned long long _visualState; // +0x18
    id <MMLiveCatalogedMerchandiseLotteryIndicatorViewDelegate> _delegate; // +0x20
    UIView * _containerView; // +0x28
    UIView * _backgroundView; // +0x30
    UIView * _pagContainerView; // +0x38
    PAGView * _pagView; // +0x40
    UIView * _statusContainerView; // +0x48
    UIView * _statusCapsuleView; // +0x50
    UILabel * _statusLabel; // +0x58
    unsigned long long _lastVisualStatus; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTimerToken:(id)arg1;
- (void)setLotteryInfo:(id)arg1;
- (void)setVisualState:(unsigned long long)arg1;
- (void)setVisualState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)playLeadingAnimation;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onTapped;
- (void)onTimerWithToken:(id)arg1 tickedAtNominalTime:(struct)arg2;
- (void)initializeComponents;
- (void)updateStatusLabelWithCurrentServerTime:(unsigned long long)arg1 lastLotteryInfo:(id)arg2;
- (unsigned long long)visualStatusForLotteryInfo:(id)arg1 atUnixEpochTime:(unsigned long long)arg2;
- (id)timerToken;
- (id)lotteryInfo;
- (unsigned long long)visualState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)pagContainerView;
- (void)setPagContainerView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)statusContainerView;
- (void)setStatusContainerView:(id)arg1;
- (id)statusCapsuleView;
- (void)setStatusCapsuleView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (unsigned long long)lastVisualStatus;
- (void)setLastVisualStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
