@interface MMLiveTabsBarViewInitParameter : NSObject
{
    double _minTabWidth; // +0x8
    double _tabIndicatorWidth; // +0x10
    double _tabPadding; // +0x18
    UIColor * _tabIndicatorColor; // +0x20
    UIColor * _tabColor; // +0x28
    UIFont * _tabFont; // +0x30
}
- (double)minTabWidth;
- (void)setMinTabWidth:(double)arg1;
- (double)tabIndicatorWidth;
- (void)setTabIndicatorWidth:(double)arg1;
- (double)tabPadding;
- (void)setTabPadding:(double)arg1;
- (id)tabIndicatorColor;
- (void)setTabIndicatorColor:(id)arg1;
- (id)tabColor;
- (void)setTabColor:(id)arg1;
- (id)tabFont;
- (void)setTabFont:(id)arg1;
- (void).cxx_destruct;
@end
