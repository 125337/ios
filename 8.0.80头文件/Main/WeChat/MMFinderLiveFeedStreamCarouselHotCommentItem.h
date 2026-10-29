@interface MMFinderLiveFeedStreamCarouselHotCommentItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    MMFinderLiveFeedStreamCommentData * _comment; // +0x10
}
- (unsigned long long)cellType;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (void).cxx_destruct;
@end
