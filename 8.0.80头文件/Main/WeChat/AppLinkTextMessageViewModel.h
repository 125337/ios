@interface AppLinkTextMessageViewModel : TextMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)contentText;
- (id)accessibilityDescription;
- (id)getReplaceContent;
- (long long)parserType;
- (BOOL)isLongSplitMessage;
@end
