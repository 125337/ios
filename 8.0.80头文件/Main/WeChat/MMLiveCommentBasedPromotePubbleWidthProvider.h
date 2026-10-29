@interface MMLiveCommentBasedPromotePubbleWidthProvider : NSObject <MMLivePromotePubbleWidthProvider>
{
    id <MMLiveCommentWidthProvider> _commentViewWidthProvider; // +0x8
}
- (id)initWithCommentViewWidthProvider:(id)arg1;
- (double)pubbleWidth;
- (id)commentViewWidthProvider;
- (void)setCommentViewWidthProvider:(id)arg1;
- (void).cxx_destruct;
@end
