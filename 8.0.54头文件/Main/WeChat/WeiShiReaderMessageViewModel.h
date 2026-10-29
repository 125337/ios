@interface WeiShiReaderMessageViewModel : BaseMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)readerWraps;
- (double)messageNodeViewHeight;
- (double)messageNodeViewWidth;
@end

