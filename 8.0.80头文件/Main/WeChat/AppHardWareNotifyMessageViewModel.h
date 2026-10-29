@interface AppHardWareNotifyMessageViewModel : BaseMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (double)notifyMessageCardWidthWithDefaultWidth:(double)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
@end
