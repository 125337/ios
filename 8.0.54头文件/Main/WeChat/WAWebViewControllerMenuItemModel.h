@interface WAWebViewControllerMenuItemModel : NSObject
{
    BOOL _disabled; // +0x8
    NSString * _title; // +0x10
    UIImage * _iconImage; // +0x18
    double _alpha; // +0x20
    unsigned long long _menuItemType; // +0x28
    NSDictionary * _userInfo; // +0x30
}
- (id)init;
- (id)toMMScrollActionSheetItem;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (unsigned long long)menuItemType;
- (void)setMenuItemType:(unsigned long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

