@interface MMNavigationBarConfig : NSObject
{
    BOOL _useBlackStatusbar; // +0x8
    MMDynamicColor * _backgroundColor; // +0x10
    NSString * _barTitle; // +0x18
    MMDynamicColor * _titleColor; // +0x20
    long long _leftBarButtonType; // +0x28
    MMDynamicColor * _leftButtonColor; // +0x30
    NSString * _rightButtonTitle; // +0x38
    NSString * _rightButtonImage; // +0x40
    MMDynamicColor * _rightButtonColor; // +0x48
}
+ (id)NavigationBarConfigWithBackgroundColor:(id)arg1 useBlackStatusbar:(BOOL)arg2 barTitle:(id)arg3 titleColor:(id)arg4 leftBarButtonType:(long long)arg5 leftButtonColor:(id)arg6 rightButtonTitle:(id)arg7 rightButtonImage:(id)arg8 rightButtonColor:(id)arg9;
- (id)initWithBackgroundColor:(id)arg1 useBlackStatusbar:(BOOL)arg2 barTitle:(id)arg3 titleColor:(id)arg4 leftBarButtonType:(long long)arg5 leftButtonColor:(id)arg6 rightButtonTitle:(id)arg7 rightButtonImage:(id)arg8 rightButtonColor:(id)arg9;
- (id)description;
- (id)backgroundColor;
- (BOOL)useBlackStatusbar;
- (id)barTitle;
- (id)titleColor;
- (long long)leftBarButtonType;
- (id)leftButtonColor;
- (id)rightButtonTitle;
- (id)rightButtonImage;
- (id)rightButtonColor;
- (void).cxx_destruct;
@end
