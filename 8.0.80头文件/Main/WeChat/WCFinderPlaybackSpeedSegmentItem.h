@interface WCFinderPlaybackSpeedSegmentItem : NSObject
{
    long long _rateType; // +0x8
    NSString * _wording; // +0x10
}
+ (id)itemWithType:(long long)arg1 wording:(id)arg2;
- (long long)rateType;
- (void)setRateType:(long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end
