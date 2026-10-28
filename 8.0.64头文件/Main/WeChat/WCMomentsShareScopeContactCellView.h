@interface WCMomentsShareScopeContactCellView : UICollectionViewCell
{
    MMHeadImageView * _avatarImageView; // +0x8
    UIView * _labelContainerView; // +0x10
    UILabel * _nameLabel; // +0x18
    unsigned long long _cellViewCurrentCorner; // +0x20
    CAShapeLayer * _cellViewCornerMaskLayer; // +0x28
    CALayer * _labelContainerViewBorderLayer; // +0x30
}
+ (id)cellIdentifier;
+ (double)cellHeight;
+ (BOOL)isSectionIdentifierEqualsTo:(id)arg1;
- (void)loadFromViewModel:(id)arg1;
- (void)_initCellViewWithViewModel:(id)arg1;
- (void)_initCellViewCornerFromViewModel:(id)arg1;
- (void)_removeCellViewCorner;
- (void)_initContainerViewBorderFromViewModel:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)labelContainerView;
- (void)setLabelContainerView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (unsigned long long)cellViewCurrentCorner;
- (void)setCellViewCurrentCorner:(unsigned long long)arg1;
- (id)cellViewCornerMaskLayer;
- (void)setCellViewCornerMaskLayer:(id)arg1;
- (id)labelContainerViewBorderLayer;
- (void)setLabelContainerViewBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
