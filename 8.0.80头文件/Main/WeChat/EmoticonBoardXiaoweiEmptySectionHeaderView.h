@interface EmoticonBoardXiaoweiEmptySectionHeaderView : UICollectionReusableView
{
    BOOL _showExpandAction; // +0x8
    BOOL _expanded; // +0x9
    id /* block */ _expandTapBlock; // +0x10
    id /* block */ _trashTapBlock; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _expandLabel; // +0x28
    UIImageView * _expandArrowImageView; // +0x30
    UIView * _dividerView; // +0x38
    UIImageView * _trashImageView; // +0x40
    UIButton * _expandTapButton; // +0x48
    UIButton * _trashTapButton; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshAccessoryAppearance;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 showExpandAction:(BOOL)arg2 expanded:(BOOL)arg3;
- (void)onTapExpandButton;
- (void)onTapTrashButton;
- (id /* block */)expandTapBlock;
- (void)setExpandTapBlock:(id /* block */)arg1;
- (id /* block */)trashTapBlock;
- (void)setTrashTapBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)expandLabel;
- (void)setExpandLabel:(id)arg1;
- (id)expandArrowImageView;
- (void)setExpandArrowImageView:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)trashImageView;
- (void)setTrashImageView:(id)arg1;
- (id)expandTapButton;
- (void)setExpandTapButton:(id)arg1;
- (id)trashTapButton;
- (void)setTrashTapButton:(id)arg1;
- (BOOL)showExpandAction;
- (void)setShowExpandAction:(BOOL)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
- (void).cxx_destruct;
@end
