@interface MMLiveTopCommentActionObj : NSObject
{
    BOOL _isExpand; // +0x8
    MMLiveCommentPubbleCellFrame * _cellFrame; // +0x10
}
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)cellFrame;
- (void)setCellFrame:(id)arg1;
- (void).cxx_destruct;
@end
