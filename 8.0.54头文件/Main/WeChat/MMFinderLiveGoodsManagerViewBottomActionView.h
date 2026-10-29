@interface MMFinderLiveGoodsManagerViewBottomActionView : UIView
{
    unsigned int _selectedCellsSize; // +0x8
    MMUIButton * _setTopButton; // +0x10
    MMUIButton * _deleteButton; // +0x18
    MMUILabel * _sizeLabel; // +0x20
    UIView * _seperatorView; // +0x28
    id <MMFinderLiveGoodsManagerViewBottomActionViewDelegate> _editingDelegate; // +0x30
}
+ (double)contentHeight;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDeleteButton;
- (void)layoutSetTopButton;
- (void)layoutSizeLabel;
- (void)layoutSeperatorLine;
- (void)deleteButtonAction;
- (void)setTopButtonAction;
- (void)updateWithSelectedCellSize:(unsigned long long)arg1;
- (void)updateButtonStatus;
- (id)setTopButton;
- (void)setSetTopButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg1;
- (unsigned int)selectedCellsSize;
- (void)setSelectedCellsSize:(unsigned int)arg1;
- (id)editingDelegate;
- (void)setEditingDelegate:(id)arg1;
- (void).cxx_destruct;
@end

