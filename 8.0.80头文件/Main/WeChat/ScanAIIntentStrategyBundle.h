@interface ScanAIIntentStrategyBundle : NSObject
{
    ScanAIIntentStrategyConfiguration * _configurationSnapshot; // +0x8
    id <ScanAIIntentQualityPolicy> _qualityPolicy; // +0x10
    id <ScanAIIntentL1Policy> _l1Policy; // +0x18
    id <ScanAIIntentL2Policy> _l2Policy; // +0x20
    id <ScanAIIntentL3Policy> _l3Policy; // +0x28
}
- (id)initWithConfigurationSnapshot:(id)arg1 qualityPolicy:(id)arg2 l1Policy:(id)arg3 l2Policy:(id)arg4 l3Policy:(id)arg5;
- (id)configurationSnapshot;
- (id)qualityPolicy;
- (id)l1Policy;
- (id)l2Policy;
- (id)l3Policy;
- (void).cxx_destruct;
@end
