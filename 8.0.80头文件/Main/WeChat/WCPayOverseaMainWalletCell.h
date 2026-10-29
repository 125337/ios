@interface WCPayOverseaMainWalletCell : UICollectionViewCell
{
    BOOL _showNew; // +0x8
    BOOL _rightTopNew; // +0x9
    BOOL _hasHLine; // +0xa
    int _radius; // +0xc
    MMWebImageView * _m_iconView; // +0x10
    MMWebImageView * _m_foregroundIconView; // +0x18
    UILabel * _m_nameLabel; // +0x20
    WCPayOverseaPayFunctionObject * _m_data; // +0x28
    UIView * _m_wLine; // +0x30
    UIView * _m_hLine; // +0x38
    UILabel * _m_subtitleLabel; // +0x40
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateIconView;
- (void)updateForegroundIconView;
- (void)updateNameLabel;
- (void)updateSubtitleLabel;
- (void)updateLine;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateCellData:(id)arg1 showNew:(BOOL)arg2 radius:(int)arg3 hLine:(BOOL)arg4;
- (void)updateCellData:(id)arg1 showNew:(BOOL)arg2 radius:(int)arg3 hLine:(BOOL)arg4 rightTopNew:(BOOL)arg5;
- (id)contentAccessbilityLabel;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_foregroundIconView;
- (void)setM_foregroundIconView:(id)arg1;
- (id)m_nameLabel;
- (void)setM_nameLabel:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)m_wLine;
- (void)setM_wLine:(id)arg1;
- (id)m_hLine;
- (void)setM_hLine:(id)arg1;
- (BOOL)showNew;
- (void)setShowNew:(BOOL)arg1;
- (BOOL)rightTopNew;
- (void)setRightTopNew:(BOOL)arg1;
- (int)radius;
- (void)setRadius:(int)arg1;
- (BOOL)hasHLine;
- (void)setHasHLine:(BOOL)arg1;
- (id)m_subtitleLabel;
- (void)setM_subtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
