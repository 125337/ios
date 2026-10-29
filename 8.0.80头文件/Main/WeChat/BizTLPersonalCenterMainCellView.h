@interface BizTLPersonalCenterMainCellView : MMTableViewCell
{
    UIView * _seperateView; // +0x8
    BizPersonalCenterCellList_CellInfo * _listCellInfo; // +0x10
    MMUILabel * _nameLabel; // +0x18
    UIImageView * _arrowIcon; // +0x20
    UIView * _highlightMaskView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (void)applyData:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)nameLabel;
- (id)arrowIcon;
- (id)highlightMaskView;
- (id)seperateView;
- (void)setSeperateView:(id)arg1;
- (id)listCellInfo;
- (void)setListCellInfo:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setArrowIcon:(id)arg1;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
