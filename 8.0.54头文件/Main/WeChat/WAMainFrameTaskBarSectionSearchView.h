@interface WAMainFrameTaskBarSectionSearchView : WAMainFrameTaskBarSectionBaseView
{
    UIView * _searchArea; // +0x8
    WAMainFrameTaskBarSearchBar * _searchBar; // +0x10
    id <WAMainFrameTaskBarSectionSearchViewDelegate> _delegate; // +0x18
}
+ (long long)contentHeight;
- (void)initView;
- (void)onTapSearchArea;
- (void)layoutSubviews;
- (void)refreshSearchPlaceHolder:(id)arg1;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

