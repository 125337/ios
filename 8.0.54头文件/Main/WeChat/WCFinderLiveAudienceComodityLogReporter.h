@interface WCFinderLiveAudienceComodityLogReporter : NSObject
{
    NSString * _event; // +0x8
    NSString * _params; // +0x10
}
- (void)reportFinderLiveAudienceComodityAction:(id)arg1 event:(id)arg2 params:(id)arg3;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

