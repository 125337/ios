@interface EmoticonBoardCrossCollectionRecommendEmoticonSearchView : UICollectionReusableView
{
    id <EmoticonBoardCrossCollectionRecommendEmoticonSearchViewDelegate> _delegate; // +0x8
    UIButton * _searchButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)handleTapSearchButton:(id)arg1;
- (void)handleTapSearchTouchDown:(id)arg1;
- (void)handleTapSearchTouchUp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (void).cxx_destruct;
@end
