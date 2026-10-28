@interface MMFinderLiveDragBarPageSheet : MMPageSheetBaseView
{
    MMLiveShopShelfDragBar * _dragBar; // +0x8
}
- (id)getDragBarAsView;
- (id)dragBar;
- (void)layoutSubviews;
- (void)setDetailView:(id)arg1;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)setDragBar:(id)arg1;
- (void).cxx_destruct;
@end
