@interface PrivateLiveDataEntity : NSObject
{
    NSString * _liveResult; // +0x8
    NSString * _riskResult; // +0x10
    NSString * _extraInfo; // +0x18
}
- (id)liveResult;
- (void)setLiveResult:(id)arg1;
- (id)riskResult;
- (void)setRiskResult:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
