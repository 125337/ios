@interface MMFinderLiveGiftStarTheme : NSObject
{
    BOOL _isLight; // +0x8
}
+ (id)themeForAnchor:(BOOL)arg1;
- (id)fg:(double)arg1 light:(double)arg2;
- (id)sheetBackgroundColor;
- (id)detailBackgroundColor;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)weakTextColor;
- (id)accentGoldColor;
- (id)linkColor;
- (id)recordRowBackgroundColor;
- (id)endMarkColor;
- (id)separatorColor;
- (id)collapseButtonBackgroundColor;
- (id)avatarPlaceholderBackgroundColor;
- (id)avatarPlaceholderBorderColor;
- (BOOL)isLight;
- (void)setIsLight:(BOOL)arg1;
@end
