@interface SharePreConfirmHeadCell : UITableViewCell
{
    BOOL _isFakeContact; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    id /* block */ _onViewMsgContent; // +0x18
}
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1 showArrow:(BOOL)arg2 showLine:(BOOL)arg3;
- (id)genHeadImageViewWithContract:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (BOOL)isFakeContact;
- (void)setIsFakeContact:(BOOL)arg1;
- (id /* block */)onViewMsgContent;
- (void)setOnViewMsgContent:(id /* block */)arg1;
- (void).cxx_destruct;
@end

