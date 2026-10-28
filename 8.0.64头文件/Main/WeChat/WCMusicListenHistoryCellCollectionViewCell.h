@interface WCMusicListenHistoryCellCollectionViewCell : UICollectionViewCell
{
    double _labelSpacing; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _singerLabel; // +0x18
    UIView * _selectedMaskView; // +0x20
    double _cellMinHeight; // +0x28
    UIEdgeInsets _contentEdgeInsets; // +0x30
    UIEdgeInsets _collectionViewContentInsets; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)updateWithTitle:(id)arg1 singer:(id)arg2;
- (CGSize)calculateSizeWithConstrainedSize:(CGSize)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)titleLabel;
- (id)singerLabel;
- (id)selectedMaskView;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (double)labelSpacing;
- (void)setLabelSpacing:(double)arg1;
- (UIEdgeInsets)collectionViewContentInsets;
- (void)setCollectionViewContentInsets:(UIEdgeInsets)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSingerLabel:(id)arg1;
- (void)setSelectedMaskView:(id)arg1;
- (double)cellMinHeight;
- (void)setCellMinHeight:(double)arg1;
- (void).cxx_destruct;
@end
