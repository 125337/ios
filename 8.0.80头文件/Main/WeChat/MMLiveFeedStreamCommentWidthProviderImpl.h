@interface MMLiveFeedStreamCommentWidthProviderImpl : NSObject <MMLiveCommentWidthProvider>
{
    MMFinderLiveFeedStreamCommentView * _commentView; // +0x8
}
- (id)initWithCommentView:(id)arg1;
- (double)commentTableWidth;
- (double)commentTableContentWidth;
- (double)compatibleContentWidthForPubbleCellFrameCaching;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (void).cxx_destruct;
@end
