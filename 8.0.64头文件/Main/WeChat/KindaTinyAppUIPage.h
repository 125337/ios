@interface KindaTinyAppUIPage : NSObject
{
    MMIUIPage * _kindaUIPage; // +0x8
    id <KindaTinyAppUIPageDelegate> _delegate; // +0x10
    NSString * _username; // +0x18
    KindaProxy * _kindaProxy; // +0x20
    MMUIViewController * _loadingViewController; // +0x28
}
- (void)openTinyApp:(id)arg1 extraData:(id)arg2;
- (void)startLoading:(BOOL)arg1;
- (void)stopLoading;
- (void)destoryTinyAppPage;
- (void)closeUI:(BOOL)arg1;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (void)endIgnoringInteractionEvents;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(long long)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightCallbackImpl:(id)arg1;
- (id)getTitle;
- (id)kindaUIPage;
- (void)setKindaUIPage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)kindaProxy;
- (void)setKindaProxy:(id)arg1;
- (id)loadingViewController;
- (void)setLoadingViewController:(id)arg1;
- (void).cxx_destruct;
@end
