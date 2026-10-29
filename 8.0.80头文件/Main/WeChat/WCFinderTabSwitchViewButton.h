@interface WCFinderTabSwitchViewButton : MMUIButton
{
    BOOL _menuEnabled; // +0x8
    BOOL _menuExpanded; // +0x9
    long long _index; // +0x10
    NSNumber * _uniqueId; // +0x18
    UIFont * _selectedFont; // +0x20
    UIFont * _normalFont; // +0x28
    double _titleFontSize; // +0x30
    UIView * _customView; // +0x38
    WCFinderTabSwitchCustomViewInfo * _customViewInfo; // +0x40
    id /* block */ _customLayout; // +0x48
    UILabel * _redDotLabel; // +0x50
    UIImageView * _menuIndicatorView; // +0x58
    long long _menuIndicatorDisplayMode; // +0x60
}
- (void)setTitleFontSize:(double)arg1;
- (void)setSelectedFont:(id)arg1;
- (void)setNormalFont:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateFont;
- (void)setCustomView:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (void)updateRedDotUnreadCount:(unsigned long long)arg1;
- (id)redDotLabel;
- (void)layoutSubviews;
- (void)setMenuEnabled:(BOOL)arg1;
- (void)updateMenuIndicatorWithSelectionProgress:(double)arg1;
- (void)setMenuExpanded:(BOOL)arg1;
- (id)menuIndicatorView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)selectedFont;
- (id)normalFont;
- (double)titleFontSize;
- (id)customView;
- (id)customViewInfo;
- (void)setCustomViewInfo:(id)arg1;
- (id /* block */)customLayout;
- (void)setCustomLayout:(id /* block */)arg1;
- (void)setRedDotLabel:(id)arg1;
- (void)setMenuIndicatorView:(id)arg1;
- (BOOL)menuEnabled;
- (long long)menuIndicatorDisplayMode;
- (void)setMenuIndicatorDisplayMode:(long long)arg1;
- (BOOL)isMenuExpanded;
- (void).cxx_destruct;
@end
