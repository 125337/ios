@interface MMFinderLiveNewAnchorTaskTargetsView : MMUIView
{
    BOOL _isMultiStage; // +0x8
    id /* block */ _actionBlock; // +0x10
    MMFinderLiveNewAnchorTaskViewModel * _taskVM; // +0x18
    NSString * _reward; // +0x20
    NSString * _rewardDetail; // +0x28
}
- (void)setTaskVM:(id)arg1;
- (void)setReward:(id)arg1;
- (void)setIsMultiStage:(BOOL)arg1;
- (void)refreshStatus;
- (CGSize)titleSize:(id)arg1;
- (void)onButtonClicked;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)taskVM;
- (id)reward;
- (id)rewardDetail;
- (void)setRewardDetail:(id)arg1;
- (BOOL)isMultiStage;
- (void).cxx_destruct;
@end

