@interface MMFinderLiveNewAnchorTaskSingleTargetView : MMFinderLiveNewAnchorTaskTargetsView
{
    BOOL _shouldShowNote; // +0x8
    float _progressPercentage; // +0xc
    FinderLiveQuestInstance_StageItem_TargetItem * _targetItem; // +0x10
    MMUILabel * _rewardTitleLabel; // +0x18
    MMUILabel * _rewardDetailLabel; // +0x20
    MMUILabel * _rewardNoteLabel; // +0x28
    MMUILabel * _taskTitleLabel; // +0x30
    MMUILabel * _taskLabel; // +0x38
    UIButton * _opButton; // +0x40
    MMUILabel * _opLabel; // +0x48
    MMUIView * _progressView; // +0x50
    MMUIView * _curProgressView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)setTargetItem:(id)arg1;
- (void)refreshStatus;
- (void)onButtonClicked;
- (id)targetItem;
- (float)progressPercentage;
- (void)setProgressPercentage:(float)arg1;
- (BOOL)shouldShowNote;
- (void)setShouldShowNote:(BOOL)arg1;
- (id)rewardTitleLabel;
- (void)setRewardTitleLabel:(id)arg1;
- (id)rewardDetailLabel;
- (void)setRewardDetailLabel:(id)arg1;
- (id)rewardNoteLabel;
- (void)setRewardNoteLabel:(id)arg1;
- (id)taskTitleLabel;
- (void)setTaskTitleLabel:(id)arg1;
- (id)taskLabel;
- (void)setTaskLabel:(id)arg1;
- (id)opButton;
- (void)setOpButton:(id)arg1;
- (id)opLabel;
- (void)setOpLabel:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)curProgressView;
- (void)setCurProgressView:(id)arg1;
- (void).cxx_destruct;
@end

