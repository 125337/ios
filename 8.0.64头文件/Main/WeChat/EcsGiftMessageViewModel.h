@interface EcsGiftMessageViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)viewSize;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)tagText;
- (id)wishText;
- (id)sourceTitle;
- (id)giftStatusText;
- (long long)giftStatus;
- (unsigned long long)bubbleType;
- (void)updateBgBubbleType:(unsigned long long)arg1;
@end
