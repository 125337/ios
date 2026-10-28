@interface WAAppMessageCellView : WAAppMessageBaseCellView
{
    UILabel * _cardTitleLabel; // +0xb0
    MMWebImageView * _iconView; // +0xb8
    UILabel * _nameLabel; // +0xc0
    UILabel * _newsTitleLabel; // +0xc8
    UIImageView * _thumbImageView; // +0xd0
}
- (void)layoutContentView;
- (void)initWAAppDefaultNewsView;
- (id)nameLabel;
- (id)newsTitleLabel;
- (id)cardTitleLabel;
- (void)setCardTitleLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNewsTitleLabel:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (void).cxx_destruct;
@end
