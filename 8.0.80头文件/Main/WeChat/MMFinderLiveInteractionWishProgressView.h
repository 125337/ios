@interface MMFinderLiveInteractionWishProgressView : UIView
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMUIImageView * _iconView; // +0x10
    InteractionWishConfig * _interactionWishInfo; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _progressLabel; // +0x28
    id <MMFinderLiveInteractionWishProgressViewDelegate> _delegate; // +0x30
    UIView * _rankSeparatorLine; // +0x38
    NSArray * _onlineMembers; // +0x40
    NSMutableArray * _rankRowViews; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)updateInteractionWishConfig:(id)arg1;
- (void)updateOnlineMembers:(id)arg1;
- (void)initViews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onRankNicknameClicked:(id)arg1;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)interactionWishInfo;
- (void)setInteractionWishInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rankSeparatorLine;
- (void)setRankSeparatorLine:(id)arg1;
- (id)onlineMembers;
- (void)setOnlineMembers:(id)arg1;
- (id)rankRowViews;
- (void)setRankRowViews:(id)arg1;
- (void).cxx_destruct;
@end
