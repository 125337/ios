@interface MMFinderLiveGiftStarMicBadgeOverlayView : UIView
{
    CAGradientLayer * _barLayer; // +0x8
    UIView * _badgeView; // +0x10
    UILabel * _nameLabel; // +0x18
}
+ (CGSize)sizeForLevel:(unsigned int)arg1;
- (id)initWithBadgeLevel:(unsigned int)arg1 iconUrl:(id)arg2;
- (void)layoutSubviews;
- (id)barLayer;
- (void)setBarLayer:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
