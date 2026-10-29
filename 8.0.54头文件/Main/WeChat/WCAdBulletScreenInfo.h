@interface WCAdBulletScreenInfo : NSObject <NSCoding>
{
    int _visibleBullets; // +0x8
    NSArray * _bulletTexts; // +0x10
    WCAdBulletScreenTextStyleInfo * _bulletTextStyle; // +0x18
    double _bulletShootingDelay; // +0x20
    double _bulletShootingDuration; // +0x28
    double _bulletShootingTime; // +0x30
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (int)visibleBullets;
- (id)bulletTexts;
- (void)setBulletTexts:(id)arg1;
- (id)bulletTextStyle;
- (void)setBulletTextStyle:(id)arg1;
- (double)bulletShootingDelay;
- (void)setBulletShootingDelay:(double)arg1;
- (double)bulletShootingDuration;
- (void)setBulletShootingDuration:(double)arg1;
- (double)bulletShootingTime;
- (void)setBulletShootingTime:(double)arg1;
- (void)setVisibleBullets:(int)arg1;
- (void).cxx_destruct;
@end

