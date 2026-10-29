@interface WCFinderAuthorContactRecommendViewStyle : NSObject
{
    double _headIconSize; // +0x8
    double _authIconSize; // +0x10
    UIFont * _nicknameFont; // +0x18
    UIColor * _nicknameColor; // +0x20
}
+ (id)defaultStyle;
- (double)headIconSize;
- (void)setHeadIconSize:(double)arg1;
- (double)authIconSize;
- (void)setAuthIconSize:(double)arg1;
- (id)nicknameFont;
- (void)setNicknameFont:(id)arg1;
- (id)nicknameColor;
- (void)setNicknameColor:(id)arg1;
- (void).cxx_destruct;
@end

