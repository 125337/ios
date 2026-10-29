@interface ImageTextReaderMessageViewModel : ReaderMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isDisableEditMode;
- (BOOL)isShowReadAll;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;
- (double)itemInsideWidth;
- (double)readerViewWidth;
- (double)readerItemLMargin;
@end
