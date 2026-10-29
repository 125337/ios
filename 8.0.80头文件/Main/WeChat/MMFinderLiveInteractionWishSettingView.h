@interface MMFinderLiveInteractionWishSettingView : UIView
{
    MMFinderLiveTaskId * _taskId; // +0x8
    InteractionWishConfig * _interactionWishInfo; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _detailLabel; // +0x20
    MMUIImageView * _arrowView; // +0x28
    MMBadgeView * _redDotView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)updateInteractionWishConfig:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupRedDot;
- (void)reloadRedDot;
- (void)removeRedDot;
- (void)disposeRedDot;
- (id)getRedDotPath;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)interactionWishInfo;
- (void)setInteractionWishInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end
