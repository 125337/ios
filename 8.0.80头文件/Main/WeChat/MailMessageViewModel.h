@interface MailMessageViewModel : BaseMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (id)mailTitle;
- (BOOL)hasAttachment;
@end
