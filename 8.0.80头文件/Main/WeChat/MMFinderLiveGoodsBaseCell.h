@interface MMFinderLiveGoodsBaseCell : MMMultiMenuTableViewCell
{
    BOOL m_bIsEditting; // +0x40
    BOOL m_bShowSelectedFlag; // +0x41
    BOOL m_bSelected; // +0x42
    BOOL m_bAnimated; // +0x43
    unsigned int m_iAnimatedCount; // +0x44
    UIImageView * m_selectedImageView; // +0x48
    UIView * _reorderView; // +0x50
    id <MMFinderLiveGoodsBaseCellDelegate> _multiSelectDelegate; // +0x58
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)resetState;
- (void)addSelectedImageViewIfNeeded;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)customTableViewCellRecorderControl;
- (void)changeSelectedStatus:(BOOL)arg1;
- (id)reorderView;
- (double)adjustedLeftOffsetForEditing;
- (double)selectedButtonLeftMargin;
- (CGSize)selectedButtonSize;
- (id)selectedImageForSelectedButton;
- (id)unSelectedImageForSelectedButton;
- (BOOL)m_bIsEditting;
- (void)setM_bIsEditting:(BOOL)arg1;
- (BOOL)m_bShowSelectedFlag;
- (void)setM_bShowSelectedFlag:(BOOL)arg1;
- (BOOL)m_bSelected;
- (void)setM_bSelected:(BOOL)arg1;
- (unsigned int)m_iAnimatedCount;
- (void)setM_iAnimatedCount:(unsigned int)arg1;
- (BOOL)m_bAnimated;
- (void)setM_bAnimated:(BOOL)arg1;
- (id)m_selectedImageView;
- (void)setM_selectedImageView:(id)arg1;
- (void)setReorderView:(id)arg1;
- (id)multiSelectDelegate;
- (void)setMultiSelectDelegate:(id)arg1;
- (void).cxx_destruct;
@end
