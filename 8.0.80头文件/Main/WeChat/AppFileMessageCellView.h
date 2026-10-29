@interface AppFileMessageCellView : CommonMessageCellView <AppFileCircleProgressViewDelegate>
{
    BOOL _needReportSummaryAd; // +0xb8
    AppFileMessageCellContentView * _infoView; // +0xc0
    NSMutableDictionary * _reportParams; // +0xc8
}
- (id)infoView;
- (void)layoutContentView;
- (void)onAppear;
- (id)accessibilityLabel;
- (void)updateStatus;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (BOOL)canShowForwardMenu;
- (BOOL)canShowFavoriteMenu;
- (id)operationMenuItems;
- (void)onShowOperationMenu;
- (void)updateReportParams;
- (void)updateXiaoWeiSummaryReportParams;
- (void)updateYuanBaoSummaryReportParams;
- (void)reportXiaoWeiSummaryMenuExposure;
- (void)reportYuanBaoSummaryMenuExposure;
- (void)onForward:(id)arg1;
- (BOOL)canContinueUpload;
- (void)onContinueUpload:(id)arg1;
- (void)onClkDownload:(BOOL)arg1;
- (BOOL)appFileProgressViewPlayButtonClick;
- (void)appFileProgressViewPauseButtonClick;
- (void)onTouchUpInside;
- (BOOL)isXiaoWeiSummaryFileTypeSupported;
- (BOOL)isXiaoWeiSummaryCDNFileAvailable;
- (BOOL)canShowXiaoWeiSummaryMenuItem;
- (BOOL)isMessageSummaryFileAvailableForDownload;
- (BOOL)shouldPromptDownloadForOpenIMSummary;
- (void)showMessageSummaryFileDownloadAlert;
- (BOOL)isSummaryFileTypeSupported;
- (BOOL)canShowYuanBaoSummaryMenuItem;
- (void)onYuanBaoSummary:(id)arg1;
- (void)onXiaoWeiSummary:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)setInfoView:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (BOOL)needReportSummaryAd;
- (void)setNeedReportSummaryAd:(BOOL)arg1;
- (void).cxx_destruct;
@end
