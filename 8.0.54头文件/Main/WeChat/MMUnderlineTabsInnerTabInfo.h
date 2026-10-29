@interface MMUnderlineTabsInnerTabInfo : NSObject
{
    BOOL _selected; // +0x8
    MMUnderlineTabsBaseTabItem * _item; // +0x10
    double _tabViewX; // +0x18
    double _tabViewWidth; // +0x20
    double _underLineViewWidth; // +0x28
}
- (void)setSelected:(BOOL)arg1;
- (void)callSelectStateChangeBlock;
- (id)item;
- (void)setItem:(id)arg1;
- (double)tabViewX;
- (void)setTabViewX:(double)arg1;
- (double)tabViewWidth;
- (void)setTabViewWidth:(double)arg1;
- (double)underLineViewWidth;
- (void)setUnderLineViewWidth:(double)arg1;
- (BOOL)selected;
- (void).cxx_destruct;
@end

