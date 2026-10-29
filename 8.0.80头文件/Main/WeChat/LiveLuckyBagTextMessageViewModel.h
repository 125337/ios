@interface LiveLuckyBagTextMessageViewModel : TextMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)contentText;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (BOOL)isLongSplitMessage;
- (long long)parserType;
- (double)contentHeight;
@end
