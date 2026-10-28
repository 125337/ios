@interface AppFileMessageCellViewV2 : CommonMessageCellView <AppFileCircleProgressViewDelegate>
{
    AppFileMessageCellContentView * _infoView; // +0xb0
}
- (id)infoView;
- (void)layoutContentView;
- (void)onAppear;
- (id)accessibilityLabel;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (BOOL)canShowForwardMenu;
- (BOOL)canShowFavoriteMenu;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (BOOL)canContinueUpload;
- (void)onContinueUpload:(id)arg1;
- (void)onClkDownload:(BOOL)arg1;
- (BOOL)appFileProgressViewPlayButtonClick;
- (void)appFileProgressViewPauseButtonClick;
- (void)onTouchUpInside;
- (void)setInfoView:(id)arg1;
- (void).cxx_destruct;
@end
