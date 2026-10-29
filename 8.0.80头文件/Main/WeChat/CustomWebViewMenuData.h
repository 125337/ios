@interface CustomWebViewMenuData : NSObject
{
    NSString * _mainMenuID; // +0x8
    NSString * _mainMenuIconImageName; // +0x10
    UIImage * _mainMenuIconImage; // +0x18
    NSString * _mainMenuUrl; // +0x20
    NSString * _mainMenuTitle; // +0x28
    unsigned long long _mainMenuActionType; // +0x30
    NSArray * _menuItems; // +0x38
    NSArray * _domains; // +0x40
}
- (void)setMainMenuID:(id)arg1;
- (BOOL)shouldShowCustomizeMenuWithUrl:(id)arg1;
- (id)mainMenuID;
- (id)mainMenuIconImageName;
- (void)setMainMenuIconImageName:(id)arg1;
- (id)mainMenuIconImage;
- (void)setMainMenuIconImage:(id)arg1;
- (id)mainMenuUrl;
- (void)setMainMenuUrl:(id)arg1;
- (id)mainMenuTitle;
- (void)setMainMenuTitle:(id)arg1;
- (unsigned long long)mainMenuActionType;
- (void)setMainMenuActionType:(unsigned long long)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (id)domains;
- (void)setDomains:(id)arg1;
- (void).cxx_destruct;
@end
