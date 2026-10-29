@interface TXNewsYuanBaoPlugin : NSObject <CustomMenuToolViewDelegate, UrlControllerDelegate>
{
    UrlController * _urlController; // +0x8
    id <TXNewsYuanBaoPluginDelegate> _delegate; // +0x10
}
+ (id)YuanBaoPluginConfig;
- (void)configToolView:(id)arg1;
- (BOOL)shouldShowChangeModeBtn;
- (id)getViewController;
- (void)verifyContactByUsrName:(id)arg1;
- (void)onJumpToWebView:(id)arg1;
- (void)onChangeToInputMode;
- (void)onChangeToMenuMode:(id)arg1;
- (void)onSubMenuPresentWithIndex:(long long)arg1 ArrowX:(double)arg2;
- (void)onSubMenuDismiss;
- (void)onReportClickEvent:(id)arg1;
- (void)onReportParentClickEvent:(id)arg1;
- (void)onRecordActionEvent:(id)arg1;
- (BOOL)onJumpToNativeView:(id)arg1;
- (void)onJumpToScanView:(id)arg1;
- (void)onJumpToPicView:(id)arg1;
- (void)onJumpToPOIView:(id)arg1;
- (void)onJumpToBrandSearchView:(id)arg1;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2 btnName:(id)arg3 btnLevel:(unsigned long long)arg4;
- (void)onJumpToEcs:(id)arg1;
- (void)onJumpToProfile:(id)arg1;
- (id)getBrandContactUsername;
- (id)urlController;
- (void)setUrlController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
