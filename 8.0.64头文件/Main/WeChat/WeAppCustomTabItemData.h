@interface WeAppCustomTabItemData : NSObject
{
    BOOL _isSmallRedDot; // +0x8
    UIImage * _iconImg; // +0x10
    UIImage * _selectedIconImg; // +0x18
    NSString * _titleText; // +0x20
    NSString * _linkUrl; // +0x28
    NSString * _badgeValue; // +0x30
    UIColor * _badgeValueColor; // +0x38
}
- (void)readConfigFromDic:(id)arg1;
- (void)addDarkConfigFromDic:(id)arg1;
- (id)iconImg;
- (void)setIconImg:(id)arg1;
- (id)selectedIconImg;
- (void)setSelectedIconImg:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (BOOL)isSmallRedDot;
- (void)setIsSmallRedDot:(BOOL)arg1;
- (id)badgeValue;
- (void)setBadgeValue:(id)arg1;
- (id)badgeValueColor;
- (void)setBadgeValueColor:(id)arg1;
- (void).cxx_destruct;
@end
