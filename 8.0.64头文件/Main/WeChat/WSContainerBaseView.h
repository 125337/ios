@interface WSContainerBaseView : UIView <WSContainerView>
{
    BOOL _hasExposed; // +0x8
    UIViewController * _tabViewController; // +0x10
    WSContainerViewReporter * _reporter; // +0x18
    NSNumber * _categoryId; // +0x20
    unsigned long long _bizType; // +0x28
}
- (id)init;
- (id)initConfig:(id)arg1;
- (void)initViewIfNeed;
- (void)exposed;
- (BOOL)shouldInitViewWhenViewDidAppear;
- (unsigned long long)getBizType;
- (void)onEnterWSWebView:(BOOL)arg1;
- (void)onDidEnterWSWebView:(BOOL)arg1;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (id)getCategoryId;
- (BOOL)hasExposed;
- (void)setHasExposed:(BOOL)arg1;
- (id)tabViewController;
- (void)setTabViewController:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
