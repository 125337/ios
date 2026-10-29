@interface WAEmoticonBoardProxy : NSObject <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchHalfScreenViewControllerDelegate, IWAEmoticonBoardService>
{
    EmoticonBoardView * _emoticonBoardView; // +0x8
    NSString * _appId; // +0x10
    MMTextView * _textView; // +0x18
    UIFont * _font; // +0x20
    EmoticonSearchHalfScreenViewController * _searchEmoticonViewController; // +0x28
}
+ (BOOL)IsSupportEmoticonBoard;
- (id)init;
- (void)initEmoticonView;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setAppId:(id)arg1;
- (void)showEmoticonBoardViewInView:(id)arg1 animated:(BOOL)arg2;
- (double)getEmoticonBoardViewPreferHeight;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (_NSRange)rangeOfEmoticon:(id)arg1 inRange:(_NSRange)arg2;
- (void)setCanSend:(BOOL)arg1;
- (void)setFinishButtonTitle:(id)arg1;
- (void)deleteEmoticon;
- (id)getGameVCByAppId:(id)arg1;
- (void)setEmoticonFont:(id)arg1;
- (void)setShowStoreEmoticon:(BOOL)arg1;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (void)setShowSearchEmoticon:(BOOL)arg1;
- (BOOL)isSticker;
- (void)onEmoticonSearchIconClicked;
- (void)showSearchEmoticonViewController;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void).cxx_destruct;
@end

