@interface MMFinderLiveKeepDisplayCommentTableViewCell : MMTableViewCell
{
    MMLiveCommentPubbleCellFrame * _pubbleViewCellFrame; // +0x8
    MMLiveCommentPubbleCell * _pubbleView; // +0x10
}
+ (id)cellIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateTableViewCellWithCellFrame:(id)arg1;
- (id)pubbleViewCellFrame;
- (void)setPubbleViewCellFrame:(id)arg1;
- (id)pubbleView;
- (void)setPubbleView:(id)arg1;
- (void).cxx_destruct;
@end
