@interface EmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    UILabel * m_downloadFailRetryLabel; // +0xb8
    UIImageView * m_downloadFailedImageView; // +0xc0
    MMEmoticonView * m_emoticonView; // +0xc8
    MMUIActivityIndicatorView * m_imageLoadingView; // +0xd0
    EmoticonCustomAddLogicController * m_emoticonAddLogicController; // +0xd8
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)updateStatus;
- (void)onAppear;
- (CGRect)showRectForMenuController;
- (void)initEmoticonView;
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
- (void)showDetailPageWithNeedScrollToBottom:(BOOL)arg1 extrance:(int)arg2;
- (void)showFinishedTipsWithWording:(id)arg1;
- (id)getViewController;
- (void)onClickAsRefer;
- (void).cxx_destruct;
@end
