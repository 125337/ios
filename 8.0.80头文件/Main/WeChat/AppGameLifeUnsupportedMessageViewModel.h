@interface AppGameLifeUnsupportedMessageViewModel : TextMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (BOOL)isLongSplitMessage;
- (BOOL)shouldShowRoomTodoView;
- (id)originContentText;
- (long long)parserType;
- (BOOL)isShowSourceView;
@end
