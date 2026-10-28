@interface MMFinderLiveWinterOlympicOperationView : MMFinderLiveOperationView
{
    id <MMFinderLiveWinterOlympicOperationViewDelegate> _operationDelegate; // +0x8
    MMFinderLiveOlympicsOperationViewModel * _olympicsOperationViewModel; // +0x10
}
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(BOOL)arg2;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)dealloc;
- (void)removeCertificateBackgroundAndParticipateAnimation;
- (void)layoutUI;
- (id)activityTask;
- (id)activityTaskId;
- (void)setOlympicsOperationViewModel:(id)arg1;
- (void)updateSyncActivityCommentResp:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutOnlineStateView;
- (void)createAndLayoutGameFrameSetViewsIfNeed;
- (void)createFollowConfirmIfNeeded;
- (void)createRewardGiftRecievingAnimationViewIfNeeded;
- (void)createRewardRecipientSelectionViewIfNeeded;
- (void)createSendingMoreBubbleViewIfNeeded;
- (void)layoutLotteryWidgets;
- (void)bindToViewModel:(id)arg1;
- (void)startParticipateAnimation:(id)arg1 backgroundFadeInDelay:(double)arg2;
- (void)prepareForCertificateShowing;
- (void)prepareForCertificateHiding;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)olympicsOperationViewModel;
- (void).cxx_destruct;
@end
