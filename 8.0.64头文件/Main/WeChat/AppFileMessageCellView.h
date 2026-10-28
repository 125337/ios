@interface AppFileMessageCellView : CommonMessageCellView <AppFileCircleProgressViewDelegate>
{
    int m_uiStatus; // +0xb0
    UILabel * m_titleLabel; // +0xb8
    UILabel * m_detailLabel; // +0xc0
    UILabel * m_stateLabel; // +0xc8
    UIImageView * m_thumbImageView; // +0xd0
    UIImageView * m_thumbEmptyImageView; // +0xd8
    UIImageView * m_blankMaskImageView; // +0xe0
    AppFileCircleProgressView * m_fileProgressView; // +0xe8
    MMLoadingIndicatorView * m_loadingView; // +0xf0
}
- (void)layoutContentView;
- (void)onAppear;
- (id)displayViewForImageBrowser;
- (void)updateStatus;
- (void)initTitleLabel;
- (void)initDetailLabel;
- (void)initStateLabel;
- (void)updateStateLabel:(id)arg1;
- (void)initThumbImageView;
- (void)initThumbEmptyImageView;
- (void)initBlankMaskImageView;
- (void)ShowIndicatorView;
- (void)StopIndicatorView;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (BOOL)canShowForwardMenu;
- (BOOL)canShowFavoriteMenu;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (void)onContinueUpload:(id)arg1;
- (BOOL)canContinueUpload;
- (void)onClkDownload:(BOOL)arg1;
- (BOOL)appFileProgressViewPlayButtonClick;
- (void)appFileProgressViewPauseButtonClick;
- (void)onTouchUpInside;
- (void)onCheckMsgStatus;
- (void).cxx_destruct;
@end
