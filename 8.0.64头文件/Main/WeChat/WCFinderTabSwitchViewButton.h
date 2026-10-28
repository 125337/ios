@interface WCFinderTabSwitchViewButton : MMUIButton
{
    long long _index; // +0x8
    NSNumber * _uniqueId; // +0x10
    UIFont * _selectedFont; // +0x18
    UIFont * _normalFont; // +0x20
    double _titleFontSize; // +0x28
    UIView * _customView; // +0x30
    WCFinderTabSwitchCustomViewInfo * _customViewInfo; // +0x38
    id /* block */ _customLayout; // +0x40
    UILabel * _redDotLabel; // +0x48
    CGSize _expandSize; // +0x50
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
- (CGSize)expandSize;
- (void)setExpandSize:(CGSize)arg1;
- (void)setRedDotLabel:(id)arg1;
- (void).cxx_destruct;
@end
