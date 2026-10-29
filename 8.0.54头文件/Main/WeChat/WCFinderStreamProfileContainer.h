@interface WCFinderStreamProfileContainer : MMUIViewController
{
    BOOL _displayCover; // +0x68
    BOOL _isHalfModel; // +0x69
}
- (BOOL)useTransparentNavibar;
- (long long)overrideUserInterfaceStyle;
- (BOOL)displayCover;
- (void)setDisplayCover:(BOOL)arg1;
- (BOOL)isHalfModel;
- (void)setIsHalfModel:(BOOL)arg1;
@end

