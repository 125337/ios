@interface GameLifeTabViewNavConfig : NSObject
{
    BOOL _hideRightBarItem; // +0x8
    BOOL _showSystemRightBarItem; // +0x9
    BOOL _isWebViewLayoutUnderNav; // +0xa
    BOOL _hasShow; // +0xb
    NSString * _key; // +0x10
    NSString * _title; // +0x18
    UIColor * _titleColor; // +0x20
    double _titleAlpha; // +0x28
    UIColor * _navigationBarColor; // +0x30
    NSArray * _rightNavConfigItems; // +0x38
    NSNumber * _iconDark; // +0x40
}
- (id)initWithTitle:(id)arg1 titleAlpha:(double)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (double)titleAlpha;
- (void)setTitleAlpha:(double)arg1;
- (BOOL)hideRightBarItem;
- (void)setHideRightBarItem:(BOOL)arg1;
- (BOOL)showSystemRightBarItem;
- (void)setShowSystemRightBarItem:(BOOL)arg1;
- (id)navigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (id)rightNavConfigItems;
- (void)setRightNavConfigItems:(id)arg1;
- (BOOL)isWebViewLayoutUnderNav;
- (void)setIsWebViewLayoutUnderNav:(BOOL)arg1;
- (id)iconDark;
- (void)setIconDark:(id)arg1;
- (BOOL)hasShow;
- (void)setHasShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
