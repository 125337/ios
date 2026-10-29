@interface VideoReaderMessageViewModel : ReaderMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)messageNodeViewHeight;
- (id)timeText;
- (CGSize)calculateTitleViewSize;
- (double)labelMaxWidth;
- (id)accessibilityDescription;
@end
