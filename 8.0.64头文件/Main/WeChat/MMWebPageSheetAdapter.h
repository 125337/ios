@interface MMWebPageSheetAdapter : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, MMWebViewPresetUIChildViewDelegate, MMPageSheetContainerViewControllerDelegate>
{
    id <MMWebPageSheetDelegate> _delegate; // +0x8
    MMPageSheetAdapter * _weakPageAdapter; // +0x10
    MMScrollActionSheet * _actionSheet; // +0x18
    MMWebPageSheetConfig * _config; // +0x20
    MMWebViewController * _webVC; // +0x28
}
- (void)showWebShareMenuInView:(id)arg1 customMenuItem:(id)arg2;
- (id)row1MenuItem;
- (id)row2MenuItemWithCustomMenuItem:(id)arg1;
- (id)actionSheetItemWithText:(id)arg1 image:(id)arg2 disable:(BOOL)arg3 userInfo:(id)arg4;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)initWithURL:(id)arg1 config:(id)arg2;
- (void)dealloc;
- (void)setupWebViewControllerWithURL:(id)arg1;
- (id)webviewController;
- (double)curPageSheetHeight;
- (id)genAndReturnPageSheetAdapter;
- (id)genAndReturnPageSheetContainerVC;
- (id)regenPageSheetContainerVCWithPageAdapter:(id)arg1;
- (void)onPageSheetConfigChanged;
- (void)updatePageSheetNavState;
- (void)updatePageSheetNavLeftState;
- (id)foldButton;
- (id)goBackButton;
- (id)buttonBkgColorFromTintColor:(id)arg1;
- (void)clickCloseButton:(id)arg1;
- (id)navRightArea;
- (id)rightMoreButton;
- (void)clickMoreButton:(id)arg1;
- (id)refreshButton;
- (void)clickRefreshButton:(id)arg1;
- (void)onWebViewControllerRecieveCloseEvent:(id)arg1;
- (void)onWebViewControllerHistoryChanged:(id)arg1;
- (void)pageSheetContainerVCWillDismiss:(id)arg1;
- (void)pageSheetContainerVCDidDismiss:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)weakPageAdapter;
- (void)setWeakPageAdapter:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end
