@interface ContactSelectSearcherConfig : NSObject
{
    BOOL _colorProxyUseDarkMode; // +0x8
    UIColor * _searchFieldColor; // +0x10
    UIColor * _searchFieldTextColor; // +0x18
    UIColor * _searchPlaceHolderIconColor; // +0x20
    double _searchFieldCornerRadius; // +0x28
    double _searchBarHeight; // +0x30
    double _searchBarWidth; // +0x38
    UIColor * _footerTextColor; // +0x40
    UIColor * _emptySeperatorColorColor; // +0x48
}
- (id)init;
- (id)searchFieldColor;
- (void)setSearchFieldColor:(id)arg1;
- (id)searchFieldTextColor;
- (void)setSearchFieldTextColor:(id)arg1;
- (id)searchPlaceHolderIconColor;
- (void)setSearchPlaceHolderIconColor:(id)arg1;
- (double)searchFieldCornerRadius;
- (void)setSearchFieldCornerRadius:(double)arg1;
- (double)searchBarHeight;
- (void)setSearchBarHeight:(double)arg1;
- (double)searchBarWidth;
- (void)setSearchBarWidth:(double)arg1;
- (id)footerTextColor;
- (void)setFooterTextColor:(id)arg1;
- (id)emptySeperatorColorColor;
- (void)setEmptySeperatorColorColor:(id)arg1;
- (BOOL)colorProxyUseDarkMode;
- (void)setColorProxyUseDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
