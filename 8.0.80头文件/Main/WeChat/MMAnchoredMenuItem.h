@interface MMAnchoredMenuItem : NSObject
{
    BOOL _enabled; // +0x8
    NSString * _identifier; // +0x10
    NSString * _title; // +0x18
    UIImage * _leadingImage; // +0x20
    unsigned long long _rightIconMode; // +0x28
    UIImage * _rightIcon; // +0x30
    MMAnchoredMenu * _submenu; // +0x38
    id /* block */ _onItemSelected; // +0x40
    id /* block */ _onSubmenuBack; // +0x48
    id /* block */ _onItemViewExpose; // +0x50
    id /* block */ _action; // +0x58
}
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 action:(id /* block */)arg3;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)leadingImage;
- (void)setLeadingImage:(id)arg1;
- (unsigned long long)rightIconMode;
- (void)setRightIconMode:(unsigned long long)arg1;
- (id)rightIcon;
- (void)setRightIcon:(id)arg1;
- (id)submenu;
- (void)setSubmenu:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id /* block */)onItemSelected;
- (void)setOnItemSelected:(id /* block */)arg1;
- (id /* block */)onSubmenuBack;
- (void)setOnSubmenuBack:(id /* block */)arg1;
- (id /* block */)onItemViewExpose;
- (void)setOnItemViewExpose:(id /* block */)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
