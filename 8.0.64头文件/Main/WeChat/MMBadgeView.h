@interface MMBadgeView : UIImageView
{
    int _maxCount; // +0x8
    NSString * _maxCountTip; // +0x10
    id /* block */ _shapeChangeBlock; // +0x18
    UILabel * _badgeLabel; // +0x20
    double _badgeFontSize; // +0x28
    unsigned long long _shape; // +0x30
    UIColor * _bgColor; // +0x38
    CGSize _badgeInset; // +0x40
}
+ (id)smallRedDot;
+ (id)liveSmallRedDot;
+ (double)liveSmallRedDotLen;
+ (id)redDotWithNumber:(unsigned long long)arg1;
+ (id)dotWithNumber:(unsigned long long)arg1 color:(id)arg2;
+ (id)NEWRedDot;
- (void)updateShape:(unsigned long long)arg1;
- (void)setValue:(unsigned long long)arg1;
- (void)innerSetCircleShape;
- (void)innerSetBadgeShape;
- (void)setString:(id)arg1;
- (void)setAsNew;
- (void)setAsSmallDot;
- (void)setAsSmallDotForChatSession;
- (void)setAsSmallDotForLiveSession;
- (void)setCircleDotWithDiameter:(double)arg1;
- (void)removeSmallDot;
- (void)setTextColor:(id)arg1;
- (void)updateWithFontSize:(double)arg1;
- (void)updateWithContentInset:(CGSize)arg1;
- (void)updateWithSize:(CGSize)arg1;
- (void)useStaticSize;
- (double)pixelAlignedCeil:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setCenter:(CGPoint)arg1;
- (unsigned long long)shape;
- (id)bgColor;
- (BOOL)isPureInteger:(id)arg1;
- (id)badgeLabel;
- (id)redDotImageWithDiameter:(double)arg1;
- (void)setRedDotImageWithDiameter:(double)arg1 shouldStretch:(BOOL)arg2;
- (id)cacheColorKeyForCurrentBadge;
- (id)strechBadgeImage:(id)arg1;
- (int)maxCount;
- (void)setMaxCount:(int)arg1;
- (id)maxCountTip;
- (void)setMaxCountTip:(id)arg1;
- (id /* block */)shapeChangeBlock;
- (void)setShapeChangeBlock:(id /* block */)arg1;
- (void)setBadgeLabel:(id)arg1;
- (double)badgeFontSize;
- (void)setBadgeFontSize:(double)arg1;
- (CGSize)badgeInset;
- (void)setBadgeInset:(CGSize)arg1;
- (void)setShape:(unsigned long long)arg1;
- (void)setBgColor:(id)arg1;
- (void).cxx_destruct;
@end
