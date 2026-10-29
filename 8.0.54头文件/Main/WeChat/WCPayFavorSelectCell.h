@interface WCPayFavorSelectCell : UITableViewCell
{
    BOOL _m_selected; // +0x8
    BOOL _m_canSelect; // +0x9
    BOOL _m_isFirstCell; // +0xa
    BOOL _m_isLastCell; // +0xb
    id <WCPayFavorSelectCellDelegate> _m_delegate; // +0x10
    NSString * _m_title; // +0x18
    NSString * _m_desc; // +0x20
    long long _m_index; // +0x28
    UILabel * _m_titleLabel; // +0x30
    UILabel * _m_descLabel; // +0x38
    UIButton * _m_selectedButton; // +0x40
    UIView * _m_maskView; // +0x48
    UIView * _m_lineView; // +0x50
    UIView * _m_firstLineView; // +0x58
}
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateTitle:(id)arg1 desc:(id)arg2 selected:(BOOL)arg3 canSelect:(BOOL)arg4 index:(long long)arg5;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateAccessibilityLabel;
- (void)updateTitle;
- (void)updateDesc;
- (void)updateSelected;
- (void)updateMaskView;
- (void)setFirstCell:(BOOL)arg1;
- (void)setLastCell:(BOOL)arg1;
- (BOOL)isFirstCell;
- (BOOL)isLastCell;
- (void)updateLineView;
- (void)updateLastCellLineView;
- (void)updateFirstCellLineView;
- (void)onClickSelectButton;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_desc;
- (void)setM_desc:(id)arg1;
- (BOOL)m_selected;
- (void)setM_selected:(BOOL)arg1;
- (BOOL)m_canSelect;
- (void)setM_canSelect:(BOOL)arg1;
- (long long)m_index;
- (void)setM_index:(long long)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_selectedButton;
- (void)setM_selectedButton:(id)arg1;
- (id)m_maskView;
- (void)setM_maskView:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_firstLineView;
- (void)setM_firstLineView:(id)arg1;
- (BOOL)m_isFirstCell;
- (void)setM_isFirstCell:(BOOL)arg1;
- (BOOL)m_isLastCell;
- (void)setM_isLastCell:(BOOL)arg1;
- (void).cxx_destruct;
@end

