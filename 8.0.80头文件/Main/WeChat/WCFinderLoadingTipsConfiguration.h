@interface WCFinderLoadingTipsConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>
{
    unsigned long long _state; // +0x8
    id /* block */ _retryActionBlock; // +0x10
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id /* block */)retryActionBlock;
- (void)setRetryActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
