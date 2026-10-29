@interface MMMultiMenuItem : NSObject
{
    BOOL _bIsLoading; // +0x8
    BOOL _bothShowIconAndTitle; // +0x9
    BOOL _configCustomMenuButton; // +0xa
    long long _editingStyle; // +0x10
    UIColor * _backgroundColor; // +0x18
    NSString * _nsTitle; // +0x20
    UIImage * _icon; // +0x28
    UIImage * _highlightedIcon; // +0x30
    double _menuItemWidth; // +0x38
    MMMultiMenuItem * _confirmMenuItem; // +0x40
    UIColor * _titleColor; // +0x48
    double _titleFontSize; // +0x50
    double _menuContentLeftMargin; // +0x58
    id /* block */ _getMenuButtonCallback; // +0x60
    id /* block */ _clickAction; // +0x68
    id /* block */ _buttonExtraConfigBlock; // +0x70
}
- (long long)editingStyle;
- (void)setEditingStyle:(long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)highlightedIcon;
- (void)setHighlightedIcon:(id)arg1;
- (double)menuItemWidth;
- (void)setMenuItemWidth:(double)arg1;
- (BOOL)bIsLoading;
- (void)setBIsLoading:(BOOL)arg1;
- (BOOL)bothShowIconAndTitle;
- (void)setBothShowIconAndTitle:(BOOL)arg1;
- (id)confirmMenuItem;
- (void)setConfirmMenuItem:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (double)titleFontSize;
- (void)setTitleFontSize:(double)arg1;
- (double)menuContentLeftMargin;
- (void)setMenuContentLeftMargin:(double)arg1;
- (BOOL)configCustomMenuButton;
- (void)setConfigCustomMenuButton:(BOOL)arg1;
- (id /* block */)getMenuButtonCallback;
- (void)setGetMenuButtonCallback:(id /* block */)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id /* block */)buttonExtraConfigBlock;
- (void)setButtonExtraConfigBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

