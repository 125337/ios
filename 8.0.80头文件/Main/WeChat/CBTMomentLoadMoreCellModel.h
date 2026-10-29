@interface CBTMomentLoadMoreCellModel : CBTMomentBaseCellModel
{
    NSString * _title; // +0x8
    id <CBTMomentLoadMoreCellModelDelegate> _delegate; // +0x10
}
- (double)cellHeightWithWidth:(double)arg1;
- (void)onLoadMore;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
