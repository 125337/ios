@interface MMUnderlineTabsBaseTabItem : NSObject
{
    double _customTabViewTop; // +0x8
    UIView * _tabView; // +0x10
    double _tabWidth; // +0x18
    double _underlineWidth; // +0x20
    double _autoUnderlineWidthExtension; // +0x28
    id /* block */ _onSelectStateChangeBlock; // +0x30
}
- (double)customTabViewTop;
- (void)setCustomTabViewTop:(double)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (double)tabWidth;
- (void)setTabWidth:(double)arg1;
- (double)underlineWidth;
- (void)setUnderlineWidth:(double)arg1;
- (double)autoUnderlineWidthExtension;
- (void)setAutoUnderlineWidthExtension:(double)arg1;
- (id /* block */)onSelectStateChangeBlock;
- (void)setOnSelectStateChangeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
