@interface MMLiveCommentTableViewCell : MMTableViewCell
{
    BOOL _supportDisplayStatus; // +0x8
    MMLiveCommentTableViewCellFrame * _cellFrame; // +0x10
    MMLiveCommentDataItem * _commentItem; // +0x18
}
- (void)prepareForDisplay;
- (void)reloadLikeInfo;
- (void)willDisplay;
- (id)cellFrame;
- (void)setCellFrame:(id)arg1;
- (id)commentItem;
- (void)setCommentItem:(id)arg1;
- (BOOL)supportDisplayStatus;
- (void)setSupportDisplayStatus:(BOOL)arg1;
- (void).cxx_destruct;
@end
