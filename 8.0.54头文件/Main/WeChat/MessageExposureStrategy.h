@interface MessageExposureStrategy : NSObject
{
    unsigned int _exposure_count; // +0x8
    unsigned int _channel; // +0xc
    float _click_score; // +0x10
    int _ignore_exceed_exposure; // +0x14
    NSMutableArray * _history_message_list; // +0x18
    WifiStrategy * _wifi_strategy; // +0x20
    ExpireTimeStrategy * _expire_time_strategy; // +0x28
    BatteryStrategy * _battery_strategy; // +0x30
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)history_message_list;
- (void)setHistory_message_list:(id)arg1;
- (unsigned int)exposure_count;
- (void)setExposure_count:(unsigned int)arg1;
- (id)wifi_strategy;
- (void)setWifi_strategy:(id)arg1;
- (id)expire_time_strategy;
- (void)setExpire_time_strategy:(id)arg1;
- (id)battery_strategy;
- (void)setBattery_strategy:(id)arg1;
- (unsigned int)channel;
- (void)setChannel:(unsigned int)arg1;
- (float)click_score;
- (void)setClick_score:(float)arg1;
- (int)ignore_exceed_exposure;
- (void)setIgnore_exceed_exposure:(int)arg1;
- (void).cxx_destruct;
@end

