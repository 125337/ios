@interface WCFinderSearchTitleView : MMTitleView
{
    long long _style; // +0x8
    UIImageView * _searchIconView; // +0x10
    MMTagTextField * _searchField; // +0x18
    MMUIButton * _rightClearButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)dynamicDelegate;
- (void)prepareTextView;
- (void)prepareBottomLine;
- (void)prepareCancelButton;
- (BOOL)enableSearch;
- (void)setEnableSearch:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg1;
- (BOOL)resignFirstResponder;
- (id)tintColor;
- (void)onClickCleanButton;
- (long long)style;
- (id)searchIconView;
- (void)setSearchIconView:(id)arg1;
- (id)searchField;
- (void)setSearchField:(id)arg1;
- (id)rightClearButton;
- (void)setRightClearButton:(id)arg1;
- (void).cxx_destruct;
@end
