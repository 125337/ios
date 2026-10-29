@interface CBTMomentLoadMoreTableViewCell : CBTMomentBaseTableViewCell
{
    MMUIButton * _loadMoreButton; // +0x8
    MMUIButton * _loadMoreImgButton; // +0x10
}
- (void)makeCellWithModel:(id)arg1 cellWidth:(double)arg2 indexPath:(id)arg3;
- (id)cellModel;
- (void)onLoadMoreButtonClicked;
- (id)loadMoreButton;
- (void)setLoadMoreButton:(id)arg1;
- (id)loadMoreImgButton;
- (void)setLoadMoreImgButton:(id)arg1;
- (void).cxx_destruct;
@end
