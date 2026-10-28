@interface MMFinderLivePromotePubbleContainerView : MMRectTriangleArrowView
{
    BOOL _shouldHidden; // +0x8
    BOOL _hideCloseButton; // +0x9
    MMFinderLivePromotePubbleContentView * _contentView; // +0x10
    id /* block */ _closeCallback; // +0x18
    id /* block */ _tapCallback; // +0x20
    id /* block */ _shouldHiddenChangeCallback; // +0x28
    id <MMFinderLiveOperationViewDelegate> _operationDelegate; // +0x30
    FinderLivePromoteMsgInfo * _promoteMsgInfo; // +0x38
    id /* block */ _actionReportCallback; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    MMUIButton * _closeButton; // +0x50
    long long _style; // +0x58
}
+ (id)createPromotePubbleContainerWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
+ (double)getContainerHeight:(long long)arg1 displayTriTip:(BOOL)arg2;
+ (double)getContentHeight:(long long)arg1;
+ (double)getContentWidth:(id)arg1 taskId:(id)arg2;
+ (double)getContainerWidth:(id)arg1 taskId:(id)arg2;
+ (id)currentLiveTask;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 promoteMsgInfo:(id)arg3 taskId:(id)arg4 style:(long long)arg5;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutCloseButton;
- (void)setHideCloseButton:(BOOL)arg1;
- (void)closeButtonAddBackGroundImage;
- (void)updateCloseButtonPosition;
- (BOOL)isFromAnchorPromote;
- (double)selfCornerRadius;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (void)onShowed;
- (void)onDismissed;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)showWithAnimationFromPosition:(CGPoint)arg1 toPosition:(CGPoint)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)updateCloseButtonForScale:(double)arg1;
- (void)showWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)showWithAnimationToBottom:(double)arg1 middleScale:(double)arg2 middleCenterY:(double)arg3 xAnchor:(double)arg4 xAnchorPart1Position:(double)arg5 part1Duration:(double)arg6 part2Duration:(double)arg7 part2Animating:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)dismissWithAnimationFromPosition:(CGPoint)arg1 toPosition:(CGPoint)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithAnimationToMiddleCenterY:(double)arg1 centerY:(double)arg2 middleScale:(double)arg3 xAnchor:(double)arg4 xAnchorPart2Position:(double)arg5 part1Duration:(double)arg6 part2Duration:(double)arg7 part1Animating:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)setAlpha:(double)arg1;
- (void)onCloseAction;
- (BOOL)isCurrentPromoteMsgInfo:(id)arg1;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteMsgInfo:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (id)currentPromoteItem;
- (id)getCurrentPromoteBuffer;
- (id)productContentView;
- (id)bulkBuyContentView;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)displayContent:(unsigned long long)arg1;
- (id)currentDisplayGoodsItem;
- (id)currentDisplayAdsItem;
- (id)currentDisplayCouponInfo;
- (void)setOperationDelegate:(id)arg1;
- (BOOL)isCustomDisplaying;
- (void)updateShouldHidden:(BOOL)arg1;
- (id)currentLiveTask;
- (void)setHidden:(BOOL)arg1;
- (id)audienceLogReporter;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (id /* block */)shouldHiddenChangeCallback;
- (void)setShouldHiddenChangeCallback:(id /* block */)arg1;
- (id)operationDelegate;
- (id)promoteMsgInfo;
- (void)setPromoteMsgInfo:(id)arg1;
- (id /* block */)actionReportCallback;
- (void)setActionReportCallback:(id /* block */)arg1;
- (BOOL)shouldHidden;
- (void)setShouldHidden:(BOOL)arg1;
- (BOOL)hideCloseButton;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end
