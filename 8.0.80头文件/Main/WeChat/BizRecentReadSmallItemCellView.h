@interface BizRecentReadSmallItemCellView : MMMultiMenuTableViewCell
{
    MMUILabel * _titleLabel; // +0x40
    MMUILabel * _nicknameLabel; // +0x48
    MMUIView * _seperateView; // +0x50
    BizPersonalCenterRecentReadCover * _cellCoverView; // +0x58
    UIView * _highlightMaskView; // +0x60
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureLayout;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)applyData:(id)arg1;
- (id)titleLabel;
- (id)nicknameLabel;
- (id)seperateView;
- (id)cellCoverView;
- (id)highlightMaskView;
- (void)setTitleLabel:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setSeperateView:(id)arg1;
- (void)setCellCoverView:(id)arg1;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
