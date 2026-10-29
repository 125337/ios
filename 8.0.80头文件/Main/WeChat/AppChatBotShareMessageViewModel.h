@interface AppChatBotShareMessageViewModel : AppStandardTextContentMessageViewModel <AppChatBotShareMessageDisplay>
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)title;
- (unsigned long long)contentLayoutType;
- (unsigned long long)contentImgCnt;
- (id)titleText;
- (id)contentText;
- (id)accountName;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)_historyDisplayInfo;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
@end
