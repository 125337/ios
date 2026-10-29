@interface AttributedReaderMessageViewModel : ReaderMessageViewModel
{
    NSAttributedString * m_digestAttrString; // +0x90
    BOOL _forceHideRightCoverImage; // +0x98
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)getMessageFTSText:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowReadAll;
- (BOOL)isShowHeadAndNicknameArea;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;
- (double)readerViewInsideWidth;
- (double)itemInsideWidth;
- (BOOL)canShowRightCoverImage;
- (double)rightCoverImageWidth;
- (double)rightCoverImageHeight;
- (double)readerViewWidth;
- (double)readerItemLMargin;
- (double)readerItemHMargin;
- (id)makeSearchPreview:(id)arg1;
- (id)digestAttrString;
- (double)messageNodeViewWidth;
- (double)messageNodeViewHeight;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (BOOL)forceHideRightCoverImage;
- (void)setForceHideRightCoverImage:(BOOL)arg1;
- (void).cxx_destruct;
@end

