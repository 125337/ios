@interface AppGameShareMessageViewModel : AppUrlMessageViewModel <PBMessageObserverDelegate>
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (void)setIsExposed;
- (void)setReadText;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
