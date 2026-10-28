@interface MMGroupLiveCommentPubbleView : MMLiveCommentPubbleView
{
    MMLiveCommentDataItem * _commentItem; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    RichTextView * _commentLabel; // +0x18
    MMGroupLiveCommentTableViewCellFrame * _cellFrame; // +0x20
}
+ (double)maxDisplayLabelWidthForComment:(id)arg1;
+ (double)maxDisplayLabelWidthForComment:(id)arg1 inCommentPubbleMaxWidth:(double)arg2;
+ (CGSize)sizeForComment:(id)arg1 inCommentPubbleMaxWidth:(double)arg2 withArrStyles:(id *)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setCommentItem:(id)arg1;
- (void)layoutHeadImageView;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (id)commentItem;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)cellFrame;
- (void)setCellFrame:(id)arg1;
- (void).cxx_destruct;
@end
