@interface WCFinderFooterConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>
{
    long long _state; // +0x8
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
@end
