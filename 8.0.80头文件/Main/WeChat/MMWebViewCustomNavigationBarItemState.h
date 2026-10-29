@interface MMWebViewCustomNavigationBarItemState : MMObject
{
    BOOL _isRightBarItemJSApiDefined; // +0x8
    BOOL _isRightBarItemHidden; // +0x9
    BOOL _isRightSearchItemHidden; // +0xa
    BOOL _disableMinimizeBlock; // +0xb
    NSString * _pageSubTitle; // +0x10
    UIColor * _navigationBarColor; // +0x18
    NSString * _rightBarItemTitle; // +0x20
    UIColor * _rightBarItemTintColor; // +0x28
    UIImage * _rightBarItemIconImage; // +0x30
    id /* block */ _rightBarItemClickCallBack; // +0x38
}
- (BOOL)shouldBlockMinimization;
- (id)pageSubTitle;
- (void)setPageSubTitle:(id)arg1;
- (id)navigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (BOOL)isRightBarItemJSApiDefined;
- (void)setIsRightBarItemJSApiDefined:(BOOL)arg1;
- (id)rightBarItemTitle;
- (void)setRightBarItemTitle:(id)arg1;
- (id)rightBarItemTintColor;
- (void)setRightBarItemTintColor:(id)arg1;
- (id)rightBarItemIconImage;
- (void)setRightBarItemIconImage:(id)arg1;
- (id /* block */)rightBarItemClickCallBack;
- (void)setRightBarItemClickCallBack:(id /* block */)arg1;
- (BOOL)isRightBarItemHidden;
- (void)setIsRightBarItemHidden:(BOOL)arg1;
- (BOOL)isRightSearchItemHidden;
- (void)setIsRightSearchItemHidden:(BOOL)arg1;
- (BOOL)disableMinimizeBlock;
- (void)setDisableMinimizeBlock:(BOOL)arg1;
- (void).cxx_destruct;
@end
