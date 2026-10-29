@interface MMFinderLiveBottomRightBubbleView : UIView
{
    unsigned long long _backgroundType; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _containerView; // +0x18
    MMUIButton * _closeButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMLiveIconButton * _actionButton; // +0x30
}
+ (CGSize)defaultSize;
- (id)initWithTaskId:(id)arg1;
- (void)setBackgroundType:(unsigned long long)arg1;
- (void)initViews;
- (void)onCloseTapped;
- (void)updateActionButton;
- (void)onActionTapped;
- (void)updateTitleLabel;
- (void)layoutSubviews;
- (unsigned long long)backgroundType;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
