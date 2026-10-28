@interface WCFinderNativeDramaLoadingConfiguration : NSObject <UIContentConfiguration>
{
    unsigned long long _state; // +0x8
    NSString * _errorTips; // +0x10
}
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)errorTips;
- (void)setErrorTips:(id)arg1;
- (void).cxx_destruct;
@end
