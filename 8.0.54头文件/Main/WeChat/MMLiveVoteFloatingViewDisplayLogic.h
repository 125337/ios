@interface MMLiveVoteFloatingViewDisplayLogic : NSObject
{
    BOOL _hidden; // +0x8
    id <MMLiveVoteFloatingViewDisplayLogicDelegate> _delegate; // +0x10
    MMLiveVoteFloatingView * _voteFloatingView; // +0x18
    MMTimer * _floatingViewHideTimer; // +0x20
    NSString * _delayHideVotingId; // +0x28
}
- (id)initWithView:(id)arg1;
- (void)toggleFloatingViewHidden:(BOOL)arg1;
- (void)scheduleAutoHideFloatingViewTimerWithDelay:(double)arg1;
- (void)onHideFloatingView;
- (void)invalidateAutoHide;
- (void)updateUIWithVotingInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voteFloatingView;
- (void)setVoteFloatingView:(id)arg1;
- (id)floatingViewHideTimer;
- (void)setFloatingViewHideTimer:(id)arg1;
- (id)delayHideVotingId;
- (void)setDelayHideVotingId:(id)arg1;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

