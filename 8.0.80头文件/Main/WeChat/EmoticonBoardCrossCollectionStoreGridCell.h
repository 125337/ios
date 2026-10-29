@interface EmoticonBoardCrossCollectionStoreGridCell : UICollectionViewCell <EmoticonGridViewDelegate>
{
    id <EmoticonBoardCrossCollectionStoreGridCellDelegate> _delegsate; // +0x8
    EmoticonBoardCrossCollectionStoreGridCellModel * _model; // +0x10
    EmoticonGridView * _gridView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)hideAllFocus;
- (void)initViews;
- (void)prepareForReuse;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 gridView:(id)arg3;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 atIndex:(long long)arg2 withGridOffset:(CGPoint)arg3 description:(id)arg4;
- (void)shouldHideEmoticonPreview;
- (id)delegsate;
- (void)setDelegsate:(id)arg1;
- (id)model;
- (id)gridView;
- (void)setGridView:(id)arg1;
- (void).cxx_destruct;
@end
