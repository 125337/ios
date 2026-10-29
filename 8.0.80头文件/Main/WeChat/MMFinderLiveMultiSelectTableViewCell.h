@interface MMFinderLiveMultiSelectTableViewCell : UITableViewCell
{
    BOOL m_bIsEditting; // +0x8
    BOOL m_bNeedOffset; // +0x9
    BOOL m_bShowSelectedFlag; // +0xa
    BOOL m_bSelected; // +0xb
    BOOL m_bAnimated; // +0xc
    unsigned int m_iAnimatedCount; // +0x10
    UIImageView * m_selectedImageView; // +0x18
    id <MMFinderLiveMultiSelectTableViewCellDelegate> _multiSelectDelegate; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)resetState;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutSelectedImageView;
- (void)adjustSelectFlagFrameInternal;
- (void)customTableViewCellRecorderControl;
- (id)getCellReorderControl;
- (void)changeSelectdStatus:(BOOL)arg1;
- (void)customReorderImage:(id)arg1;
- (double)adjustedLeftOffsetForEditing;
- (double)selectedButtonLeftMargin;
- (CGSize)selectedButtonSize;
- (id)selectedImageForSelectedButton;
- (id)unSelectedImageForSelectedButton;
- (BOOL)m_bIsEditting;
- (void)setM_bIsEditting:(BOOL)arg1;
- (BOOL)m_bNeedOffset;
- (void)setM_bNeedOffset:(BOOL)arg1;
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
- (id)multiSelectDelegate;
- (void)setMultiSelectDelegate:(id)arg1;
- (void).cxx_destruct;
@end
