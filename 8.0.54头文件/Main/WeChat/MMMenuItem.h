@interface MMMenuItem : UIMenuItem
{
    UIColor * _titleColor; // +0x8
    NSString * _subtitle; // +0x10
    UIColor * _subtitleColor; // +0x18
    UIImage * _iconImage; // +0x20
    id _target; // +0x28
    long long _menuType; // +0x30
    id _userInfo; // +0x38
    NSString * _accessibilityLabel; // +0x40
    id /* block */ _itemViewCreateHandler; // +0x48
    UIFont * _font; // +0x50
    double _topPadding; // +0x58
    double _bottomPadding; // +0x60
    long long _linePosition; // +0x68
    id <MMMenuItemProtocol> _delegate; // +0x70
    id /* block */ _menuItemAnimator; // +0x78
    CGRect _itemFrame; // +0x80
}
- (CGSize)itemSizeWithWidth:(double)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 svgName:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 svgName:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 svgName:(id)arg2;
- (id)initWithType:(long long)arg1 action:(SEL)arg2;
- (id)initWithType:(long long)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setMenuItemAnimator:(id /* block */)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)subtitleColor;
- (void)setSubtitleColor:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (long long)menuType;
- (void)setMenuType:(long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id /* block */)itemViewCreateHandler;
- (void)setItemViewCreateHandler:(id /* block */)arg1;
- (CGRect)itemFrame;
- (void)setItemFrame:(CGRect)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (double)topPadding;
- (void)setTopPadding:(double)arg1;
- (double)bottomPadding;
- (void)setBottomPadding:(double)arg1;
- (long long)linePosition;
- (void)setLinePosition:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)menuItemAnimator;
- (void).cxx_destruct;
@end

