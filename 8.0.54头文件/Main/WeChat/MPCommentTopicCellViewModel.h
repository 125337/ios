@interface MPCommentTopicCellViewModel : MPCommentBaseCellViewModel
- (id)cellViewClassName;
- (id)creatCommentCellView;
- (double)headerMargin;
- (id)content;
- (BOOL)isLike;
- (BOOL)isSelected;
- (unsigned int)likeCount;
- (void)switchThumbsUpStatus;
@end

