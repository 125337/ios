@interface MultiSelectTableViewCell : UITableViewCell
{
    UIImageView * m_selectedImageView; // +0x8
    BOOL m_bAnimated; // +0x10
    unsigned int m_iAnimatedCount; // +0x14
    BOOL m_bSelected; // +0x18
    BOOL m_bNeedOffset; // +0x19
    BOOL m_bIsEditting; // +0x1a
    BOOL m_bShowSelectedFlag; // +0x1b
    BOOL _m_bCanSelected; // +0x1c
}
- (void)adjustSelectFlagFrameInternal;
- (void)changeSelectdStatus:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)m_bSelected;
- (BOOL)m_bNeedOffset;
- (void)setM_bNeedOffset:(BOOL)arg1;
- (BOOL)m_bIsEditting;
- (void)setM_bIsEditting:(BOOL)arg1;
- (BOOL)m_bShowSelectedFlag;
- (void)setM_bShowSelectedFlag:(BOOL)arg1;
- (BOOL)m_bCanSelected;
- (void)setM_bCanSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
