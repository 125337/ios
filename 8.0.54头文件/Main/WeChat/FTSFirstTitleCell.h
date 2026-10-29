@interface FTSFirstTitleCell : MMTableViewCell
{
    BOOL _showRightButton; // +0x8
    id <FTSFirstTitleCellDelegate> _m_delegate; // +0x10
    UIView * _topLine; // +0x18
    UILabel * _titleLabel; // +0x20
    MMUIButton * _rightButton; // +0x28
    UIView * _bottomLine; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateTitle:(id)arg1;
- (void)updateTitle:(id)arg1 rightButtonTitle:(id)arg2;
- (void)layoutSubviews;
- (void)onRightButtonTapped;
- (id)getTopLine;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)showRightButton;
- (void)setShowRightButton:(BOOL)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end

