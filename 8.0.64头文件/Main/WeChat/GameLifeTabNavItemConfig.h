@interface GameLifeTabNavItemConfig : NSObject
{
    BOOL _hasSmallRedDot; // +0x8
    NSString * _navKey; // +0x10
    UIImage * _rightBarItemImg; // +0x18
    UIImage * _rightBarItemDarkImg; // +0x20
    NSString * _rightBarItemTitle; // +0x28
    UIColor * _rightBarItemColor; // +0x30
    JumpInfo * _jumpInfo; // +0x38
    long long _badgetValue; // +0x40
}
+ (id)navItemConfigFromCornerSetting:(id)arg1;
+ (id)navItemConfigArrayFromCornerSettings:(id)arg1;
- (id)navKey;
- (void)setNavKey:(id)arg1;
- (id)rightBarItemImg;
- (void)setRightBarItemImg:(id)arg1;
- (id)rightBarItemDarkImg;
- (void)setRightBarItemDarkImg:(id)arg1;
- (id)rightBarItemTitle;
- (void)setRightBarItemTitle:(id)arg1;
- (id)rightBarItemColor;
- (void)setRightBarItemColor:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (long long)badgetValue;
- (void)setBadgetValue:(long long)arg1;
- (BOOL)hasSmallRedDot;
- (void)setHasSmallRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end
