@interface WCFinderAuthorContactViewStyle : NSObject
{
    BOOL _showAuthProfessionLabel; // +0x8
    double _headIconSize; // +0x10
    double _authIconSize; // +0x18
    double _nickNameLeftMargin; // +0x20
    UIFont * _nicknameFont; // +0x28
    UIColor * _nicknameColor; // +0x30
}
+ (id)defaultStyle;
- (double)headIconSize;
- (void)setHeadIconSize:(double)arg1;
- (double)authIconSize;
- (void)setAuthIconSize:(double)arg1;
- (double)nickNameLeftMargin;
- (void)setNickNameLeftMargin:(double)arg1;
- (id)nicknameFont;
- (void)setNicknameFont:(id)arg1;
- (id)nicknameColor;
- (void)setNicknameColor:(id)arg1;
- (BOOL)showAuthProfessionLabel;
- (void)setShowAuthProfessionLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end
