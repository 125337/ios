@interface GroupNoticeMessageViewModel : TextMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (BOOL)isLongSplitMessage;
- (CGSize)calculateContentTextSize;
- (CGSize)contentTextSize;
- (id)contentText;
- (double)contentHeight;
- (BOOL)canShowJumpButton;
- (double)jumpButtonHeight;
- (id)jumpButtonFont;
- (BOOL)canShowRevokeMsgMenuItem;
@end
