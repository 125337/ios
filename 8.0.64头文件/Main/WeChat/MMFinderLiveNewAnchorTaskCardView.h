@interface MMFinderLiveNewAnchorTaskCardView : UICollectionViewCell
{
    id /* block */ _actionBlock; // +0x8
    id /* block */ _jumpRewardHomeBlock; // +0x10
    FinderLiveQuestInstance * _taskItem; // +0x18
    MMFinderLiveNewAnchorTaskViewModel * _taskVM; // +0x20
    MMFinderLiveNewAnchorTaskTargetsView * _targetsView; // +0x28
    MMFinderLiveNewAnchorTaskRewardView * _rewardView; // +0x30
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)setTaskItem:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)jumpRewardHomeBlock;
- (void)setJumpRewardHomeBlock:(id /* block */)arg1;
- (id)taskItem;
- (id)taskVM;
- (void)setTaskVM:(id)arg1;
- (id)targetsView;
- (void)setTargetsView:(id)arg1;
- (id)rewardView;
- (void)setRewardView:(id)arg1;
- (void).cxx_destruct;
@end
