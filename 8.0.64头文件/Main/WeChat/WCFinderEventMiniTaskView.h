@interface WCFinderEventMiniTaskView : UIView
{
    id <WCFinderEventMiniTaskViewDelegate> _delegate; // +0x8
    UILabel * _timeWordingLabel; // +0x10
    UILabel * _timeLabel; // +0x18
    UILabel * _rewardWordingLabel; // +0x20
    UILabel * _rewardLabel; // +0x28
    UILabel * _rewardProgressWordingLabel; // +0x30
    UILabel * _rewardProgressLabel; // +0x38
    UIProgressView * _rewardProgressView; // +0x40
    UIView * _miniTaskEntranceView; // +0x48
    UILabel * _miniTaskEntranceWordingLabel; // +0x50
    UILabel * _memberNumLabel; // +0x58
    UIImageView * _miniTaskRightArrowView; // +0x60
}
- (id)init;
- (void)updateWithEventInfo:(id)arg1;
- (void)addFlexLayout;
- (BOOL)shouldShowExpiredTimeWithEventInfo:(id)arg1;
- (id)getMemberNumberTextWithEventInfo:(id)arg1;
- (id)displayNumberStringWith:(double)arg1 maxDecimalDigits:(unsigned long long)arg2;
- (void)miniTaskEntranceDidClick;
- (id)timeWordingLabel;
- (id)timeLabel;
- (id)rewardWordingLabel;
- (id)rewardLabel;
- (id)rewardProgressWordingLabel;
- (id)rewardProgressLabel;
- (id)rewardProgressView;
- (id)miniTaskEntranceView;
- (id)miniTaskEntranceWordingLabel;
- (id)memberNumLabel;
- (id)miniTaskRightArrowView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTimeWordingLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setRewardWordingLabel:(id)arg1;
- (void)setRewardLabel:(id)arg1;
- (void)setRewardProgressWordingLabel:(id)arg1;
- (void)setRewardProgressLabel:(id)arg1;
- (void)setRewardProgressView:(id)arg1;
- (void)setMiniTaskEntranceView:(id)arg1;
- (void)setMiniTaskEntranceWordingLabel:(id)arg1;
- (void)setMemberNumLabel:(id)arg1;
- (void)setMiniTaskRightArrowView:(id)arg1;
- (void).cxx_destruct;
@end
