@interface BizAppReaderMessageCellView : BizAppBaseMessageCellView
{
    BizAppReaderMessageBigPicView * _bigPicView; // +0xf0
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)layoutStandardContentView;
- (void)addCoverImageView;
- (void)addTitleLabel;
- (void)addDigestLabel;
- (void)layoutBigPicContentViewWithViewModel:(id)arg1;
- (id)bigPicView;
- (void)updateSourceView:(id)arg1 nickname:(id)arg2 detailStr:(id)arg3;
- (unsigned long long)accessibilityTraits;
- (void)setBigPicView:(id)arg1;
- (void).cxx_destruct;
@end
