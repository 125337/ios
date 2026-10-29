@interface EditImageEmotionToolAttrView : MMUIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchViewControllerDelegate>
{
    BOOL _animatable; // +0x8
    BOOL _isEmoticonSearchEnabled; // +0x9
    EmoticonBoardView * _emoticonBoardView; // +0x10
    UIToolbar * _toolBar; // +0x18
    id <EditImageEmotionToolAttrDelegate> _delegate; // +0x20
    unsigned long long _emoticonBoardViewStyle; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 emoticonBoardViewStyle:(unsigned long long)arg2;
- (void)initToolBar;
- (void)initEmoticonView;
- (void)updateEmoticonView;
- (void)notifyEmoticonBoradViewWillDisplay;
- (void)setFrame:(CGRect)arg1;
- (void)updateForEmoticonSearch:(BOOL)arg1;
- (void)onDoneBtnClicked;
- (void)_onSelectedEmoticonWithWrap:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)onSendButtonClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onSearchEmoticonViewControllerDidClose;
- (id)_emoticonBoardView;
- (void)set_emoticonBoardView:(id)arg1;
- (id)_toolBar;
- (void)set_toolBar:(id)arg1;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (BOOL)animatable;
- (void)setAnimatable:(BOOL)arg1;
- (BOOL)isEmoticonSearchEnabled;
- (void)setIsEmoticonSearchEnabled:(BOOL)arg1;
- (unsigned long long)emoticonBoardViewStyle;
- (void)setEmoticonBoardViewStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
