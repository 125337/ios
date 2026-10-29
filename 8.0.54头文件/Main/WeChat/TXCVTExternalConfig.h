@interface TXCVTExternalConfig : NSObject
{
    Optional<int> _realtimeFlag; // +0x8
    Optional<int> _openGopFlag; // +0x10
    Optional<int> _maxFrameDelayCountFlag; // +0x18
    Optional<int> _frameDurationFlag; // +0x20
    Optional<int> _dataRateLimitsFlag; // +0x28
    Optional<int> _enableRestartStrategyFlag; // +0x30
    Optional<int> _lowerLimitBitrateHealth; // +0x38
    Optional<int> _upperLimitBitrateHealth; // +0x40
}
- (Optional<int>)realtimeFlag;
- (void)setRealtimeFlag:(Optional<int>)arg1;
- (Optional<int>)openGopFlag;
- (void)setOpenGopFlag:(Optional<int>)arg1;
- (Optional<int>)maxFrameDelayCountFlag;
- (void)setMaxFrameDelayCountFlag:(Optional<int>)arg1;
- (Optional<int>)frameDurationFlag;
- (void)setFrameDurationFlag:(Optional<int>)arg1;
- (Optional<int>)dataRateLimitsFlag;
- (void)setDataRateLimitsFlag:(Optional<int>)arg1;
- (Optional<int>)enableRestartStrategyFlag;
- (void)setEnableRestartStrategyFlag:(Optional<int>)arg1;
- (Optional<int>)lowerLimitBitrateHealth;
- (void)setLowerLimitBitrateHealth:(Optional<int>)arg1;
- (Optional<int>)upperLimitBitrateHealth;
- (void)setUpperLimitBitrateHealth:(Optional<int>)arg1;
- (id).cxx_construct;
@end

