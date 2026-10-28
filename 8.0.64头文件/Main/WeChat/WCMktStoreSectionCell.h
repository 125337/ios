@interface WCMktStoreSectionCell : MMTableViewCell
{
    id <WCMktStoreSectionCellDelegate> _delegate; // +0x8
    UIImageView * _iconImgView; // +0x10
    MMUILabel * _leftLabel; // +0x18
    MMUILabel * _rightLabel; // +0x20
    UIImageView * _rightArrowImgView; // +0x28
    UIView * _seplineView; // +0x30
    UIButton * _coverBtn; // +0x38
    CardSortInfo * _sortInfo; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCellContentWithSortInfo:(id)arg1;
- (void)sortRuleCoverBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)leftLabel;
- (void)setLeftLabel:(id)arg1;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (id)rightArrowImgView;
- (void)setRightArrowImgView:(id)arg1;
- (id)seplineView;
- (void)setSeplineView:(id)arg1;
- (id)coverBtn;
- (void)setCoverBtn:(id)arg1;
- (id)sortInfo;
- (void)setSortInfo:(id)arg1;
- (void).cxx_destruct;
@end
