@interface GameChatInputController : WCInputController <EmoticonSearchHalfScreenViewControllerDelegate>
{
    BOOL _isShowingSearchView; // +0x79
}
- (id)init;
- (void)initNotification;
- (void)dealloc;
- (void)setFKeyboardHeight:(double)arg1;
- (void)liveInputKeyboardDidShow:(id)arg1;
- (void)notifyInputViewHeightChanged;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onSearchViewHide;
- (void)showSearchEmoticonViewController;
- (BOOL)shouldInterceptExpressionPanelOnKeyboardChanged:(BOOL)arg1;
- (id)getChatUsername;
- (BOOL)isShowingSearchView;
- (void)setIsShowingSearchView:(BOOL)arg1;
@end

