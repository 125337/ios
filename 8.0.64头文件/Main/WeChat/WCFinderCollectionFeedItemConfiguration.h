@interface WCFinderCollectionFeedItemConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem, WCFinderCollectionViewReportableItem>
{
    WCFinderCollectionFeedCellConfig * _config; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    NSDictionary * _params; // +0x18
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)viewID;
- (unsigned long long)reportPolicy;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
