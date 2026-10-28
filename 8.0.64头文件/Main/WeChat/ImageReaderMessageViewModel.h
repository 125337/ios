@interface ImageReaderMessageViewModel : ReaderMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (BOOL)showMultiCoverStyle;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)calculateDigestViewSize;
- (double)messageNodeViewHeight;
- (unsigned int)imageCount;
- (double)coverImageHeight;
- (id)digestText;
- (CGSize)imgIconSize;
- (id)coverImageURLs;
- (id)accessibilityDescription;
@end
