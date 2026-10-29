@interface EcsWeShopFetchDataTrigger : NSObject
{
    unsigned int _timeInterval; // +0x8
    id <EcsWeShopFetchDataTriggerDelegate> _delegate; // +0x10
    MMTimer * _timer; // +0x18
}
- (id)initWithTimeInterval:(unsigned int)arg1;
- (void)start;
- (void)stop;
- (void)onTick;
- (void)innerStart;
- (unsigned int)timeInterval;
- (void)setTimeInterval:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
