@interface MPCommentBaseCellViewModel : NSObject
{
    double _viewHeight; // +0x8
    NSMutableArray * _contentLabelStyles; // +0x10
    CGSize _contentLabelSize; // +0x18
    BOOL _isLastItem; // +0x28
    BOOL _isSelected; // +0x29
    BOOL _isLike; // +0x2a
    unsigned int _likeCount; // +0x2c
    MPCommentMsg * _commentMsg; // +0x30
    double _viewWidth; // +0x38
    NSString * _content; // +0x40
    double _headerMargin; // +0x48
}
- (id)initWithMPCommentMsg:(id)arg1;
- (double)viewHeight;
- (double)replyContentHeight;
- (id)contentLabelStyles;
- (double)labelMaxWidth;
- (id)creatCommentCellView;
- (id)cellViewClassName;
- (void)clearLabelStyles;
- (void)switchThumbsUpStatus;
- (id)nickname;
- (id)headImageUrl;
- (id)commentMsg;
- (void)setCommentMsg:(id)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (BOOL)isLastItem;
- (void)setIsLastItem:(BOOL)arg1;
- (id)content;
- (BOOL)isSelected;
- (BOOL)isLike;
- (unsigned int)likeCount;
- (double)headerMargin;
- (void).cxx_destruct;
@end

