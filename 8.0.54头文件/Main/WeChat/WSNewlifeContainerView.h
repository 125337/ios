@interface WSNewlifeContainerView : WSContainerBaseView <IWSContainerReportDelegate, WSContainerView>
{
    BOOL _enablePageCache; // +0x8
    BOOL _active; // +0x9
    FlutterNewLifeMainTabViewController * _mainTabViewController; // +0x10
    WSLocalTemplateConfig * _config; // +0x18
    NSNumber * _categoryId; // +0x20
}
- (id)initWithConfig:(id)arg1;
- (id)getCategoryId;
- (void)dealloc;
- (void)setActive:(BOOL)arg1;
- (void)initViewIfNeed;
- (void)exposed;
- (id)onPreReport:(id)arg1;
- (void)onEnterWSWebView:(BOOL)arg1;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (id)mainTabViewController;
- (void)setMainTabViewController:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)enablePageCache;
- (void)setEnablePageCache:(BOOL)arg1;
- (BOOL)isActive;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (void).cxx_destruct;
@end

