@interface WCAdUxInfo : NSObject
{
    NSString * _aid; // +0x8
    NSString * _traceId; // +0x10
    NSString * _gdtAId; // +0x18
    NSString * _adSrcTrigger; // +0x20
    NSString * _ts; // +0x28
    NSString * _circleId; // +0x30
    NSString * _contractFlag; // +0x38
    NSString * _slotId; // +0x40
    NSString * _empty1; // +0x48
    NSString * _token; // +0x50
    NSString * _tid; // +0x58
    NSString * _siteSet; // +0x60
    NSString * _adSource; // +0x68
    NSString * _wuid; // +0x70
}
+ (id)parseFromUxInfo:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)gdtAId;
- (void)setGdtAId:(id)arg1;
- (id)adSrcTrigger;
- (void)setAdSrcTrigger:(id)arg1;
- (id)ts;
- (void)setTs:(id)arg1;
- (id)circleId;
- (void)setCircleId:(id)arg1;
- (id)contractFlag;
- (void)setContractFlag:(id)arg1;
- (id)slotId;
- (void)setSlotId:(id)arg1;
- (id)empty1;
- (void)setEmpty1:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)siteSet;
- (void)setSiteSet:(id)arg1;
- (id)adSource;
- (void)setAdSource:(id)arg1;
- (id)wuid;
- (void)setWuid:(id)arg1;
- (void).cxx_destruct;
@end

