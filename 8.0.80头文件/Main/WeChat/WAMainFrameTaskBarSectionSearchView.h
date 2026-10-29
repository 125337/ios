@interface WAMainFrameTaskBarSectionSearchView : WAMainFrameTaskBarSectionBaseView
{
    UIView * _searchArea; // +0x8
    UIView * _searchBarView; // +0x10
    id <WAMainFrameTaskBarSectionSearchViewDelegate> _delegate; // +0x18
}
+ (long long)contentHeight;
- (void)initView;
- (void)onTapSearchArea;
- (void)layoutSubviews;
- (void)refreshSearchPlaceHolder:(id)arg1;
- (void)configSearchBar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
