@interface QGPSetZoomLevelRangeParam : QGPBaseModel
{
    long long _minLevel; // +0x8
    long long _maxLevel; // +0x10
}
- (long long)minLevel;
- (void)setMinLevel:(long long)arg1;
- (long long)maxLevel;
- (void)setMaxLevel:(long long)arg1;
@end
