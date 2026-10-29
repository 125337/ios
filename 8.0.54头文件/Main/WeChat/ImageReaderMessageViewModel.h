@interface ImageReaderMessageViewModel : ReaderMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)calculateDigestViewSize;
- (double)messageNodeViewHeight;
- (unsigned int)imageCount;
- (double)coverImageHeight;
- (id)digestText;
- (CGSize)imgIconSize;
- (id)accessibilityDescription;
@end

