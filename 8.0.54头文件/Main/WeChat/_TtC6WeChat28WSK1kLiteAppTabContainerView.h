@interface _TtC6WeChat28WSK1kLiteAppTabContainerView : WSContainerBaseView
{
     config; // +0x8
     liteAppView; // +0x10
     liteAppDidLoad; // +0x18
     categoryId; // +0x20
     urlQueryDict; // +0x28
}
- (id)liteAppView;
- (id)bizScrollArea;
- (id)initWithConfig:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initViewIfNeed;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)exposed;
- (id)getCategoryId;
- (void)onContainerAppear;
- (void)onContainerDidDisappear;
- (id)init;
- (id)initConfig:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

