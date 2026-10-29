@interface MMWebViewPlugin_BizCustomSharePanel : MMWebViewPluginBase <BrandCustomSharePanelViewControllerDelegate>
{
    BOOL _customPanelEnable; // +0x8
    NSMutableArray * _actionGroups; // +0x10
    BrandCustomSharePanelViewController * _currentPanel; // +0x18
    unsigned long long _currentShareScene; // +0x20
}
- (void)updatePanelInfo:(id)arg1;
- (id)parseActionGroupFromInfo:(id)arg1;
- (id)parseActionFromInfo:(id)arg1;
- (void)showPanel:(unsigned long long)arg1;
- (void)hidePanel;
- (id)generatePanelActionGroups;
- (void)panelController:(id)arg1 didSelectAction:(id)arg2;
- (void)panelController:(id)arg1 didExposedAction:(id)arg2;
- (void)panelControllerDidClose:(id)arg1 isCancelled:(BOOL)arg2;
- (id)clientActionForID:(id)arg1;
- (id)sendAppMessageAction;
- (id)shareTimelineAction;
- (id)addFloatWindowAction;
- (id)toggleStarAction;
- (id)addFavAction;
- (id)addToNoteAction;
- (id)webSearchAction;
- (id)openOnPCAction;
- (id)openInWeReadAction;
- (id)openInBrowserAction;
- (id)sendByMailAction;
- (id)useOtherAppAction;
- (id)openInWeAppAction;
- (id)shareToDeviceAction;
- (id)listenArticleAction;
- (id)listenLaterAction;
- (id)saveAsImageAction;
- (id)copyLinkAction;
- (id)refreshAction;
- (id)searchInPageAction;
- (id)adjustFontAction;
- (id)createAdjustFontActionWithName:(id)arg1 isNew:(BOOL)arg2;
- (id)shareQQAction;
- (id)shareQZoneAction;
- (id)complainAction;
- (id)translateAction;
- (BOOL)customPanelEnable;
- (void)setCustomPanelEnable:(BOOL)arg1;
- (id)actionGroups;
- (void)setActionGroups:(id)arg1;
- (id)currentPanel;
- (void)setCurrentPanel:(id)arg1;
- (unsigned long long)currentShareScene;
- (void)setCurrentShareScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
