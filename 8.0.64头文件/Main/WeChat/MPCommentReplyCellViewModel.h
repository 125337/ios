@interface MPCommentReplyCellViewModel : MPCommentBaseCellViewModel
{
    BOOL _isPreReplyFromSameAuthor; // +0x50
    MPCommentReply * _commentReply; // +0x58
}
- (id)initWithMPCommentMsgAndReply:(id)arg1 commentReply:(id)arg2;
- (id)cellViewClassName;
- (id)creatCommentCellView;
- (double)headerMargin;
- (id)content;
- (void)markReplyDeleted;
- (BOOL)isLike;
- (BOOL)isSelected;
- (unsigned int)likeCount;
- (void)switchThumbsUpStatus;
- (BOOL)isDelete;
- (BOOL)isFromAuthor;
- (id)commentReply;
- (void)setCommentReply:(id)arg1;
- (BOOL)isPreReplyFromSameAuthor;
- (void)setIsPreReplyFromSameAuthor:(BOOL)arg1;
- (void).cxx_destruct;
@end
