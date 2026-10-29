@interface EmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    UIView * m_rewardTips; // +0xa8
    UILabel * m_downloadFailRetryLabel; // +0xb0
    UIImageView * m_downloadFailedImageView; // +0xb8
    MMEmoticonView * m_emoticonView; // +0xc0
    MMUIActivityIndicatorView * m_imageLoadingView; // +0xc8
    EmoticonCustomAddLogicController * m_emoticonAddLogicController; // +0xd0
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)updateStatus;
- (void)onAppear;
- (CGRect)showRectForMenuController;
- (void)initEmoticonView;
- (void)initRewardTipsViewWithMaxSize:(double)arg1;
- (void)showLoadingView;
- (void)showDownloadFailView;
- (id)operationMenuItems;
- (void)onSaveEmoticon:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onShowDetailPage:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onTouchUpInside;
- (void)onClick;
- (void)onLongTouch;
- (void)startDownloadImageIsFirstTime:(BOOL)arg1;
- (void)onShowRelatedEmoticon:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)onGoToRewardInDetailPage:(id)arg1;
- (void)showDetailPageWithNeedScrollToBottom:(BOOL)arg1 extrance:(long long)arg2;
- (void)onClickStopShowTipsButton:(id)arg1;
- (void)setCanShowRewardTips:(BOOL)arg1;
- (void)showFinishedTipsWithWording:(id)arg1;
- (id)getViewController;
- (void)onClickAsRefer;
- (void).cxx_destruct;
@end

