@interface MMGroupLiveCommentTableViewCell : MMLiveCommentTableViewCell
{
    MMGroupLiveCommentPubbleView * _pubbleView; // +0x8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)layoutPubbleView;
- (void)setCommentItem:(id)arg1;
- (void)setCellFrame:(id)arg1;
- (id)groupLiveCellFrame;
- (id)pubbleView;
- (void)setPubbleView:(id)arg1;
- (void).cxx_destruct;
@end

